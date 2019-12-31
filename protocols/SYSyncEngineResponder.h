/* Generated by RuntimeBrowser.
 */

@protocol SYSyncEngineResponder <NSObject>

@required

- (void)currentDeviceConnectionChanged:(bool)arg1;
- (void)currentDeviceProximityChanged:(bool)arg1;
- (void)deliveredMessageWithID:(NSString *)arg1 context:(NSDictionary *)arg2;
- (void)enqueuedMessageWithID:(NSString *)arg1 context:(NSDictionary *)arg2;
- (NSDictionary *)extraTransportOptions;
- (void)handleFileTransfer:(void *)arg1 metadata:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)handleOutOfBandData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)handleSyncError:(NSError *)arg1 forMessageWithIdentifier:(NSString *)arg2;
- (void)handleSyncRequest:(void *)arg1 ofType:(void *)arg2 response:(void *)arg3; // needs 3 arg types, found 9: PBCodable *, unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PBCodable *, NSDictionary *, void*
- (void)handleSyncResponse:(void *)arg1 ofType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PBCodable *, unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sentMessageWithID:(NSString *)arg1 context:(NSDictionary *)arg2;
- (void)serializeForIncomingSession:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)willAcceptMessageWithHeader:(SYMessageHeader *)arg1 messageID:(NSString *)arg2;

@end
