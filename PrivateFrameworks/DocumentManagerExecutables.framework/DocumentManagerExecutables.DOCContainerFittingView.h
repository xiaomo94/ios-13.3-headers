/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
 */

@interface DocumentManagerExecutables.DOCContainerFittingView : UIView {
    void containedViewController;
    void contentOffsetFromTop;
    void fittingSize;
    void observationContext;
    void preventContentOffsetUpdates;
}

@property (nonatomic) double contentOffsetFromTop;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (double)contentOffsetFromTop;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setContentOffsetFromTop:(double)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;

@end
