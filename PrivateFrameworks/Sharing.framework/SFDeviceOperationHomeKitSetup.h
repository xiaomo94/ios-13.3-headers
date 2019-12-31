/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceOperationHomeKitSetup : NSObject <HMAccessoryBrowserDelegate, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate> {
    bool  _active;
    NSDictionary * _appDataSelf;
    id /* block */  _completionHandler;
    bool  _configuredStereoPair;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _hasHomePod;
    bool  _hasMultipleUsers;
    bool  _homeAppInstallUserDidChoose;
    HMAccessory * _homeKitAccessory;
    bool  _homeKitAddedAccessory;
    bool  _homeKitAddedAppData;
    HMAccessoryBrowser * _homeKitBrowser;
    HMDeviceSetupOperation * _homeKitDeviceSetupOperation;
    HMHomeManager * _homeKitHomeManager;
    bool  _homeKitHomeManagerReady;
    HMHome * _homeKitSelectedHome;
    HMRoom * _homeKitSelectedRoom;
    NSString * _homeKitSelectedRoomName;
    ACAccount * _iTunesAccount;
    NSString * _iTunesAccountID;
    bool  _keyExchangeOnly;
    double  _metricNonUserSeconds;
    double  _metricUserSeconds;
    bool  _pauseAfterUserInput;
    id /* block */  _pauseHandler;
    bool  _paused;
    bool  _personalRequestsDone;
    bool  _personalRequestsEnabled;
    id /* block */  _promptForHomeHandler;
    id /* block */  _promptForRoomHandler;
    id /* block */  _promptToInstallHomeAppHandler;
    bool  _reselectHome;
    unsigned long long  _startTicks;
    int  _state;
    HMAccessory * _stereoCounterpart;
    int  _stereoRole;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    TROperationQueue * _trOperationQueue;
    TRSession * _trSession;
}

@property (nonatomic, copy) NSDictionary *appDataSelf;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) bool hasHomePod;
@property (nonatomic, readonly) bool hasMultipleUsers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *homeKitSelectedHome;
@property (nonatomic, readonly, copy) NSString *homeKitSelectedRoomName;
@property (nonatomic, retain) ACAccount *iTunesAccount;
@property (nonatomic, copy) NSString *iTunesAccountID;
@property (nonatomic) bool keyExchangeOnly;
@property (nonatomic, readonly) double metricNonUserSeconds;
@property (nonatomic, readonly) double metricUserSeconds;
@property (nonatomic) bool pauseAfterUserInput;
@property (nonatomic, copy) id /* block */ pauseHandler;
@property (nonatomic) bool personalRequestsEnabled;
@property (nonatomic, copy) id /* block */ promptForHomeHandler;
@property (nonatomic, copy) id /* block */ promptForRoomHandler;
@property (nonatomic, copy) id /* block */ promptToInstallHomeAppHandler;
@property (nonatomic, retain) HMAccessory *stereoCounterpart;
@property (nonatomic) int stereoRole;
@property (readonly) Class superclass;
@property (nonatomic, retain) TRSession *trSession;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completeWithError:(id)arg1;
- (bool)_isOwnerOfHome:(id)arg1;
- (id)_mediaSystemForAccessory:(id)arg1;
- (id)_normalizedString:(id)arg1;
- (void)_removeSimilarRoomNames:(id)arg1 home:(id)arg2;
- (void)_restoreHomeApp;
- (void)_run;
- (void)_runHomeKitAddAccessory;
- (void)_runHomeKitAddAppData;
- (void)_runHomeKitAddHome;
- (void)_runHomeKitAssignRoom;
- (id)_runHomeKitAutoSelectHome:(bool)arg1;
- (bool)_runHomeKitConfigureStereoPairAndReturnError:(id*)arg1;
- (void)_runHomeKitDeviceSetup;
- (void)_runHomeKitSelectRoom;
- (void)_runHomeKitSetupRoom;
- (void)_runInit;
- (void)_runPersonalRequestsStart;
- (void)_startTimeout:(double)arg1;
- (void)_updateAccount;
- (void)_updateHomeStats;
- (void)accessoryBrowser:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)accessoryBrowser:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)activate;
- (id)appDataSelf;
- (id /* block */)completionHandler;
- (id)dispatchQueue;
- (id)findStereoCounterparts;
- (bool)hasHomePod;
- (bool)hasMultipleUsers;
- (void)homeAppInstallChoice:(bool)arg1;
- (id)homeKitSelectedHome;
- (id)homeKitSelectedRoomName;
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)iTunesAccount;
- (id)iTunesAccountID;
- (id)init;
- (void)invalidate;
- (bool)keyExchangeOnly;
- (double)metricNonUserSeconds;
- (double)metricUserSeconds;
- (bool)pauseAfterUserInput;
- (id /* block */)pauseHandler;
- (bool)personalRequestsEnabled;
- (id /* block */)promptForHomeHandler;
- (id /* block */)promptForRoomHandler;
- (id /* block */)promptToInstallHomeAppHandler;
- (void)reselectHome;
- (void)resume;
- (void)selectHome:(id)arg1;
- (void)selectRoom:(id)arg1;
- (void)setAppDataSelf:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setITunesAccount:(id)arg1;
- (void)setITunesAccountID:(id)arg1;
- (void)setKeyExchangeOnly:(bool)arg1;
- (void)setPauseAfterUserInput:(bool)arg1;
- (void)setPauseHandler:(id /* block */)arg1;
- (void)setPersonalRequestsEnabled:(bool)arg1;
- (void)setPromptForHomeHandler:(id /* block */)arg1;
- (void)setPromptForRoomHandler:(id /* block */)arg1;
- (void)setPromptToInstallHomeAppHandler:(id /* block */)arg1;
- (void)setStereoCounterpart:(id)arg1;
- (void)setStereoRole:(int)arg1;
- (void)setTrSession:(id)arg1;
- (id)stereoCounterpart;
- (int)stereoRole;
- (id)trSession;

@end
