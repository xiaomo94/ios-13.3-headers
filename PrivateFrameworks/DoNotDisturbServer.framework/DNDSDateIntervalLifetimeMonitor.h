/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSDateIntervalLifetimeMonitor : DNDSBaseLifetimeMonitor {
    PCPersistentTimer * _lifetimeTimer;
}

+ (Class)lifetimeClass;

- (void).cxx_destruct;
- (void)_timerFired:(id)arg1;
- (id)updateForModeAssertions:(id)arg1 date:(id)arg2;

@end
