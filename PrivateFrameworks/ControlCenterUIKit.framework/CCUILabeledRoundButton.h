/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUILabeledRoundButton : UIView {
    CCUIRoundButton * _buttonView;
    UIImage * _glyphImage;
    CCUICAPackageDescription * _glyphPackageDescription;
    NSString * _glyphState;
    UIColor * _highlightColor;
    bool  _labelsVisible;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
    bool  _useAlternateBackground;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (nonatomic, retain) CCUIRoundButton *buttonView;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, retain) CCUICAPackageDescription *glyphPackageDescription;
@property (nonatomic, copy) NSString *glyphState;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic) bool labelsVisible;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) bool useAlternateBackground;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_layoutLabels;
- (void)_setupLabelsBounds;
- (bool)_shouldUseLargeTextLayout;
- (void)_updateVisualStylingOfLabel:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (id)buttonView;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)glyphImage;
- (id)glyphPackageDescription;
- (id)glyphState;
- (id)highlightColor;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(bool)arg3;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(bool)arg3;
- (id)initWithHighlightColor:(id)arg1 useLightStyle:(bool)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)labelsVisible;
- (void)layoutSubviews;
- (void)setButtonView:(id)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setLabelsVisible:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUseAlternateBackground:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;
- (bool)useAlternateBackground;

@end
