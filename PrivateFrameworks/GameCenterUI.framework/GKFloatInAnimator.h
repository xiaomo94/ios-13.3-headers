/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKFloatInAnimator : GKBubblePathAnimator {
    double  _additionalDelay;
    double  _delayIncrement;
    long long  _focusBubbleType;
    bool  _useWelcomeSpringValues;
}

@property (nonatomic) double additionalDelay;
@property (nonatomic) double delayIncrement;
@property (nonatomic) long long focusBubbleType;
@property (nonatomic) bool useWelcomeSpringValues;

- (double)additionalDelay;
- (void)animateTransition:(id)arg1;
- (long long)animatorType;
- (double)delayIncrement;
- (id)floatBubblesSortedLeftToRightInContext:(id)arg1;
- (long long)focusBubbleType;
- (id)init;
- (void)setAdditionalDelay:(double)arg1;
- (void)setDelayIncrement:(double)arg1;
- (void)setFocusBubbleType:(long long)arg1;
- (void)setUseWelcomeSpringValues:(bool)arg1;
- (bool)useWelcomeSpringValues;

@end
