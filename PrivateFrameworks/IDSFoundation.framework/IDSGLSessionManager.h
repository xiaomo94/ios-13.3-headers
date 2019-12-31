/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSGLSessionManager : NSObject {
    int  _connFd;
    <IDSGLSessionManagerDelegate> * _delegate;
    bool  _isServer;
    id /* block */  _recvBlock;
    id /* block */  _sendBlock;
    NSMutableArray * _serverDataBufferArray;
    NSString * _sessionID;
    int  _streamFd;
    int  _zudpFd;
}

- (void).cxx_destruct;
- (void)_sendServerBufferedData;
- (bool)_startReliableClient;
- (bool)_startReliableServer;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 sendBlock:(id /* block */)arg2 recvBlock:(id /* block */)arg3 sessionID:(id)arg4;
- (void)invalidate;
- (void)recvGenericData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (void)recvZUDPData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (long long)sendGenericData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (long long)sendZUDPData:(char *)arg1 dataLength:(long long)arg2 linkID:(BOOL)arg3;
- (void)setServerStreamFd:(int)arg1 isServer:(bool)arg2;
- (bool)startReliableSession:(bool)arg1;

@end
