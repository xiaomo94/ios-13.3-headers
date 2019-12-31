/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardTypingStyleEstimator : NSObject {
    unsigned long long  _currentTypingStyle;
    <UIKeyboardTypingStyleEstimatorDelegate> * _delegate;
    double  _lastContinuousPathEvent;
    NSTimer * _tapTypingFlipTimer;
}

@property (nonatomic) <UIKeyboardTypingStyleEstimatorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_setTypingStyleEstimation:(unsigned long long)arg1;
- (void)beganContinuousPath;
- (unsigned long long)currentTypingStyleEstimation;
- (id)delegate;
- (void)endedContinuousPath;
- (void)setDelegate:(id)arg1;
- (void)tapTypedKey;

@end
