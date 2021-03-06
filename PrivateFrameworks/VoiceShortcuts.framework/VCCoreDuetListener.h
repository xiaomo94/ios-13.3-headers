/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCCoreDuetListener : NSObject <VCUserNotificationManagerDelegate, WFOutOfProcessWorkflowControllerDelegate> {
    <VCDatabaseProvider> * _databaseProvider;
    VCDaemonXPCEventHandler * _eventHandler;
    WFWorkflowRunEvent * _inProgressRunEvent;
    WFConfiguredTrigger * _inProgressTrigger;
    VCUserNotificationManager * _notificationManager;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _registrations;
    <_CDUserContext> * _userContext;
    WFOutOfProcessWorkflowController * _workflowController;
}

@property (nonatomic, readonly) WFDatabase *database;
@property (nonatomic, readonly) <VCDatabaseProvider> *databaseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) VCDaemonXPCEventHandler *eventHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFWorkflowRunEvent *inProgressRunEvent;
@property (nonatomic, retain) WFConfiguredTrigger *inProgressTrigger;
@property (nonatomic, readonly) VCUserNotificationManager *notificationManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMutableDictionary *registrations;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <_CDUserContext> *userContext;
@property (nonatomic, retain) WFOutOfProcessWorkflowController *workflowController;

+ (double)rateLimitingTimeoutForTrigger:(id)arg1 runEvents:(id)arg2;
+ (bool)shouldRunTrigger:(id)arg1 forEvent:(id)arg2 runEvents:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)checkTriggerStateWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)checkTriggerStateWithKeyPath:(id)arg1 completion:(id /* block */)arg2;
- (id)database;
- (id)databaseProvider;
- (void)dealloc;
- (void)deleteTriggerWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deviceDidUnlockForFirstTime;
- (id)eventHandler;
- (void)fetchCurrentSunriseSunsetTimes;
- (void)fireTriggerWithIdentifier:(id)arg1 force:(bool)arg2 eventInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)getConfiguredTriggerDescriptionsWithCompletion:(id /* block */)arg1;
- (void)handleCallbackForTriggerWithIdentifier:(id)arg1 info:(id)arg2;
- (void)handleSunriseSunsetChanged;
- (id)inProgressRunEvent;
- (id)inProgressTrigger;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;
- (bool)isCallbackRegisteredWithIdentifier:(id)arg1;
- (void)logMetricForTrigger:(id)arg1;
- (void)logPowerLogEventForConfiguredTrigger:(id)arg1 workflowReference:(id)arg2;
- (id)notificationManager;
- (void)notificationManager:(id)arg1 didDismissTriggerWithIdentifier:(id)arg2;
- (void)notificationManager:(id)arg1 receivedConfirmationToRunTriggerWithIdentifier:(id)arg2;
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(bool)arg3;
- (id)queue;
- (id)queue_configuredTriggerForIdentifier:(id)arg1 workflowReference:(id*)arg2 error:(out id*)arg3;
- (void)queue_fireTriggerWithIdentifier:(id)arg1 force:(bool)arg2 eventInfo:(id)arg3 completion:(id /* block */)arg4;
- (bool)queue_registerAllTriggers:(id*)arg1;
- (void)registerAllTriggersWithCompletion:(id /* block */)arg1;
- (void)registerCallback:(id)arg1 withIdentifier:(id)arg2;
- (void)registerSunriseSunsetCallbackIfNeeded;
- (bool)registerTrigger:(id)arg1 error:(id*)arg2;
- (void)registerTriggerWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)registrations;
- (void)setInProgressRunEvent:(id)arg1;
- (void)setInProgressTrigger:(id)arg1;
- (void)setWorkflowController:(id)arg1;
- (bool)startRunningWorkflow:(id)arg1 forTrigger:(id)arg2 eventInfo:(id)arg3 error:(out id*)arg4;
- (void)unregisterAllTriggers;
- (void)unregisterCallbackForIdentifier:(id)arg1;
- (void)unregisterTriggerWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)userContext;
- (id)workflowController;

@end
