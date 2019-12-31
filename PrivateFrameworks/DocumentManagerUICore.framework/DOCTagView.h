/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCTagView : UIView {
    <DOCTagViewDelegate> * _delegate;
    double  _maxWidth;
    UILabel * _tagNameLabel;
    DOCTag * _tagValue;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) <DOCTagViewDelegate> *delegate;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) double maxWidth;
@property (nonatomic, readonly) UILabel *tagNameLabel;
@property (nonatomic, copy) DOCTag *tagValue;

- (void).cxx_destruct;
- (bool)adjustsFontForContentSizeCategory;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)delegate;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)longPressGestureRecognizer:(id)arg1;
- (double)maxWidth;
- (void)removeTag:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setTagValue:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)tagNameLabel;
- (id)tagValue;
- (void)updateColors;
- (id)viewForLastBaselineLayout;

@end
