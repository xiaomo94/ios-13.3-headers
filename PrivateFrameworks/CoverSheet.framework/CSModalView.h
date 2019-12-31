/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSModalView : CSCoverSheetViewBase <SBLockScreenModalView> {
    NSLayoutConstraint * _centralGroupBottomConstraint;
    NSLayoutConstraint * _centralGroupTopConstraint;
    UIView * _centralGroupView;
    UILayoutGuide * _dateViewLayoutGuide;
    NSLayoutConstraint * _dateViewVerticalConstraint;
    <CSModalViewDelegate> * _delegate;
    UIView * _detailView;
    UIImageView * _imageView;
    _UILegibilitySettings * _legibilitySettings;
    bool  _needsDetailViewConstraints;
    bool  _needsImageConstraints;
    bool  _needsPrimaryActionConstraints;
    bool  _needsSecondaryActionConstraints;
    bool  _needsSecondarySubTitleConstraints;
    bool  _needsSubTitleConstraints;
    bool  _needsTitleConstraints;
    NSString * _overrideFooterText;
    CSModalButton * _primaryActionButton;
    UIButton * _secondaryActionButton;
    UILabel * _secondarySubtitleLabel;
    bool  _showsDateView;
    bool  _showsStatusText;
    CSStatusTextViewController * _statusTextViewController;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelBaselineConstraint;
    bool  _wantsEnhancedSecondaryActionButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSModalViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *detailView;
@property (nonatomic, copy) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (getter=_imageView, setter=_setImageView:, nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (getter=_primaryActionButton, setter=_setPrimaryActionButton:, nonatomic, retain) CSModalButton *primaryActionButton;
@property (nonatomic, retain) UIColor *primaryActionButtonBackgroundColor;
@property (nonatomic, copy) NSString *primaryActionButtonText;
@property (getter=_secondaryActionButton, setter=_setSecondaryActionButton:, nonatomic, retain) UIButton *secondaryActionButton;
@property (nonatomic, copy) NSString *secondaryActionButtonText;
@property (nonatomic, copy) UIColor *secondaryActionButtonTextColor;
@property (getter=_secondarySubtitleLabel, setter=_setSecondarySubtitleLabel:, nonatomic, retain) UILabel *secondarySubtitleLabel;
@property (nonatomic, copy) NSString *secondarySubtitleText;
@property (nonatomic) bool showsDateView;
@property (nonatomic) bool showsStatusText;
@property (getter=_subtitleLabel, setter=_setSubtitleLabel:, nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, copy) NSString *subtitleText;
@property (readonly) Class superclass;
@property (getter=_titleLabel, setter=_setTitleLabel:, nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, copy) UIColor *titleTextColor;
@property (nonatomic) bool wantsEnhancedSecondaryActionButton;

- (void).cxx_destruct;
- (double)_bottomBaselineOffset;
- (void)_buttonTapped:(id)arg1;
- (void)_createAppropriateSecondaryActionButtonIfNecessary;
- (void)_createEnhancedSecondaryActionButtonIfNecessary;
- (void)_createPrimaryActionButtonIfNecessary;
- (void)_createSecondaryActionButtonIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dateTimeFrame;
- (id)_fontWithTextStyle:(id)arg1 cappedToSize:(id)arg2;
- (id)_imageView;
- (id)_labelWithNumberOfLines:(unsigned long long)arg1 font:(id)arg2;
- (void)_positionBottomElementWithLayoutAnchor:(id)arg1 lessThanOrEqual:(bool)arg2;
- (id)_preferredContentSizeCategoryCappedToSize:(id)arg1;
- (id)_primaryActionButton;
- (id)_primaryActionFont;
- (bool)_replaceView:(id)arg1 withNewView:(id)arg2 inParentView:(id)arg3;
- (id)_secondaryActionButton;
- (id)_secondaryActionFont;
- (id)_secondarySubtitleLabel;
- (void)_setImageView:(id)arg1;
- (void)_setPrimaryActionButton:(id)arg1;
- (void)_setSecondaryActionButton:(id)arg1;
- (void)_setSecondarySubtitleLabel:(id)arg1;
- (void)_setSubtitleLabel:(id)arg1;
- (void)_setTitleLabel:(id)arg1;
- (id)_subtitleFont;
- (id)_subtitleLabel;
- (double)_timeLabelBaselineY;
- (double)_timeToSubtitleLabelBaselineDifferenceY;
- (id)_titleFont;
- (id)_titleLabel;
- (id)delegate;
- (id)detailView;
- (id)footerText;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)primaryActionButtonBackgroundColor;
- (id)primaryActionButtonText;
- (id)secondaryActionButtonText;
- (id)secondaryActionButtonTextColor;
- (id)secondarySubtitleText;
- (void)setDelegate:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setFooterText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setPrimaryActionButtonBackgroundColor:(id)arg1;
- (void)setPrimaryActionButtonText:(id)arg1;
- (void)setSecondaryActionButtonText:(id)arg1;
- (void)setSecondaryActionButtonTextColor:(id)arg1;
- (void)setSecondarySubtitleText:(id)arg1;
- (void)setShowsDateView:(bool)arg1;
- (void)setShowsStatusText:(bool)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setWantsEnhancedSecondaryActionButton:(bool)arg1;
- (bool)showsDateView;
- (bool)showsStatusText;
- (id)subtitleText;
- (id)titleText;
- (id)titleTextColor;
- (void)updateConstraints;
- (bool)wantsEnhancedSecondaryActionButton;

@end
