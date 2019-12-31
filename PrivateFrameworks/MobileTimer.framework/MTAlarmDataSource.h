/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAlarmDataSource : NSObject {
    MTAlarmManager * _alarmManager;
    NSMutableArray * _alarms;
    MTObserverStore * _observers;
    MTAlarm * _sleepAlarm;
}

@property (nonatomic, retain) MTAlarmManager *alarmManager;
@property (nonatomic, retain) NSMutableArray *alarms;
@property (nonatomic, retain) MTObserverStore *observers;
@property (nonatomic, retain) MTAlarm *sleepAlarm;

- (void).cxx_destruct;
- (void)_handleAlarmNotification:(id)arg1 block:(id /* block */)arg2;
- (void)_iterateObserversWithBlock:(id /* block */)arg1;
- (void)_registerForNotifications;
- (void)_stateReset;
- (id)addAlarm:(id)arg1;
- (id)alarmAtRow:(unsigned long long)arg1;
- (id)alarmManager;
- (id)alarms;
- (void)dealloc;
- (id)initWithAlarmManager:(id)arg1;
- (unsigned long long)numberOfAlarms;
- (id)observers;
- (void)registerObserver:(id)arg1;
- (id)reloadAlarms;
- (id)removeAlarm:(id)arg1;
- (unsigned long long)rowForAlarm:(id)arg1;
- (unsigned long long)rowForAlarmWithID:(id)arg1;
- (void)setAlarmManager:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setSleepAlarm:(id)arg1;
- (id)sleepAlarm;
- (void)unregisterObserver:(id)arg1;
- (id)updateAlarm:(id)arg1;

@end
