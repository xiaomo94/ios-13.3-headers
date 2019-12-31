/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWallpaperPhotoCell : UICollectionViewCell {
    NSString * _assetIdentifier;
    CAShapeLayer * _borderLayer;
    bool  _busy;
    UILabel * _choosePhotoLabel;
    long long  _contentMode;
    double  _cornerRadius;
    <HUWallpaperPhotoCellDelegate> * _delegate;
    UIButton * _deleteButton;
    bool  _empty;
    UIImageView * _imageView;
    NSLayoutConstraint * _imageWidthConstraint;
    bool  _removable;
    UIView * _selectionOverlayView;
    bool  _showBorder;
    UIActivityIndicatorView * _spinnerView;
    UIStackView * _stackView;
}

@property (nonatomic, copy) NSString *assetIdentifier;
@property (nonatomic, retain) CAShapeLayer *borderLayer;
@property (nonatomic) bool busy;
@property (nonatomic, retain) UILabel *choosePhotoLabel;
@property (nonatomic) long long contentMode;
@property (nonatomic) double cornerRadius;
@property (nonatomic) <HUWallpaperPhotoCellDelegate> *delegate;
@property (nonatomic, retain) UIButton *deleteButton;
@property (nonatomic) bool empty;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) NSLayoutConstraint *imageWidthConstraint;
@property (nonatomic) bool removable;
@property (nonatomic, retain) UIView *selectionOverlayView;
@property (nonatomic) bool showBorder;
@property (nonatomic, retain) UIActivityIndicatorView *spinnerView;
@property (nonatomic, retain) UIStackView *stackView;

- (void).cxx_destruct;
- (id)assetIdentifier;
- (id)borderLayer;
- (bool)busy;
- (id)choosePhotoLabel;
- (long long)contentMode;
- (double)cornerRadius;
- (id)delegate;
- (id)deleteButton;
- (void)deleteButtonPressed;
- (bool)empty;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)image;
- (id)imageView;
- (id)imageWidthConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (bool)removable;
- (id)selectionOverlayView;
- (void)setAssetIdentifier:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderLayer:(id)arg1;
- (void)setBusy:(bool)arg1;
- (void)setChoosePhotoLabel:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setEmpty:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setImageWidthConstraint:(id)arg1;
- (void)setRemovable:(bool)arg1;
- (void)setSelectionOverlayView:(id)arg1;
- (void)setShowBorder:(bool)arg1;
- (void)setSpinnerView:(id)arg1;
- (void)setStackView:(id)arg1;
- (bool)showBorder;
- (void)showBorder:(bool)arg1 animated:(bool)arg2;
- (id)spinnerView;
- (id)stackView;
- (void)updateView;

@end
