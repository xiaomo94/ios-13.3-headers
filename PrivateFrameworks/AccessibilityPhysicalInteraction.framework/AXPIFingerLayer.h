/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
 */

@interface AXPIFingerLayer : CAShapeLayer {
    <AXPIFingerAppearanceDelegate> * _appearanceDelegate;
    CAShapeLayer * _innerStrokeLayer;
    bool  _isSelected;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outerFrame;
    CAShapeLayer * _outerStrokeLayer;
    CAShapeLayer * _outerStrokeTrackLayer;
    bool  _pressed;
    unsigned long long  _shape;
}

@property (nonatomic) <AXPIFingerAppearanceDelegate> *appearanceDelegate;
@property (nonatomic, retain) CAShapeLayer *innerStrokeLayer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outerFrame;
@property (nonatomic, retain) CAShapeLayer *outerStrokeLayer;
@property (nonatomic, retain) CAShapeLayer *outerStrokeTrackLayer;
@property (getter=isPressed, nonatomic) bool pressed;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) unsigned long long shape;

- (void).cxx_destruct;
- (void)_setPathForCurrentShape;
- (void)animateToTapWithDuration:(double)arg1;
- (id)appearanceDelegate;
- (void)dealloc;
- (id)initWithAppearanceDelegate:(id)arg1;
- (id)innerStrokeLayer;
- (bool)isPressed;
- (bool)isSelected;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outerFrame;
- (id)outerStrokeLayer;
- (id)outerStrokeTrackLayer;
- (void)setAppearanceDelegate:(id)arg1;
- (void)setInnerStrokeLayer:(id)arg1;
- (void)setOuterStrokeLayer:(id)arg1;
- (void)setOuterStrokeTrackLayer:(id)arg1;
- (void)setPressed:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShape:(unsigned long long)arg1;
- (unsigned long long)shape;

@end
