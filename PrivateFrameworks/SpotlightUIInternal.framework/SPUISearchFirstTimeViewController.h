/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

@interface SPUISearchFirstTimeViewController : SearchUIFirstTimeExperienceViewController {
    bool  _hasBeenDisplayed;
}

@property bool hasBeenDisplayed;

+ (void)dismissForever;
+ (bool)needsDisplay;
+ (void)updateViewCountToCount:(long long)arg1;
+ (long long)viewCount;

- (bool)hasBeenDisplayed;
- (id)initWithSupportedDomains:(unsigned long long)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4;
- (void)setHasBeenDisplayed:(bool)arg1;
- (void)updateViewCount;

@end
