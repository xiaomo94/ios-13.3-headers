/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSiriRestrictionOnLockScreenMonitor : CSEventMonitor <MCProfileConnectionObserver> {
    bool  _isRestricted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (bool)_checkSiriRestrictedOnLockScreen;
- (void)_didReceiveRestrictionChanged:(bool)arg1;
- (void)_didReceiveRestrictionChangedInQueue:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withRestricted:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isRestricted;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;

@end
