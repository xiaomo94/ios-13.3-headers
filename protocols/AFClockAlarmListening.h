/* Generated by RuntimeBrowser.
 */

@protocol AFClockAlarmListening <NSObject>

@required

- (void)clockAlarmObserver:(AFClockAlarmObserver *)arg1 alarmDidDismiss:(NSUUID *)arg2;
- (void)clockAlarmObserver:(AFClockAlarmObserver *)arg1 alarmDidFire:(NSUUID *)arg2;
- (void)clockAlarmObserver:(AFClockAlarmObserver *)arg1 snapshotDidUpdateFrom:(AFClockAlarmSnapshot *)arg2 to:(AFClockAlarmSnapshot *)arg3;

@end
