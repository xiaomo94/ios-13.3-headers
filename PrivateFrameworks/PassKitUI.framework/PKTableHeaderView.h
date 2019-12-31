/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKTableHeaderView : UIView {
    bool  _accessoryViewsDisabled;
    UIButton * _actionButton;
    UIActivityIndicatorView * _activityIndicator;
    double  _bottomPadding;
    PKCheckGlyphLayer * _checkmarkLayer;
    UIImageView * _imageView;
    double  _minimumHeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalImageViewSize;
    bool  _shouldResizeImageToFit;
    unsigned long long  _style;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    double  _topPadding;
}

@property (nonatomic) bool accessoryViewsDisabled;
@property (nonatomic, readonly) UIButton *actionButton;
@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) double bottomPadding;
@property (nonatomic, readonly) PKCheckGlyphLayer *checkmarkLayer;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) double minimumHeight;
@property (nonatomic) bool shouldResizeImageToFit;
@property (nonatomic) unsigned long long style;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) double topPadding;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (bool)_hasAccessibilityLargeText;
- (struct CGSize { double x1; double x2; })_sizeThatFitsExcludingImage:(struct CGSize { double x1; double x2; })arg1;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)_updateAccessoryViews;
- (void)_updateCheckmarkColor;
- (void)_updateFonts;
- (void)_updateImageView;
- (bool)accessoryViewsDisabled;
- (id)actionButton;
- (id)activityIndicator;
- (double)bottomPadding;
- (id)checkmarkLayer;
- (void)dealloc;
- (id)imageView;
- (void)layoutSubviews;
- (double)minimumHeight;
- (void)setAccessoryViewsDisabled:(bool)arg1;
- (void)setBottomPadding:(double)arg1;
- (void)setImageView:(id)arg1;
- (void)setImageViewImage:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 animated:(bool)arg3;
- (void)setMinimumHeight:(double)arg1;
- (void)setPassSnapshotUsingDefaultSize:(id)arg1 animated:(bool)arg2 needsCorners:(bool)arg3;
- (void)setShouldResizeImageToFit:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTopPadding:(double)arg1;
- (bool)shouldResizeImageToFit;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (id)subtitleLabel;
- (void)tintColorDidChange;
- (id)titleLabel;
- (double)topPadding;
- (void)traitCollectionDidChange:(id)arg1;

@end
