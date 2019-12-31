/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabasePruningManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {
    HDPeriodicActivity * _activity;
    HDProfile * _profile;
    unsigned long long  _prunedObjectLimit;
    unsigned long long  _prunedObjectTransactionLimit;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HDProfile *profile;
@property unsigned long long prunedObjectLimit;
@property unsigned long long prunedObjectTransactionLimit;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerSource;

- (void).cxx_destruct;
- (id)_lastAttemptDateWithCompleted:(bool*)arg1;
- (id)_minimumFrozenAnchorMapForPruningDate:(id)arg1 error:(id*)arg2;
- (bool)_pruneDatabaseWithNowDate:(id)arg1 error:(id*)arg2;
- (void)_setLastAttemptDate:(id)arg1 completed:(bool)arg2;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (id)profile;
- (bool)pruneDatabaseWithAccessibilityAssertion:(id)arg1 nowDate:(id)arg2 error:(id*)arg3;
- (unsigned long long)prunedObjectLimit;
- (unsigned long long)prunedObjectTransactionLimit;
- (id)queue;
- (void)setProfile:(id)arg1;
- (void)setPrunedObjectLimit:(unsigned long long)arg1;
- (void)setPrunedObjectTransactionLimit:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimerSource:(id)arg1;
- (id)timerSource;

@end
