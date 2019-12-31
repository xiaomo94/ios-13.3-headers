/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionStatusController : NSObject <ICMusicSubscriptionStatusRemoteRequestingClient> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    unsigned long long  _numberOfActiveRemoteRequests;
    NSOperationQueue * _operationQueue;
    NSXPCConnection * _remoteRequestingClientConnection;
    NSObject<OS_dispatch_source> * _remoteRequestingClientConnectionInvalidationTimer;
    NSMutableDictionary * _statusHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_hasEntitlementForMusicSubscriptionStatusService;
+ (id)sharedStatusController;

- (void).cxx_destruct;
- (void)_cancelRemoteRequestingClientConnectionInvalidationTimer;
- (void)_didEndRemoteRequestForUniqueIdentifier:(id)arg1;
- (void)_handleSubscriptionStatusCacheDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusCacheUnderlyingCachingPropertiesDidChangeNotification:(id)arg1;
- (void)_invalidateRemoteRequestingClientConnection;
- (id)_remoteRequestingClientConnection;
- (void)_remoteRequestingClientConnectionInvalidationTimerDidExpire;
- (void)_scheduleInvalidationOfRemoteRequestingClientConnection;
- (id /* block */)_statusHandlerForUniqueIdentifier:(id)arg1;
- (void)_willBeginRemoteRequestForUniqueIdentifier:(id)arg1 statusHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)deliverSubscriptionStatusResponse:(id)arg1 forUniqueIdentifier:(id)arg2 error:(id)arg3;
- (void)disableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)disableSubscriptionWithCompletionHandler:(id /* block */)arg1;
- (void)enablePeriodicSubscriptionRefresh;
- (void)enableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)enableSubscriptionWithCompletionHandler:(id /* block */)arg1;
- (void)getSubscriptionStatusForUserIdentity:(id)arg1 bypassingCache:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)getSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getSubscriptionStatusWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)invalidateCachedSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)invalidateCachedSubscriptionStatusWithCompletionHandler:(id /* block */)arg1;
- (void)performSubscriptionStatusRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)performSubscriptionStatusRequest:(id)arg1 withStatusHandler:(id /* block */)arg2;
- (void)refreshSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)refreshSubscriptionUsingRequestContext:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)refreshSubscriptionWithCompletionHandler:(id /* block */)arg1;

@end
