/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIMenuModuleItemView : UIControl {
    UIView * _highlightedBackgroundView;
    unsigned long long  _indentation;
    UIView * _leadingView;
    CCUIMenuModuleItem * _menuItem;
    double  _preferredMaxLayoutWidth;
    UIView * _separatorView;
    bool  _separatorVisible;
    BSUIEmojiLabelView * _subtitleLabel;
    BSUIEmojiLabelView * _titleLabel;
    UIView * _trailingView;
    bool  _useTallLayout;
    bool  _useTrailingCheckmarkLayout;
    bool  _useTrailingInset;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (nonatomic) unsigned long long indentation;
@property (nonatomic, retain) UIView *leadingView;
@property (nonatomic, retain) CCUIMenuModuleItem *menuItem;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) bool separatorVisible;
@property (nonatomic, retain) UIView *trailingView;
@property (nonatomic) bool useTallLayout;
@property (nonatomic) bool useTrailingCheckmarkLayout;
@property (nonatomic) bool useTrailingInset;

+ (id)_preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2 contentSizeCategory:(id)arg3;
+ (bool)_shouldLimitContentSizeCategory:(id)arg1;
+ (id)_subtitleFontForContentSizeCategory:(id)arg1;
+ (id)_titleFontForContentSizeCategory:(id)arg1;
+ (double)defaultMenuItemHeightForContentSizeCategory:(id)arg1 useTallLayout:(bool)arg2;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_labelInsets;
- (double)_labelLeadingInset;
- (double)_labelTrailingInset;
- (void)_layoutLeadingCustomView;
- (void)_layoutTrailingCustomViews;
- (double)_separatorHeight;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setSubtitle:(id)arg1;
- (void)_setTitle:(id)arg1;
- (bool)_shouldHorizontallyCenterText;
- (bool)_shouldUseTallLayout;
- (void)_stopAutomaticallyUpdatingView:(id)arg1 recursivelyIfNeeded:(bool)arg2;
- (id)_subtitleFont;
- (double)_textHeightForEmojiLabel:(id)arg1 width:(double)arg2;
- (double)_titleBaselineToBottom;
- (double)_titleBaselineToTop;
- (id)_titleFont;
- (double)_trailingWidthForCustomViews;
- (void)_updateForStateChange;
- (void)_updateVisualStyleOfView:(id)arg1 withStyle:(long long)arg2 recursivelyIfNeeded:(bool)arg3;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (unsigned long long)hash;
- (unsigned long long)indentation;
- (id)initWithMenuItem:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isEqual:(id)arg1;
- (void)layoutSubviews;
- (id)leadingView;
- (id)menuItem;
- (double)preferredMaxLayoutWidth;
- (bool)separatorVisible;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIndentation:(unsigned long long)arg1;
- (void)setLeadingView:(id)arg1;
- (void)setMenuItem:(id)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSeparatorVisible:(bool)arg1;
- (void)setTrailingView:(id)arg1;
- (void)setUseTallLayout:(bool)arg1;
- (void)setUseTrailingCheckmarkLayout:(bool)arg1;
- (void)setUseTrailingInset:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)title;
- (id)trailingView;
- (void)updateSubviewsAlpha:(double)arg1;
- (bool)useTallLayout;
- (bool)useTrailingCheckmarkLayout;
- (bool)useTrailingInset;

@end
