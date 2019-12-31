/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADeviceConfiguration : SABaseClientBoundCommand

@property (nonatomic) double initialInterstitialDelay;
@property (nonatomic) double initialInterstitialDelayForCarPlay;
@property (nonatomic) double initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking;

+ (id)deviceConfiguration;
+ (id)deviceConfigurationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (double)initialInterstitialDelay;
- (double)initialInterstitialDelayForCarPlay;
- (double)initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking;
- (bool)requiresResponse;
- (void)setInitialInterstitialDelay:(double)arg1;
- (void)setInitialInterstitialDelayForCarPlay:(double)arg1;
- (void)setInitialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking:(double)arg1;

@end
