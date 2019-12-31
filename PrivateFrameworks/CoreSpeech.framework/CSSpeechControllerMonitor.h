/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpeechControllerMonitor : CSEventMonitor {
    unsigned long long  _recordState;
}

@property (nonatomic) unsigned long long recordState;

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2;
- (unsigned long long)recordState;
- (void)setRecordState:(unsigned long long)arg1;

@end
