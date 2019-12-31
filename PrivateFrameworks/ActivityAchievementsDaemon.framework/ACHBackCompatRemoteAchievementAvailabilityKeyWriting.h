/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

@interface ACHBackCompatRemoteAchievementAvailabilityKeyWriting : NSObject {
    HDProfile * _profile;
}

@property (nonatomic, readonly) HDProfile *profile;

- (void).cxx_destruct;
- (id)companionAvailabilityStateKeyFromUniqueName:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (bool)markTemplateAvailable:(id)arg1 error:(id*)arg2;
- (id)profile;

@end
