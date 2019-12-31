/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARDevicePerformanceMonitor : NSObject {
    ARDevicePerformanceLevel * _currentDeviceCondition;
    <ARDevicePerformanceMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    double  _lastNotifiedTimeStamp;
    NSTimer * _notificationTimer;
    ARDevicePerformanceLevel * _pendingDeviceCondition;
}

@property (retain) ARDevicePerformanceLevel *currentDeviceCondition;
@property <ARDevicePerformanceMonitorDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property double lastNotifiedTimeStamp;
@property (retain) NSTimer *notificationTimer;
@property (retain) ARDevicePerformanceLevel *pendingDeviceCondition;

- (void).cxx_destruct;
- (void)_clearNotificationTimer;
- (id)_initialDeviceCondition;
- (void)_notificationTimerFired:(id)arg1;
- (void)_processThermalStateChanged:(long long)arg1;
- (bool)_shouldUpdateDelegateForDevicePerformanceLevel:(id)arg1;
- (void)_startNotificationTimerIfNeeded;
- (void)_thermalStateChangedNotification:(id)arg1;
- (void)_updateDelegateWithDeviceCondition:(id)arg1;
- (id)currentDeviceCondition;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)deviceCondition;
- (id)init;
- (double)lastNotifiedTimeStamp;
- (id)notificationTimer;
- (id)pendingDeviceCondition;
- (void)setCurrentDeviceCondition:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setLastNotifiedTimeStamp:(double)arg1;
- (void)setNotificationTimer:(id)arg1;
- (void)setPendingDeviceCondition:(id)arg1;

@end
