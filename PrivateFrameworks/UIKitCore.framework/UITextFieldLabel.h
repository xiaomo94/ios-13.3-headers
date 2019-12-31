/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextFieldLabel : UILabel {
    bool  _shouldRenderWithoutTextField;
}

@property (nonatomic) bool shouldRenderWithoutTextField;

+ (id)_defaultAttributes;
+ (id)defaultFont;

- (void)_defaultDrawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_shouldDrawUnderlinesLikeWebKit;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldRenderWithoutTextField:(bool)arg1;
- (bool)shouldRenderWithoutTextField;

@end
