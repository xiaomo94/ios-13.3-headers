/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface APRAppIntentMonitor : NSObject <APRIntentStreamUpdateInterface, NSXPCListenerDelegate> {
    _ATXAppLaunchSequenceManager * _appActionLaunchSequenceManager;
    _ATXAppInfoManager * _appInfoManager;
    NSObject<OS_dispatch_queue> * _appIntentHistoryQueue;
    _ATXAppLaunchHistogramManager * _appLaunchHistogramManager;
    ATXInternalAppRegistrationNotification * _appRegistrationListener;
    <_CDLocalContext> * _context;
    _ATXDataStore * _dataStore;
    PETDistributionEventTracker * _donatedActionInCacheTracker;
    PETScalarEventTracker * _donatedActionsTracker;
    NSObject<OS_dispatch_queue> * _donationQueue;
    _ATXDuetHelper * _duetHelper;
    NSXPCListener * _listener;
    _APRParzenModel * _nonSiriKitParzenModel;
    NSMutableSet * _registrations;
    _APRParzenModel * _siriKitParzenModel;
    NSUserDefaults * _userDefaults;
    unsigned long long  deletionHandlerToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_adjustedEndDateForIntentDonationWithAppSessionEndDate:(id)arg1;
- (id)_adjustedStartDateForIntentDonationWithAppSessionStartDate:(id)arg1;
- (id)_appActionLaunchSequenceManager;
- (void)_displayDonationOnLockscreenWithAction:(id)arg1;
- (void)_handleCompletedIntentForForUUID:(id)arg1 atxIntentSource:(long long)arg2;
- (void)_handleIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3 intentSource:(long long)arg4;
- (bool)_isWhitelistedDaemonDonationBundleId:(id)arg1;
- (void)_listenToActivityStream;
- (void)_listenToIntentStream;
- (void)_logIntentPredictionsForIntentEvent:(id)arg1;
- (void)_logSirikitIntentWithDKUUIDKey:(id)arg1 bundleId:(id)arg2;
- (void)_respondToIntentStreamChangingWithContext:(id)arg1;
- (void)_retrainParzenModelForIntentSource:(long long)arg1;
- (void)_syncForTests;
- (void)_updateActionPredictionHistogramsForIntentEvent:(id)arg1 weight:(float)arg2;
- (void)_updateActionPredictionHistogramsRemovingActionUUIDs:(id)arg1;
- (void)_updateLaunchHistoryFromDuet;
- (void)_updateLaunchHistoryFromDuetForInterval:(double)arg1;
- (void)_updateLaunchHistoryFromDuetForSource:(long long)arg1;
- (id)adjustedEndDateForFiveSecondFlooringWithAppSessionEndDate:(id)arg1;
- (id)adjustedStartDateForFiveSecondFlooringWithAppSessionStartDate:(id)arg1;
- (void)dealloc;
- (id)fetchIntentEventsForAppSessionWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)fetchNSUAEventsForAppSessionWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)handleDonationImmediatelyForBundleId:(id)arg1 intentType:(id)arg2 contextValue:(id)arg3 isDonatedBySiri:(bool)arg4 isWhitelistedDaemonDonationBundleId:(bool)arg5;
- (void)handleDonationWithDelayedProcessingForBundleId:(id)arg1 intentType:(id)arg2;
- (void)handleIntentOrActivityDeletion;
- (void)handleNonSiriKitIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3;
- (void)handleSiriKitIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3;
- (id)init;
- (id)initWithAppLaunchHistogramManager:(id)arg1 siriKitParzenModel:(id)arg2 nonSiriKitParzenModel:(id)arg3 appInfoManager:(id)arg4 appActionLaunchSequenceManager:(id)arg5 dataStore:(id)arg6;
- (id)initWithAppLaunchHistogramManager:(id)arg1 siriKitParzenModel:(id)arg2 nonSiriKitParzenModel:(id)arg3 appInfoManager:(id)arg4 appActionLaunchSequenceManager:(id)arg5 duetHelper:(id)arg6 dataStore:(id)arg7;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)notifyAboutIntentStreamChangeWithReply:(id /* block */)arg1;
- (void)processIntentDonationsDuringAppSessionForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 globals:(id)arg4;
- (void)processNSUADonationsDuringAppSessionForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 globals:(id)arg4;
- (void)recordIntentDonationWithType:(id)arg1 intentSource:(long long)arg2 bundleId:(id)arg3 startDate:(id)arg4;
- (void)sasProcessingForPrecompletionSiriEventForBundleId:(id)arg1 intentType:(id)arg2 contextValue:(id)arg3;
- (bool)sessionStartedBeforeDonationForStartDate:(id)arg1 latestDonationDate:(id)arg2;
- (bool)shouldAcceptMessageDonation:(id)arg1;
- (bool)shouldProcessIntentDonationsForSessionStartDate:(id)arg1;
- (bool)shouldProcessNSUADonationsForSessionStartDate:(id)arg1;
- (void)start;
- (void)stop;
- (void)updateActionPredictionPipelineForAppSession:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)updateActionPredictionPipelineForIntentEvent:(id)arg1 weight:(float)arg2 appSessionStartDate:(id)arg3 appSessionEndDate:(id)arg4;
- (void)updateActionPredictionSlotResolutionForIntentEvent:(id)arg1 weight:(float)arg2 prevLocationUUID:(id)arg3 locationUUID:(id)arg4 currentMotionType:(long long)arg5 appSessionStartDate:(id)arg6 appSessionEndDate:(id)arg7 geohash:(long long)arg8 coarseGeohash:(long long)arg9;
- (void)updateLaunchHistoryFromDuet:(double)arg1 intentSource:(long long)arg2;

@end