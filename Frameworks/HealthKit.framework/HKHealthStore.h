/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthStore : NSObject <HKHealthStoreClientInterface, HKQueryDelegate, _HKDeepBreathingSessionLifecycleDelegate, _HKXPCExportable> {
    unsigned int  _applicationSDKVersion;
    id /* block */  _authorizationDelegateTransactionErrorHandler;
    <_HKAuthorizationPresentationController> * _authorizationPresentationController;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSString * _clinicalReadAuthorizationUsageDescriptionOverride;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSString * _debugIdentifier;
    NSMutableSet * _deepBreathingSessions;
    <_HKDocumentPickerPresentationController> * _documentPickerPresentationController;
    NSHashTable * _fitnessMachineConnectionInitiators;
    NSHashTable * _fitnessMachineConnections;
    HKHealthServicesManager * _healthServicesManager;
    _HKXPCConnection * _healthdConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKProfileIdentifier * _profileIdentifier;
    NSMutableSet * _queries;
    NSString * _readAuthorizationUsageDescriptionOverride;
    NSString * _researchStudyUsageDescriptionOverride;
    bool  _resumeRequired;
    bool  _resumed;
    <HDHealthStoreServerInterface> * _serverProxy;
    NSBundle * _sourceBundle;
    NSString * _sourceBundleIdentifier;
    NSMutableDictionary * _subserverProxiesBySelector;
    NSString * _writeAuthorizationUsageDescriptionOverride;
}

@property (nonatomic, readonly) unsigned int applicationSDKVersion;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, copy) NSString *clinicalReadAuthorizationUsageDescriptionOverride;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *debugIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthServicesManager *healthServicesManager;
@property (copy) HKProfileIdentifier *profileIdentifier;
@property (getter=_queries, readonly, copy) NSSet *queries;
@property (nonatomic, copy) NSString *readAuthorizationUsageDescriptionOverride;
@property (nonatomic, copy) NSString *researchStudyUsageDescriptionOverride;
@property (retain) NSBundle *sourceBundle;
@property (copy) NSString *sourceBundleIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *writeAuthorizationUsageDescriptionOverride;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_applicationHasRunningWorkout;
+ (bool)isHealthDataAvailable;

- (void).cxx_destruct;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)arg1;
- (void)_activeWorkoutApplicationIdentifierWithCompletion:(id /* block */)arg1;
- (void)_addQuery:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (id)_bodyMassCharacteristicQuantityWithError:(id*)arg1;
- (void)_calculateBMRForDate:(id)arg1 useEndOfDay:(bool)arg2 completion:(id /* block */)arg3;
- (id)_characteristicForDataType:(id)arg1 error:(id*)arg2;
- (id)_clientClinicalReadAuthorizationUsageDescription;
- (void)_clientQueue_invokeAuthorizationDelegateTransactionErrorHandlerWithError:(id)arg1;
- (id)_clientReadAuthorizationUsageDescription;
- (id)_clientWriteAuthorizationUsageDescription;
- (id)_clinicalAuthorizationPresentationRequestForRecord:(id)arg1;
- (void)_closeTransactionWithType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3;
- (void)_cloudSyncServerProxyWithCompletion:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_connectionQueue_setUpWithEndpoint:(id)arg1;
- (void)_createDeepBreathingSessionWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)_createFitnessMachineConnection;
- (id)_createFitnessMachineConnectionInitiator;
- (void)_currentValueForQuantityTypeCode:(long long)arg1 characteristicTypeCode:(long long)arg2 beforeDate:(id)arg3 completion:(id /* block */)arg4;
- (void)_currentWorkoutSnapshotWithCompletion:(id /* block */)arg1;
- (void)_deleteObjects:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_discardServerProxiesForServer:(id)arg1;
- (void)_faultIfInnappropriateHost;
- (void)_fetchBoolDaemonPreferenceForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchDaemonPreferenceForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchDevicesMatchingProperty:(id)arg1 values:(id)arg2 completion:(id /* block */)arg3;
- (void)_firstPartyWorkoutSnapshotWithCompletion:(id /* block */)arg1;
- (void)_generatePauseOrResumeRequest:(id /* block */)arg1;
- (void)_generateWorkoutMarkerWithCompletion:(id /* block */)arg1;
- (id)_healthDataAuthorizationPresentationRequestForRecord:(id)arg1;
- (void)_healthServicesServerProxyWithCompletion:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)_heightCharacteristicQuantityWithError:(id*)arg1;
- (id)_leanBodyMassCharacteristicQuantityWithError:(id*)arg1;
- (void)_medicalIDServerProxyWithCompletion:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_mostRecentQuantityOfType:(id)arg1 beforeDate:(id)arg2 completion:(id /* block */)arg3;
- (void)_nanoSyncServerProxyWithCompletion:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_notificationServerProxyWithCompletion:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)arg1;
- (void)_profileServerProxyWithCompletion:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id /* block */)_progressHandlerOnClientQueue:(id /* block */)arg1;
- (id)_queries;
- (void)_queryControlServerProxyWithCompletion:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_removeQuery:(id)arg1;
- (void)_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(id /* block */)arg3;
- (id)_researchStudyUsageDescription;
- (void)_safeFetchDaemonPreferenceForKey:(id)arg1 expectedReturnClass:(Class)arg2 completion:(id /* block */)arg3;
- (void)_saveObjects:(id)arg1 atomically:(bool)arg2 completion:(id /* block */)arg3;
- (id /* block */)_selectCompletionOnClientQueue:(id /* block */)arg1;
- (void)_sendNextObjectBatch:(id)arg1 lastRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 server:(id)arg3 transaction:(id)arg4 completion:(id /* block */)arg5;
- (void)_serverProxyWithCompletion:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_setBackgroundDeliveryFrequencyDataType:(id)arg1 frequency:(long long)arg2 withCompletion:(id /* block */)arg3;
- (bool)_setBiologicalSex:(long long)arg1 error:(id*)arg2;
- (bool)_setBloodType:(long long)arg1 error:(id*)arg2;
- (bool)_setBodyMassCharacteristicQuantity:(id)arg1 error:(id*)arg2;
- (bool)_setCharacteristic:(id)arg1 forDataType:(id)arg2 error:(id*)arg3;
- (void)_setConfigurationPropertyUsingBlock:(id /* block */)arg1;
- (void)_setDaemonPreferenceValue:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (bool)_setDateOfBirthComponents:(id)arg1 error:(id*)arg2;
- (bool)_setFitzpatrickSkinType:(long long)arg1 error:(id*)arg2;
- (bool)_setHeightCharacteristicQuantity:(id)arg1 error:(id*)arg2;
- (bool)_setLeanBodyMassCharacteristicQuantity:(id)arg1 error:(id*)arg2;
- (void)_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(id /* block */)arg3;
- (bool)_setUserEnteredMenstrualCycleLengthCharacteristicQuantity:(id)arg1 error:(id*)arg2;
- (bool)_setUserEnteredMenstrualPeriodLengthCharacteristicQuantity:(id)arg1 error:(id*)arg2;
- (bool)_setWheelchairUse:(long long)arg1 error:(id*)arg2;
- (void)_shouldGenerateDemoDataPreferenceIsSet:(id /* block */)arg1;
- (id)_sourceBundleOrDefaultBundle;
- (void)_staticSyncServerProxyWithCompletion:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_subserverProxyForSelector:(SEL)arg1 completion:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)_throwIfAuthorizationDisallowedForSharing:(bool)arg1 types:(id)arg2;
- (void)_throwIfClinicalTypesRequestedToShare:(id)arg1;
- (void)_throwIfParentTypeNotRequestedForSharing:(bool)arg1 types:(id)arg2;
- (id)_userEnteredMenstrualCycleLengthCharacteristicQuantityWithError:(id*)arg1;
- (id)_userEnteredMenstrualPeriodLengthCharacteristicQuantityWithError:(id*)arg1;
- (void)_utilityServerProxyWithCompletion:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_validateAuthorizationRequestWithShareTypes:(id)arg1 readTypes:(id)arg2;
- (void)_validateAuthorizationRequiredTypes;
- (void)_validateClinicalHealthRecordsPurposeStringsForSharingTypes:(id)arg1 readingTypes:(id)arg2;
- (void)_validateHealthDataPurposeStringsForSharingTypes:(id)arg1 readingTypes:(id)arg2 isResearchStudy:(bool)arg3;
- (void)_validatePurposeStringsForSharingTypes:(id)arg1 readingTypes:(id)arg2;
- (void)_workoutServerProxyWithCompletion:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)accountConfigurationDidChangeWithCompletion:(id /* block */)arg1;
- (void)addHealthServicePairing:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addSamples:(id)arg1 toWorkout:(id)arg2 completion:(id /* block */)arg3;
- (void)addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(id /* block */)arg3;
- (void)allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)allAuthorizationRecordsForType:(id)arg1 completion:(id /* block */)arg2;
- (void)allSourcesRequestingAuthorizationForTypes:(id)arg1 completion:(id /* block */)arg2;
- (void)allSourcesWithCompletion:(id /* block */)arg1;
- (unsigned int)applicationSDKVersion;
- (void)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 completion:(id /* block */)arg3;
- (long long)authorizationStatusForType:(id)arg1;
- (void)badgeForDomain:(long long)arg1 completion:(id /* block */)arg2;
- (void)badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(id /* block */)arg1;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 sourceHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)biologicalSexWithError:(id*)arg1;
- (id)bloodTypeWithError:(id*)arg1;
- (id)clientQueue;
- (void)clientRemote_conceptIndexManagerDidBecomeQuiescentWithSamplesProcessedCount:(long long)arg1;
- (void)clientRemote_presentAuthorizationWithRequestRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)clientRemote_presentAuthorizationWithSession:(id)arg1 completion:(id /* block */)arg2;
- (void)clientRemote_unitPreferencesDidUpdate;
- (id)clinicalReadAuthorizationUsageDescriptionOverride;
- (void)closeTransactionForType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 query:(id)arg4;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)containerAppExtensionEntitlementsWithCompletion:(id /* block */)arg1;
- (void)createFakeAppleSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 completion:(id /* block */)arg4;
- (void)createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(id /* block */)arg3;
- (id)dateOfBirthComponentsWithError:(id*)arg1;
- (id)dateOfBirthWithError:(id*)arg1;
- (void)dealloc;
- (id)debugIdentifier;
- (void)deepBreathingSessionDidComplete:(id)arg1;
- (void)deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)deleteClientSourceWithCompletion:(id /* block */)arg1;
- (void)deleteMedicalIDData;
- (void)deleteMedicalIDDataWithCompletion:(id /* block */)arg1;
- (void)deleteObject:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteObject:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)deleteObjects:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteObjects:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)deleteObjectsOfType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (void)deleteObjectsOfType:(id)arg1 predicate:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)deleteProfile:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)diagnosticsForKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)disableAllBackgroundDeliveryWithCompletion:(id /* block */)arg1;
- (void)disableBackgroundDeliveryForType:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id /* block */)arg1;
- (void)disableCloudSyncAndDeleteAllCloudDataWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)disableCloudSyncWithCompletion:(id /* block */)arg1;
- (void)dropEntitlement:(id)arg1;
- (id)earliestPermittedSampleDate;
- (void)enableBackgroundDeliveryForType:(id)arg1 frequency:(long long)arg2 withCompletion:(id /* block */)arg3;
- (void)enableCloudSyncWithCompletion:(id /* block */)arg1;
- (void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)endHealthServiceDiscovery:(id)arg1;
- (void)endHealthServiceSession:(id)arg1;
- (void)endWorkoutSession:(id)arg1;
- (void)executeQuery:(id)arg1;
- (void)executeQuery:(id)arg1 activationHandler:(id /* block */)arg2;
- (id)exportedInterface;
- (void)fetchAllDevicesWithCompletion:(id /* block */)arg1;
- (void)fetchCloudDescriptionWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)fetchCloudSyncProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)fetchCloudSyncRequiredWithCompletion:(id /* block */)arg1;
- (void)fetchCloudSyncStatusWithCompletion:(id /* block */)arg1;
- (void)fetchDisplayName:(id /* block */)arg1;
- (void)fetchMedicalIDDataCreateIfNecessary:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchMedicalIDDataWithCompletion:(id /* block */)arg1;
- (void)fetchMedicalIDEmergencyContactsWithCompletion:(id /* block */)arg1;
- (void)fetchNanoSyncPairedDevicesWithCompletion:(id /* block */)arg1;
- (void)fetchPluginServiceEndpointForIdentifier:(id)arg1 endpointHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)fetchServerURLForAssetType:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchTaskServerEndpointForIdentifier:(id)arg1 pluginURL:(id)arg2 taskUUID:(id)arg3 configuration:(id)arg4 endpointHandler:(id /* block */)arg5 errorHandler:(id /* block */)arg6;
- (void)fetchURLForAnalyticsFileWithName:(id)arg1 completion:(id /* block */)arg2;
- (void)finishAllWorkoutsWithCompletion:(id /* block */)arg1;
- (id)firstName;
- (id)fitzpatrickSkinTypeWithError:(id*)arg1;
- (void)forceCloudResetWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)forceCloudSyncDataUploadForProfileWithCompletion:(id /* block */)arg1;
- (void)forceCloudSyncWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)forceCloudSyncWithOptions:(unsigned long long)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)forceLastChanceNanoSyncWithCompletion:(id /* block */)arg1;
- (void)forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)forceNanoSyncWithPullRequest:(bool)arg1 completion:(id /* block */)arg2;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(id /* block */)arg3;
- (void)getAllProfilesWithCompletion:(id /* block */)arg1;
- (void)getHealthDirectorySizeInBytesWithCompletion:(id /* block */)arg1;
- (void)getHealthLiteValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)getRequestStatusForAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)handleAuthorizationForExtensionWithCompletion:(id /* block */)arg1;
- (void)hasSampleWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)hasSourceWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)healthPeripheralsWithFilter:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)healthServicePairingsWithHandler:(id /* block */)arg1;
- (id)healthServicesManager;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1 identifier:(id)arg2;
- (void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)obliterateHealthDataWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)observeDataCollectionForType:(id)arg1 interval:(double)arg2 inBackground:(bool)arg3 hasRunningWorkout:(bool)arg4 completion:(id /* block */)arg5;
- (void)oldestSampleStartDateInHealthDatabaseWithCompletion:(id /* block */)arg1;
- (void)orderedSourcesForObjectType:(id)arg1 completion:(id /* block */)arg2;
- (void)pauseWorkoutSession:(id)arg1;
- (void)performMigrationWithCompletion:(id /* block */)arg1;
- (void)postCompanionUserNotificationOfType:(long long)arg1 completion:(id /* block */)arg2;
- (void)postNotificationWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)preferredUnitsForQuantityTypes:(id)arg1 completion:(id /* block */)arg2;
- (id)profileIdentifier;
- (void)profileIdentifierForNRDeviceUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)queryDidFinishExecuting:(id)arg1;
- (id)readAuthorizationUsageDescriptionOverride;
- (void)recoverActiveWorkoutSessionWithCompletion:(id /* block */)arg1;
- (void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)remoteInterface;
- (void)removeHealthServicePairing:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(bool)arg3 completion:(id /* block */)arg4;
- (id)researchStudyUsageDescriptionOverride;
- (void)resetAWDTask:(id)arg1 completion:(id /* block */)arg2;
- (void)resetAllObjectAuthorizationStatusForBundleIdentifier:(id)arg1 objectType:(id)arg2 completion:(id /* block */)arg3;
- (void)resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)resetNanoSyncWithCompletion:(id /* block */)arg1;
- (void)resetSelectedObjectAuthorizationStatuses:(id)arg1 completion:(id /* block */)arg2;
- (void)restoreEntitlement:(id)arg1;
- (void)resume;
- (void)resumeWorkoutSession:(id)arg1;
- (void)retrieveAllAuthorizationRecordsForDocumentType:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)retrieveAllAuthorizationRecordsForSample:(id)arg1 completion:(id /* block */)arg2;
- (void)runAWDTask:(id)arg1 completion:(id /* block */)arg2;
- (void)runStaticSyncExportWithOptions:(unsigned long long)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 batchSize:(unsigned long long)arg4 progressHandler:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)runStaticSyncImportWithOptions:(unsigned long long)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 progressHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)saveObject:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)saveObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 sourceVersion:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)saveObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)saveObjects:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)select:(id)arg1 from:(id)arg2 where:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(long long)arg6 completion:(id /* block */)arg7;
- (void)setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(id /* block */)arg3;
- (void)setClinicalReadAuthorizationUsageDescriptionOverride:(id)arg1;
- (void)setDebugIdentifier:(id)arg1;
- (void)setDisplayFirstName:(id)arg1 lastName:(id)arg2 completion:(id /* block */)arg3;
- (void)setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setObjectAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setProfileIdentifier:(id)arg1;
- (void)setReadAuthorizationUsageDescriptionOverride:(id)arg1;
- (void)setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 prompt:(bool)arg4 completion:(id /* block */)arg5;
- (void)setResearchStudyUsageDescriptionOverride:(id)arg1;
- (void)setServerURL:(id)arg1 forAssetType:(id)arg2 completion:(id /* block */)arg3;
- (void)setSourceBundle:(id)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (void)setWriteAuthorizationUsageDescriptionOverride:(id)arg1;
- (id)sourceBundle;
- (id)sourceBundleIdentifier;
- (void)splitTotalEnergy:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 resultsHandler:(id /* block */)arg4;
- (void)startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2 completion:(id /* block */)arg3;
- (void)startHealthServiceDiscovery:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startHealthServiceSession:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)startWorkoutSession:(id)arg1;
- (void)stopFakingDataWithCompletion:(id /* block */)arg1;
- (void)stopObservingDataCollectionForType:(id)arg1 completion:(id /* block */)arg2;
- (void)stopQuery:(id)arg1;
- (bool)supportsHealthRecords;
- (void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(id /* block */)arg4;
- (id)unitTest_replaceListenerEndpoint:(id)arg1;
- (void)unitTest_setApplicationSDKVersion:(unsigned int)arg1;
- (void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)updateMedicalIDData:(id)arg1;
- (void)updateMedicalIDData:(id)arg1 completion:(id /* block */)arg2;
- (void)updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(id /* block */)arg3;
- (void)waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (id)wheelchairUseWithError:(id*)arg1;
- (id)writeAuthorizationUsageDescriptionOverride;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

+ (id)wf_shortcutsAppHealthStore;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)fiui_localizationStringSuffixForWheelchairUser:(bool)arg1;
+ (id)fiui_sharedHealthStoreForCarousel;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (bool)_assignMostRecentQuantity:(id*)arg1 dateInterval:(id*)arg2 forQuantitySample:(id)arg3;
+ (bool)_isHighFrequencyQuantityType:(id)arg1;
+ (id)_mostRecentStartDateSortDescriptorForQuantityType:(id)arg1;
+ (void)_processQuantitySample:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
+ (void)_processStatisticsCollection:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
+ (void)_queryForHighFrequencyMostRecentQuantityOfType:(id)arg1 sample:(id)arg2 healthStore:(id)arg3 completion:(id /* block */)arg4;
+ (id)_queryForMostRecentSampleOfType:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 completion:(id /* block */)arg4;
+ (id)localizationStringAdditionForWheelchairUser;
+ (id)localizationStringSuffixForWheelchairUser:(bool)arg1;
+ (id)queryForMostRecentQuantityOfType:(id)arg1 healthStore:(id)arg2 predicate:(id)arg3 completion:(id /* block */)arg4;
+ (id)queryForMostRecentQuantityOfType:(id)arg1 predicate:(id)arg2 completion:(id /* block */)arg3;
+ (id)queryForMostRecentSampleOfType:(id)arg1 predicate:(id)arg2 completion:(id /* block */)arg3;

- (void)_populateDemographicsWrapper:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 meContact:(id)arg4;
- (id)createMedicalIDData;
- (void)hk_fetchExistingDemographicInformationWithCompletion:(id /* block */)arg1;
- (void)hk_fetchExistingDemographicInformationWithOptions:(long long)arg1 completion:(id /* block */)arg2;
- (id)hk_researchAppBundleIdentifiers;

@end
