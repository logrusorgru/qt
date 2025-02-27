// +build !minimal

#pragma once

#ifndef GO_QTWEBSOCKETS_H
#define GO_QTWEBSOCKETS_H

#include <stdint.h>

#ifdef __cplusplus
int QMaskGenerator_QMaskGenerator_QRegisterMetaType();
int QWebSocket_QWebSocket_QRegisterMetaType();
int QWebSocketServer_QWebSocketServer_QRegisterMetaType();
extern "C" {
#endif

struct QtWebSockets_PackedString { char* data; long long len; };
struct QtWebSockets_PackedList { void* data; long long len; };
void* QMaskGenerator_NewQMaskGenerator2(void* parent);
unsigned int QMaskGenerator_NextMask(void* ptr);
char QMaskGenerator_Seed(void* ptr);
void QMaskGenerator_DestroyQMaskGenerator(void* ptr);
void QMaskGenerator_DestroyQMaskGeneratorDefault(void* ptr);
void* QMaskGenerator___children_atList(void* ptr, int i);
void QMaskGenerator___children_setList(void* ptr, void* i);
void* QMaskGenerator___children_newList(void* ptr);
void* QMaskGenerator___dynamicPropertyNames_atList(void* ptr, int i);
void QMaskGenerator___dynamicPropertyNames_setList(void* ptr, void* i);
void* QMaskGenerator___dynamicPropertyNames_newList(void* ptr);
void* QMaskGenerator___findChildren_atList(void* ptr, int i);
void QMaskGenerator___findChildren_setList(void* ptr, void* i);
void* QMaskGenerator___findChildren_newList(void* ptr);
void* QMaskGenerator___findChildren_atList3(void* ptr, int i);
void QMaskGenerator___findChildren_setList3(void* ptr, void* i);
void* QMaskGenerator___findChildren_newList3(void* ptr);
void* QMaskGenerator___qFindChildren_atList2(void* ptr, int i);
void QMaskGenerator___qFindChildren_setList2(void* ptr, void* i);
void* QMaskGenerator___qFindChildren_newList2(void* ptr);
void QMaskGenerator_ChildEventDefault(void* ptr, void* event);
void QMaskGenerator_ConnectNotifyDefault(void* ptr, void* sign);
void QMaskGenerator_CustomEventDefault(void* ptr, void* event);
void QMaskGenerator_DeleteLaterDefault(void* ptr);
void QMaskGenerator_DisconnectNotifyDefault(void* ptr, void* sign);
char QMaskGenerator_EventDefault(void* ptr, void* e);
char QMaskGenerator_EventFilterDefault(void* ptr, void* watched, void* event);
void QMaskGenerator_TimerEventDefault(void* ptr, void* event);
void* QWebSocket_NewQWebSocket2(struct QtWebSockets_PackedString origin, long long version, void* parent);
void QWebSocket_Abort(void* ptr);
void QWebSocket_ConnectAboutToClose(void* ptr);
void QWebSocket_DisconnectAboutToClose(void* ptr);
void QWebSocket_AboutToClose(void* ptr);
void QWebSocket_ConnectBinaryFrameReceived(void* ptr);
void QWebSocket_DisconnectBinaryFrameReceived(void* ptr);
void QWebSocket_BinaryFrameReceived(void* ptr, void* frame, char isLastFrame);
void QWebSocket_ConnectBinaryMessageReceived(void* ptr);
void QWebSocket_DisconnectBinaryMessageReceived(void* ptr);
void QWebSocket_BinaryMessageReceived(void* ptr, void* message);
long long QWebSocket_BytesToWrite(void* ptr);
void QWebSocket_ConnectBytesWritten(void* ptr);
void QWebSocket_DisconnectBytesWritten(void* ptr);
void QWebSocket_BytesWritten(void* ptr, long long bytes);
void QWebSocket_Close(void* ptr, long long closeCode, struct QtWebSockets_PackedString reason);
void QWebSocket_CloseDefault(void* ptr, long long closeCode, struct QtWebSockets_PackedString reason);
long long QWebSocket_CloseCode(void* ptr);
struct QtWebSockets_PackedString QWebSocket_CloseReason(void* ptr);
void QWebSocket_ConnectConnected(void* ptr);
void QWebSocket_DisconnectConnected(void* ptr);
void QWebSocket_Connected(void* ptr);
void QWebSocket_ConnectDisconnected(void* ptr);
void QWebSocket_DisconnectDisconnected(void* ptr);
void QWebSocket_Disconnected(void* ptr);
long long QWebSocket_Error(void* ptr);
void QWebSocket_ConnectError2(void* ptr);
void QWebSocket_DisconnectError2(void* ptr);
void QWebSocket_Error2(void* ptr, long long error);
struct QtWebSockets_PackedString QWebSocket_ErrorString(void* ptr);
char QWebSocket_Flush(void* ptr);
void QWebSocket_IgnoreSslErrors(void* ptr);
void QWebSocket_IgnoreSslErrorsDefault(void* ptr);
void QWebSocket_IgnoreSslErrors2(void* ptr, void* errors);
char QWebSocket_IsValid(void* ptr);
void* QWebSocket_LocalAddress(void* ptr);
unsigned short QWebSocket_LocalPort(void* ptr);
void* QWebSocket_MaskGenerator(void* ptr);
void QWebSocket_Open(void* ptr, void* url);
void QWebSocket_OpenDefault(void* ptr, void* url);
void QWebSocket_Open2(void* ptr, void* request);
void QWebSocket_Open2Default(void* ptr, void* request);
struct QtWebSockets_PackedString QWebSocket_Origin(void* ptr);
long long QWebSocket_PauseMode(void* ptr);
void* QWebSocket_PeerAddress(void* ptr);
struct QtWebSockets_PackedString QWebSocket_PeerName(void* ptr);
unsigned short QWebSocket_PeerPort(void* ptr);
void QWebSocket_Ping(void* ptr, void* payload);
void QWebSocket_PingDefault(void* ptr, void* payload);
void QWebSocket_ConnectPong(void* ptr);
void QWebSocket_DisconnectPong(void* ptr);
void QWebSocket_Pong(void* ptr, unsigned long long elapsedTime, void* payload);
void QWebSocket_ConnectPreSharedKeyAuthenticationRequired(void* ptr);
void QWebSocket_DisconnectPreSharedKeyAuthenticationRequired(void* ptr);
void QWebSocket_PreSharedKeyAuthenticationRequired(void* ptr, void* authenticator);
void* QWebSocket_Proxy(void* ptr);
void QWebSocket_ConnectProxyAuthenticationRequired(void* ptr);
void QWebSocket_DisconnectProxyAuthenticationRequired(void* ptr);
void QWebSocket_ProxyAuthenticationRequired(void* ptr, void* proxy, void* authenticator);
long long QWebSocket_ReadBufferSize(void* ptr);
void QWebSocket_ConnectReadChannelFinished(void* ptr);
void QWebSocket_DisconnectReadChannelFinished(void* ptr);
void QWebSocket_ReadChannelFinished(void* ptr);
void* QWebSocket_Request(void* ptr);
void* QWebSocket_RequestUrl(void* ptr);
struct QtWebSockets_PackedString QWebSocket_ResourceName(void* ptr);
void QWebSocket_Resume(void* ptr);
long long QWebSocket_SendBinaryMessage(void* ptr, void* data);
long long QWebSocket_SendTextMessage(void* ptr, struct QtWebSockets_PackedString message);
void QWebSocket_SetMaskGenerator(void* ptr, void* maskGenerator);
void QWebSocket_SetPauseMode(void* ptr, long long pauseMode);
void QWebSocket_SetProxy(void* ptr, void* networkProxy);
void QWebSocket_SetReadBufferSize(void* ptr, long long size);
void QWebSocket_SetSslConfiguration(void* ptr, void* sslConfiguration);
void* QWebSocket_SslConfiguration(void* ptr);
void QWebSocket_ConnectSslErrors(void* ptr);
void QWebSocket_DisconnectSslErrors(void* ptr);
void QWebSocket_SslErrors(void* ptr, void* errors);
long long QWebSocket_State(void* ptr);
void QWebSocket_ConnectStateChanged(void* ptr);
void QWebSocket_DisconnectStateChanged(void* ptr);
void QWebSocket_StateChanged(void* ptr, long long state);
void QWebSocket_ConnectTextFrameReceived(void* ptr);
void QWebSocket_DisconnectTextFrameReceived(void* ptr);
void QWebSocket_TextFrameReceived(void* ptr, struct QtWebSockets_PackedString frame, char isLastFrame);
void QWebSocket_ConnectTextMessageReceived(void* ptr);
void QWebSocket_DisconnectTextMessageReceived(void* ptr);
void QWebSocket_TextMessageReceived(void* ptr, struct QtWebSockets_PackedString message);
long long QWebSocket_Version(void* ptr);
void QWebSocket_DestroyQWebSocket(void* ptr);
void QWebSocket_DestroyQWebSocketDefault(void* ptr);
void* QWebSocket___ignoreSslErrors_errors_atList2(void* ptr, int i);
void QWebSocket___ignoreSslErrors_errors_setList2(void* ptr, void* i);
void* QWebSocket___ignoreSslErrors_errors_newList2(void* ptr);
void* QWebSocket___sslErrors_errors_atList(void* ptr, int i);
void QWebSocket___sslErrors_errors_setList(void* ptr, void* i);
void* QWebSocket___sslErrors_errors_newList(void* ptr);
void* QWebSocket___children_atList(void* ptr, int i);
void QWebSocket___children_setList(void* ptr, void* i);
void* QWebSocket___children_newList(void* ptr);
void* QWebSocket___dynamicPropertyNames_atList(void* ptr, int i);
void QWebSocket___dynamicPropertyNames_setList(void* ptr, void* i);
void* QWebSocket___dynamicPropertyNames_newList(void* ptr);
void* QWebSocket___findChildren_atList(void* ptr, int i);
void QWebSocket___findChildren_setList(void* ptr, void* i);
void* QWebSocket___findChildren_newList(void* ptr);
void* QWebSocket___findChildren_atList3(void* ptr, int i);
void QWebSocket___findChildren_setList3(void* ptr, void* i);
void* QWebSocket___findChildren_newList3(void* ptr);
void* QWebSocket___qFindChildren_atList2(void* ptr, int i);
void QWebSocket___qFindChildren_setList2(void* ptr, void* i);
void* QWebSocket___qFindChildren_newList2(void* ptr);
void QWebSocket_ChildEventDefault(void* ptr, void* event);
void QWebSocket_ConnectNotifyDefault(void* ptr, void* sign);
void QWebSocket_CustomEventDefault(void* ptr, void* event);
void QWebSocket_DeleteLaterDefault(void* ptr);
void QWebSocket_DisconnectNotifyDefault(void* ptr, void* sign);
char QWebSocket_EventDefault(void* ptr, void* e);
char QWebSocket_EventFilterDefault(void* ptr, void* watched, void* event);
void QWebSocket_TimerEventDefault(void* ptr, void* event);
void* QWebSocketCorsAuthenticator_NewQWebSocketCorsAuthenticator(struct QtWebSockets_PackedString origin);
void* QWebSocketCorsAuthenticator_NewQWebSocketCorsAuthenticator2(void* other);
void* QWebSocketCorsAuthenticator_NewQWebSocketCorsAuthenticator3(void* other);
char QWebSocketCorsAuthenticator_Allowed(void* ptr);
struct QtWebSockets_PackedString QWebSocketCorsAuthenticator_Origin(void* ptr);
void QWebSocketCorsAuthenticator_SetAllowed(void* ptr, char allowed);
void QWebSocketCorsAuthenticator_Swap(void* ptr, void* other);
void QWebSocketCorsAuthenticator_DestroyQWebSocketCorsAuthenticator(void* ptr);
void* QWebSocketServer_NewQWebSocketServer2(struct QtWebSockets_PackedString serverName, long long secureMode, void* parent);
void QWebSocketServer_ConnectAcceptError(void* ptr);
void QWebSocketServer_DisconnectAcceptError(void* ptr);
void QWebSocketServer_AcceptError(void* ptr, long long socketError);
void QWebSocketServer_Close(void* ptr);
void QWebSocketServer_ConnectClosed(void* ptr);
void QWebSocketServer_DisconnectClosed(void* ptr);
void QWebSocketServer_Closed(void* ptr);
long long QWebSocketServer_Error(void* ptr);
struct QtWebSockets_PackedString QWebSocketServer_ErrorString(void* ptr);
void QWebSocketServer_HandleConnection(void* ptr, void* socket);
char QWebSocketServer_HasPendingConnections(void* ptr);
char QWebSocketServer_IsListening(void* ptr);
char QWebSocketServer_Listen(void* ptr, void* address, unsigned short port);
int QWebSocketServer_MaxPendingConnections(void* ptr);
void QWebSocketServer_ConnectNewConnection(void* ptr);
void QWebSocketServer_DisconnectNewConnection(void* ptr);
void QWebSocketServer_NewConnection(void* ptr);
void* QWebSocketServer_NextPendingConnection(void* ptr);
void* QWebSocketServer_NextPendingConnectionDefault(void* ptr);
void QWebSocketServer_ConnectOriginAuthenticationRequired(void* ptr);
void QWebSocketServer_DisconnectOriginAuthenticationRequired(void* ptr);
void QWebSocketServer_OriginAuthenticationRequired(void* ptr, void* authenticator);
void QWebSocketServer_PauseAccepting(void* ptr);
void QWebSocketServer_ConnectPeerVerifyError(void* ptr);
void QWebSocketServer_DisconnectPeerVerifyError(void* ptr);
void QWebSocketServer_PeerVerifyError(void* ptr, void* error);
void QWebSocketServer_ConnectPreSharedKeyAuthenticationRequired(void* ptr);
void QWebSocketServer_DisconnectPreSharedKeyAuthenticationRequired(void* ptr);
void QWebSocketServer_PreSharedKeyAuthenticationRequired(void* ptr, void* authenticator);
void* QWebSocketServer_Proxy(void* ptr);
void QWebSocketServer_ResumeAccepting(void* ptr);
long long QWebSocketServer_SecureMode(void* ptr);
void* QWebSocketServer_ServerAddress(void* ptr);
void QWebSocketServer_ConnectServerError(void* ptr);
void QWebSocketServer_DisconnectServerError(void* ptr);
void QWebSocketServer_ServerError(void* ptr, long long closeCode);
struct QtWebSockets_PackedString QWebSocketServer_ServerName(void* ptr);
unsigned short QWebSocketServer_ServerPort(void* ptr);
void* QWebSocketServer_ServerUrl(void* ptr);
void QWebSocketServer_SetMaxPendingConnections(void* ptr, int numConnections);
void QWebSocketServer_SetProxy(void* ptr, void* networkProxy);
void QWebSocketServer_SetServerName(void* ptr, struct QtWebSockets_PackedString serverName);
void QWebSocketServer_SetSslConfiguration(void* ptr, void* sslConfiguration);
void* QWebSocketServer_SslConfiguration(void* ptr);
void QWebSocketServer_ConnectSslErrors(void* ptr);
void QWebSocketServer_DisconnectSslErrors(void* ptr);
void QWebSocketServer_SslErrors(void* ptr, void* errors);
struct QtWebSockets_PackedList QWebSocketServer_SupportedVersions(void* ptr);
void QWebSocketServer_DestroyQWebSocketServer(void* ptr);
void QWebSocketServer_DestroyQWebSocketServerDefault(void* ptr);
void* QWebSocketServer___sslErrors_errors_atList(void* ptr, int i);
void QWebSocketServer___sslErrors_errors_setList(void* ptr, void* i);
void* QWebSocketServer___sslErrors_errors_newList(void* ptr);
long long QWebSocketServer___supportedVersions_atList(void* ptr, int i);
void QWebSocketServer___supportedVersions_setList(void* ptr, long long i);
void* QWebSocketServer___supportedVersions_newList(void* ptr);
void* QWebSocketServer___children_atList(void* ptr, int i);
void QWebSocketServer___children_setList(void* ptr, void* i);
void* QWebSocketServer___children_newList(void* ptr);
void* QWebSocketServer___dynamicPropertyNames_atList(void* ptr, int i);
void QWebSocketServer___dynamicPropertyNames_setList(void* ptr, void* i);
void* QWebSocketServer___dynamicPropertyNames_newList(void* ptr);
void* QWebSocketServer___findChildren_atList(void* ptr, int i);
void QWebSocketServer___findChildren_setList(void* ptr, void* i);
void* QWebSocketServer___findChildren_newList(void* ptr);
void* QWebSocketServer___findChildren_atList3(void* ptr, int i);
void QWebSocketServer___findChildren_setList3(void* ptr, void* i);
void* QWebSocketServer___findChildren_newList3(void* ptr);
void* QWebSocketServer___qFindChildren_atList2(void* ptr, int i);
void QWebSocketServer___qFindChildren_setList2(void* ptr, void* i);
void* QWebSocketServer___qFindChildren_newList2(void* ptr);
void QWebSocketServer_ChildEventDefault(void* ptr, void* event);
void QWebSocketServer_ConnectNotifyDefault(void* ptr, void* sign);
void QWebSocketServer_CustomEventDefault(void* ptr, void* event);
void QWebSocketServer_DeleteLaterDefault(void* ptr);
void QWebSocketServer_DisconnectNotifyDefault(void* ptr, void* sign);
char QWebSocketServer_EventDefault(void* ptr, void* e);
char QWebSocketServer_EventFilterDefault(void* ptr, void* watched, void* event);
void QWebSocketServer_TimerEventDefault(void* ptr, void* event);

#ifdef __cplusplus
}
#endif

#endif