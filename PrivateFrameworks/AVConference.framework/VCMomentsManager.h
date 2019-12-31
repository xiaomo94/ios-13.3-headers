/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMomentsManager : NSObject <VCMomentsMessengerDelegate> {
    id  _delegate;
    NSMutableDictionary * _streamTokenList;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCMomentsMessengerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)messengerFromClientContext:(id)arg1;
- (id)newRequestWithArguments:(id)arg1 state:(unsigned char)arg2;
- (void)notifyClientsWithStreamToken:(long long)arg1 service:(char *)arg2 arguments:(id)arg3;
- (void)registerBlocksForService;
- (void)registerMomentsMessenger:(id)arg1 withStreamToken:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 stillImageURL:(id)arg3 movieURL:(id)arg4 error:(id)arg5;
- (void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(bool)arg3;
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3;
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;
- (void)unregisterMomentsMessengerWithStreamToken:(long long)arg1;

@end
