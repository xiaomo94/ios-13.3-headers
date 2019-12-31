/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKStoreButton : UIButton {
    UIView * _backgroundView;
    TLKProminenceView * _highlightView;
    bool  _isEmphasized;
    TLKLabel * _label;
}

@property (retain) UIView *backgroundView;
@property (retain) TLKProminenceView *highlightView;
@property bool isEmphasized;
@property (retain) TLKLabel *label;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)backgroundView;
- (void)didMoveToWindow;
- (struct CGSize { double x1; double x2; })effectiveLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)highlightView;
- (id)init;
- (bool)isEmphasized;
- (id)label;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsEmphasized:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)tlk_updateForAppearance:(id)arg1;

@end
