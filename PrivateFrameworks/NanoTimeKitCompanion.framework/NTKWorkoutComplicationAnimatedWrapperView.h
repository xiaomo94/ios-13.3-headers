/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWorkoutComplicationAnimatedWrapperView : UIView <NTKComplicationImageView> {
    UIColor * _color;
    CLKImageProvider * _imageProvider;
    UIImageView * _imageView;
    UIColor * _overrideColor;
    bool  _usesLegibility;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLKImageProvider *imageProvider;
@property (nonatomic, retain) UIColor *overrideColor;
@property (readonly) Class superclass;
@property (nonatomic) bool usesLegibility;

- (void).cxx_destruct;
- (void)_applyAnimationForPauseState:(bool)arg1 animated:(bool)arg2;
- (void)_updateState;
- (void)_updateTint;
- (id)color;
- (id)imageProvider;
- (id)initWithAnimationImages:(id)arg1;
- (void)layoutSubviews;
- (id)overrideColor;
- (void)setColor:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setUsesLegibility:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)usesLegibility;

@end
