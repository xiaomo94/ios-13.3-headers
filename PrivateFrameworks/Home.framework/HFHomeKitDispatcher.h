/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFHomeKitDispatcher : NSObject <HFHomeAppInstallStateArbiterObserver, HFLocationSensingCoordinatorDelegate, HFStateRestorationSettingsObserver, _HFSettingsObserverTupleOwning> {
    NADelegateDispatcher * _accessoryObserverDispatcher;
    NSMutableArray * _allHomesPromises;
    NADelegateDispatcher * _audioControlObserverDispatcher;
    NADelegateDispatcher * _cameraObserverDispatcher;
    NSMutableArray * _firstHomeAddedPromises;
    bool  _hasLoadedHomes;
    HMHome * _home;
    int  _homeKitPreferencesChangedNotifyToken;
    NADelegateDispatcher * _homeKitSettingsObserverDispatcher;
    HMHomeManager * _homeManager;
    NADelegateDispatcher * _homeManagerObserverDispatcher;
    NADelegateDispatcher * _homeObserverDispatcher;
    NSMutableArray * _homePromises;
    NSTimer * _homeSensingIdleTimer;
    HFLocationSensingCoordinator * _locationCoordinator;
    NAFuture * _locationCoordinatorSetupFuture;
    NADelegateDispatcher * _mediaObjectObserverDispatcher;
    NADelegateDispatcher * _mediaSessionObserverDispatcher;
    NADelegateDispatcher * _networkConfigurationObserverDispatcher;
    NADelegateDispatcher * _networkRouterObserverDispatcher;
    HMHome * _overrideHome;
    NSMutableDictionary * _remoteAccessStateByHomeID;
    NSMutableArray * _requestedSoftwareDownloads;
    NSMutableArray * _requestedSoftwareInstalls;
    NADelegateDispatcher * _residentDeviceObserverDispatcher;
    HMHome * _selectedHome;
    NSMutableArray * _settingsObserverTuples;
    NADelegateDispatcher * _softwareUpdateControllerObserverDispatcher;
    NADelegateDispatcher * _softwareUpdateObserverDispatcher;
    NADelegateDispatcher * _symptomFixSessionObserverDispatcher;
    NADelegateDispatcher * _symptomsHandlerObserverDispatcher;
    NADelegateDispatcher * _televisionObserverDispatcher;
    NADelegateDispatcher * _userObserverDispatcher;
}

@property (nonatomic, retain) NADelegateDispatcher *accessoryObserverDispatcher;
@property (nonatomic, readonly) NAFuture *allHomesFuture;
@property (nonatomic, retain) NSMutableArray *allHomesPromises;
@property (nonatomic, retain) NADelegateDispatcher *audioControlObserverDispatcher;
@property (nonatomic, retain) NADelegateDispatcher *cameraObserverDispatcher;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NAFuture *firstHomeAddedFuture;
@property (nonatomic, retain) NSMutableArray *firstHomeAddedPromises;
@property (nonatomic) bool hasLoadedHomes;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, readonly) NAFuture *homeFuture;
@property (nonatomic) int homeKitPreferencesChangedNotifyToken;
@property (nonatomic, retain) NADelegateDispatcher *homeKitSettingsObserverDispatcher;
@property (nonatomic, retain) HMHomeManager *homeManager;
@property (nonatomic, retain) NADelegateDispatcher *homeManagerObserverDispatcher;
@property (nonatomic, retain) NADelegateDispatcher *homeObserverDispatcher;
@property (nonatomic, retain) NSMutableArray *homePromises;
@property (nonatomic, retain) NSTimer *homeSensingIdleTimer;
@property (nonatomic, retain) HFLocationSensingCoordinator *locationCoordinator;
@property (nonatomic, retain) NAFuture *locationCoordinatorSetupFuture;
@property (nonatomic, readonly) NAFuture *locationSensingAvailableFuture;
@property (nonatomic, retain) NADelegateDispatcher *mediaObjectObserverDispatcher;
@property (nonatomic, retain) NADelegateDispatcher *mediaSessionObserverDispatcher;
@property (nonatomic, retain) NADelegateDispatcher *networkConfigurationObserverDispatcher;
@property (nonatomic, retain) NADelegateDispatcher *networkRouterObserverDispatcher;
@property (nonatomic, retain) HMHome *overrideHome;
@property (nonatomic, retain) NSMutableDictionary *remoteAccessStateByHomeID;
@property (nonatomic, readonly) NSMutableArray *requestedSoftwareDownloads;
@property (nonatomic, readonly) NSMutableArray *requestedSoftwareInstalls;
@property (nonatomic, retain) NADelegateDispatcher *residentDeviceObserverDispatcher;
@property (nonatomic, retain) HMHome *selectedHome;
@property (nonatomic) bool selectedHomeFollowsLocation;
@property (nonatomic, retain) NSMutableArray *settingsObserverTuples;
@property (nonatomic, retain) NADelegateDispatcher *softwareUpdateControllerObserverDispatcher;
@property (nonatomic, retain) NADelegateDispatcher *softwareUpdateObserverDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, retain) NADelegateDispatcher *symptomFixSessionObserverDispatcher;
@property (nonatomic, retain) NADelegateDispatcher *symptomsHandlerObserverDispatcher;
@property (nonatomic, retain) NADelegateDispatcher *televisionObserverDispatcher;
@property (nonatomic, retain) NADelegateDispatcher *userObserverDispatcher;

+ (id)_defaultLogSettings;
+ (unsigned long long)_homeManagerCreationPolicy;
+ (id)_logSettingsWithFormatter:(id /* block */)arg1;
+ (id)configuration;
+ (void)initialize;
+ (void)setConfiguration:(id)arg1;
+ (id)sharedDispatcher;

- (void).cxx_destruct;
- (void)_createHomeManagerIfNecessary;
- (void)_finishAllHomesPromises:(id)arg1;
- (void)_finishFirstHomeAddedPromises:(id)arg1;
- (void)_finishHomePromises:(id)arg1;
- (void)_handleHomeManagerDidUpdateHomes:(id)arg1;
- (id)_primaryHome;
- (void)_requestSelectedHome:(id)arg1;
- (void)_setDelegationEnabled:(bool)arg1 forAccessoryHierarchy:(id)arg2;
- (void)_setDelegationEnabled:(bool)arg1 forMediaProfileContainer:(id)arg2 session:(id)arg3;
- (void)_setDelegationEnabled:(bool)arg1 forUser:(id)arg2;
- (void)_setDelegationEnabledForObjectsInCurrentHome:(bool)arg1;
- (void)_setupAccessoryObserver;
- (void)_setupHomeManagerObserver;
- (void)_setupHomeObserver;
- (id)_setupLocationSensingCoordinator;
- (void)_setupMediaObjectObserver;
- (void)_setupMediaSessionObserver;
- (void)_setupResidentDeviceObserver;
- (void)_setupSoftwareUpdateObserver;
- (void)_setupStateDumpHandlers;
- (void)_setupSymptomFixSessionObserver;
- (bool)_shouldPersistSelectedHomeToDefaults;
- (void)_updateRemoteAccessStateForHome:(id)arg1 notifyingObservers:(bool)arg2;
- (id)accessoryObserverDispatcher;
- (void)addAccessoryObserver:(id)arg1;
- (void)addAccessorySettingObserver:(id)arg1;
- (void)addAccessorySettingObserver:(id)arg1 forSettings:(id)arg2;
- (void)addAccessorySettingObserver:(id)arg1 forSettings:(id)arg2 setting:(id)arg3;
- (void)addAudioControlObserver:(id)arg1;
- (void)addCameraObserver:(id)arg1;
- (void)addHomeKitSettingsObserver:(id)arg1;
- (void)addHomeManagerObserver:(id)arg1;
- (void)addHomeObserver:(id)arg1;
- (void)addMediaObjectObserver:(id)arg1;
- (void)addMediaProfileObserver:(id)arg1;
- (void)addMediaSessionObserver:(id)arg1;
- (void)addNetworkConfigurationObserver:(id)arg1;
- (void)addNetworkRouterObserver:(id)arg1;
- (void)addResidentDeviceObserver:(id)arg1;
- (void)addSoftwareUpdateControllerObserver:(id)arg1;
- (void)addSoftwareUpdateObserver:(id)arg1;
- (void)addSymptomFixSessionObserver:(id)arg1;
- (void)addSymptomsHandlerObserver:(id)arg1;
- (void)addTelevisionObserver:(id)arg1;
- (void)addUserObserver:(id)arg1;
- (id)allHomesFuture;
- (id)allHomesPromises;
- (id)audioControlObserverDispatcher;
- (id)cameraObserverDispatcher;
- (void)coordinator:(id)arg1 homeSensingStatusDidChange:(bool)arg2;
- (void)coordinator:(id)arg1 locationSensingAvailabilityDidChange:(bool)arg2;
- (void)dealloc;
- (void)dispatchAccessoryObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchAudioControlObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchCameraObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchHomeKitSettingMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchHomeKitSettingsObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchHomeManagerObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchHomeObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchMediaObjectObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchMediaSessionObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchNetworkConfigurationObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchNetworkRouterObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchSoftwareUpdateControllerMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchSoftwareUpdateMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchSymptomFixSessionObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchSymptomsHandlerMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchTelevisionObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (void)dispatchUserObserverMessage:(id /* block */)arg1 sender:(id)arg2;
- (id)firstHomeAddedFuture;
- (id)firstHomeAddedPromises;
- (bool)hasLoadedHomes;
- (bool)hasRequestedSoftwareDownload:(id)arg1;
- (bool)hasRequestedSoftwareInstall:(id)arg1;
- (id)home;
- (id)homeFuture;
- (int)homeKitPreferencesChangedNotifyToken;
- (id)homeKitSettingsObserverDispatcher;
- (id)homeManager;
- (id)homeManagerObserverDispatcher;
- (id)homeObserverDispatcher;
- (id)homePromises;
- (id)homeSensingActiveFuture;
- (id)homeSensingIdleTimer;
- (id)init;
- (void)installStateArbiter:(id)arg1 installStateDidChange:(bool)arg2;
- (id)locationCoordinator;
- (id)locationCoordinatorSetupFuture;
- (id)locationSensingAvailableFuture;
- (void)markUpdate:(id)arg1 asRequested:(bool)arg2;
- (id)mediaObjectObserverDispatcher;
- (id)mediaSessionObserverDispatcher;
- (id)networkConfigurationObserverDispatcher;
- (id)networkRouterObserverDispatcher;
- (id)overrideHome;
- (id)remoteAccessStateByHomeID;
- (void)removeAccessoryObserver:(id)arg1;
- (void)removeAccessorySettingObserver:(id)arg1;
- (void)removeAccessorySettingObserver:(id)arg1 forSettings:(id)arg2;
- (void)removeAccessorySettingObserver:(id)arg1 forSettings:(id)arg2 setting:(id)arg3;
- (void)removeAudioControlObserver:(id)arg1;
- (void)removeCameraObserver:(id)arg1;
- (void)removeHomeKitSettingsObserver:(id)arg1;
- (void)removeHomeManagerObserver:(id)arg1;
- (void)removeHomeObserver:(id)arg1;
- (void)removeMediaObjectObserver:(id)arg1;
- (void)removeMediaProfileObserver:(id)arg1;
- (void)removeMediaSessionObserver:(id)arg1;
- (void)removeNetworkConfigurationObserver:(id)arg1;
- (void)removeNetworkRouterObserver:(id)arg1;
- (void)removeResidentDeviceObserver:(id)arg1;
- (void)removeSoftwareUpdateControllerObserver:(id)arg1;
- (void)removeSoftwareUpdateObserver:(id)arg1;
- (void)removeSymptomFixSessionObserver:(id)arg1;
- (void)removeSymptomsHandlerObserver:(id)arg1;
- (void)removeTelevisionObserver:(id)arg1;
- (void)removeUserObserver:(id)arg1;
- (id)requestedSoftwareDownloads;
- (id)requestedSoftwareInstalls;
- (id)residentDeviceObserverDispatcher;
- (id)selectedHome;
- (bool)selectedHomeFollowsLocation;
- (void)setAccessoryObserverDispatcher:(id)arg1;
- (void)setAllHomesPromises:(id)arg1;
- (void)setAudioControlObserverDispatcher:(id)arg1;
- (void)setCameraObserverDispatcher:(id)arg1;
- (void)setFirstHomeAddedPromises:(id)arg1;
- (void)setHasLoadedHomes:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeKitPreferencesChangedNotifyToken:(int)arg1;
- (void)setHomeKitSettingsObserverDispatcher:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setHomeManagerAndUpdateDelegate:(id)arg1;
- (void)setHomeManagerObserverDispatcher:(id)arg1;
- (void)setHomeObserverDispatcher:(id)arg1;
- (void)setHomePromises:(id)arg1;
- (void)setHomeSensingIdleTimer:(id)arg1;
- (void)setLocationCoordinator:(id)arg1;
- (void)setLocationCoordinatorSetupFuture:(id)arg1;
- (void)setMediaObjectObserverDispatcher:(id)arg1;
- (void)setMediaSessionObserverDispatcher:(id)arg1;
- (void)setNetworkConfigurationObserverDispatcher:(id)arg1;
- (void)setNetworkRouterObserverDispatcher:(id)arg1;
- (void)setOverrideHome:(id)arg1;
- (void)setRemoteAccessStateByHomeID:(id)arg1;
- (void)setResidentDeviceObserverDispatcher:(id)arg1;
- (void)setSelectedHome:(id)arg1;
- (void)setSelectedHome:(id)arg1 userInitiated:(bool)arg2;
- (void)setSelectedHomeFollowsLocation:(bool)arg1;
- (bool)setSelectedHomeWithName:(id)arg1;
- (void)setSettingsObserverTuples:(id)arg1;
- (void)setSoftwareUpdateControllerObserverDispatcher:(id)arg1;
- (void)setSoftwareUpdateObserverDispatcher:(id)arg1;
- (void)setSymptomFixSessionObserverDispatcher:(id)arg1;
- (void)setSymptomsHandlerObserverDispatcher:(id)arg1;
- (void)setTelevisionObserverDispatcher:(id)arg1;
- (void)setUserObserverDispatcher:(id)arg1;
- (void)settingsObserverTupleWasInvalidated:(id)arg1;
- (id)settingsObserverTuples;
- (id)softwareUpdateControllerObserverDispatcher;
- (id)softwareUpdateObserverDispatcher;
- (void)startHomeSensingIdleTimer;
- (void)stateRestorationSettings:(id)arg1 selectedHomeIdentifierDidUpdateExternally:(id)arg2;
- (id)symptomFixSessionObserverDispatcher;
- (id)symptomsHandlerObserverDispatcher;
- (id)televisionObserverDispatcher;
- (void)updateHome;
- (void)updateSelectedHome;
- (void)updateStopHomeSensingIdleTimerState;
- (id)userObserverDispatcher;
- (void)warmup;

@end
