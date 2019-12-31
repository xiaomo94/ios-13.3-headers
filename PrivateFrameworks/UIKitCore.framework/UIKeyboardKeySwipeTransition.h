/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardKeySwipeTransition : UIKeyboardKeyplaneTransition <CAAnimationDelegate> {
    bool  _disableMeshOptimization;
    NSArray * _endKeysOrdered;
    NSArray * _keyInfos;
    double  _previousProgress;
    NSArray * _startGeometries;
    NSArray * _startKeysOrdered;
    NSArray * _transitionKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableMeshOptimization;
@property (nonatomic, retain) NSArray *endKeysOrdered;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *keyInfos;
@property (nonatomic) double previousProgress;
@property (nonatomic, retain) NSArray *startGeometries;
@property (nonatomic, retain) NSArray *startKeysOrdered;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *transitionKeys;

- (void)_runOpacityAnimation;
- (void)_runTransformAnimation;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)commitTransitionRebuild;
- (void)dealloc;
- (bool)disableMeshOptimization;
- (id)endKeysOrdered;
- (void)gatherTransitionKeys;
- (id)keyInfos;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyRectForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 normalizedSubRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)meshTransformForKeyplane:(id)arg1 forward:(bool)arg2 initial:(bool)arg3;
- (double)nonInteractiveDuration;
- (double)previousProgress;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)removeAllAnimations;
- (void)runNonInteractivelyWithCompletion:(id /* block */)arg1;
- (void)setDisableMeshOptimization:(bool)arg1;
- (void)setEndKeysOrdered:(id)arg1;
- (void)setKeyInfos:(id)arg1;
- (void)setPreviousProgress:(double)arg1;
- (void)setStartGeometries:(id)arg1;
- (void)setStartKeysOrdered:(id)arg1;
- (void)setTransitionKeys:(id)arg1;
- (id)startGeometries;
- (id)startKeysOrdered;
- (id)transitionKeys;
- (void)updateWithProgress:(double)arg1;

@end
