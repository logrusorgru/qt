// +build !minimal

package webview

//#include <stdint.h>
//#include <stdlib.h>
//#include <string.h>
//#include "webview.h"
import "C"
import (
	"runtime"
	"strings"
	"unsafe"
)

func cGoUnpackString(s C.struct_QtWebView_PackedString) string {
	if int(s.len) == -1 {
		return C.GoString(s.data)
	}
	return C.GoStringN(s.data, C.int(s.len))
}
func cGoUnpackBytes(s C.struct_QtWebView_PackedString) []byte {
	if int(s.len) == -1 {
		gs := C.GoString(s.data)
		return *(*[]byte)(unsafe.Pointer(&gs))
	}
	return C.GoBytes(unsafe.Pointer(s.data), C.int(s.len))
}
func unpackStringList(s string) []string {
	if len(s) == 0 {
		return make([]string, 0)
	}
	return strings.Split(s, "¡¦!")
}

type QtWebView struct {
	ptr unsafe.Pointer
}

type QtWebView_ITF interface {
	QtWebView_PTR() *QtWebView
}

func (ptr *QtWebView) QtWebView_PTR() *QtWebView {
	return ptr
}

func (ptr *QtWebView) Pointer() unsafe.Pointer {
	if ptr != nil {
		return ptr.ptr
	}
	return nil
}

func (ptr *QtWebView) SetPointer(p unsafe.Pointer) {
	if ptr != nil {
		ptr.ptr = p
	}
}

func PointerFromQtWebView(ptr QtWebView_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QtWebView_PTR().Pointer()
	}
	return nil
}

func NewQtWebViewFromPointer(ptr unsafe.Pointer) (n *QtWebView) {
	n = new(QtWebView)
	n.SetPointer(ptr)
	return
}

func (ptr *QtWebView) DestroyQtWebView() {
	if ptr != nil {
		C.free(ptr.Pointer())
		ptr.SetPointer(nil)
		runtime.SetFinalizer(ptr, nil)
	}
}

func QtWebView_Initialize() {
	C.QtWebView_QtWebView_Initialize()
}

func (ptr *QtWebView) Initialize() {
	C.QtWebView_QtWebView_Initialize()
}
