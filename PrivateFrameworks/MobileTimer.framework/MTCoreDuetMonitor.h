/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTCoreDuetMonitor : NSObject <MTAlarmObserver> {
    NSMutableDictionary * _alarmStatesByAlarmID;
    <MTAlarmStorage> * _alarmStorage;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *alarmStatesByAlarmID;
@property (nonatomic, readonly) <MTAlarmStorage> *alarmStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_clearPreviouslyDismissedAlarmStates;
- (void)_queue_writeCurrentStateToContextStore;
- (id)alarmStatesByAlarmID;
- (id)alarmStorage;
- (void)handleSystemReady;
- (id)initWithAlarmStorage:(id)arg1;
- (id)serialQueue;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)updateStateForAlarms:(id)arg1;

@end
