/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIOfflineKeyRenewalManager : NSObject <TVPDownloadDelegate, VUIStoreFPSKeyLoaderDelegate> {
    unsigned long long  _backgroundTaskIdentifier;
    TVPContentKeySession * _contentKeySession;
    NSMutableArray * _downloadsForRepairingKeys;
    NSTimer * _expirationTimer;
    NSMutableArray * _keyLoaders;
    NSTimer * _keyRenewalTimer;
    bool  _networkErrorOccurredDuringInvalidation;
    TVPStateMachine * _stateMachine;
}

@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (nonatomic, retain) TVPContentKeySession *contentKeySession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *downloadsForRepairingKeys;
@property (nonatomic, retain) NSTimer *expirationTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *keyLoaders;
@property (nonatomic, retain) NSTimer *keyRenewalTimer;
@property (nonatomic) bool networkErrorOccurredDuringInvalidation;
@property (nonatomic, retain) TVPStateMachine *stateMachine;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_expirationTimerDidFire:(id)arg1;
- (void)_fetchNewKeysForVideosWithBrokenKeys:(id)arg1;
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;
- (void)_networkReachbilityDidChange:(id)arg1;
- (void)_registerStateMachineHandlers;
- (void)_renewalTimerDidFire:(id)arg1;
- (void)_sendRenewalRequestForFirstArray:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)backgroundTaskIdentifier;
- (id)contentKeySession;
- (void)download:(id)arg1 didChangeStateTo:(long long)arg2;
- (id)downloadsForRepairingKeys;
- (id)expirationTimer;
- (id)init;
- (id)keyLoaders;
- (id)keyRenewalTimer;
- (bool)networkErrorOccurredDuringInvalidation;
- (void)setBackgroundTaskIdentifier:(unsigned long long)arg1;
- (void)setContentKeySession:(id)arg1;
- (void)setDownloadsForRepairingKeys:(id)arg1;
- (void)setExpirationTimer:(id)arg1;
- (void)setKeyLoaders:(id)arg1;
- (void)setKeyRenewalTimer:(id)arg1;
- (void)setNetworkErrorOccurredDuringInvalidation:(bool)arg1;
- (void)setStateMachine:(id)arg1;
- (id)stateMachine;
- (void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;
- (void)updateKeyRenewalAndExpiration;

@end
