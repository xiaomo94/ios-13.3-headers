/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncedFeatures : NSObject {
    bool  _isDigitalHealthDisabledInitialized;
    bool  _isDigitalHealthDisabledPreviousResult;
    bool  _isSingleDevice;
    long long  _screenTimeSyncState;
}

@property long long screenTimeSyncState;

+ (id)sharedInstance;

- (void)_fetchScreenTimeSyncState;
- (id)_stateStringWithState:(long long)arg1;
- (id)description;
- (id)init;
- (bool)isDigitalHealthDisabledWithIsSingleDevice:(bool)arg1 forTransports:(long long)arg2;
- (bool)isIDSMessageGatingDisabled;
- (bool)isSiriPortraitDisabled;
- (bool)isSupergreenDisabledForTransports:(long long)arg1;
- (long long)screenTimeSyncState;
- (void)setScreenTimeSyncState:(long long)arg1;

@end
