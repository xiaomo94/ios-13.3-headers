/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrinterSetupConnectingView : UIView {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _label;
    double  _presentationTime;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) double presentationTime;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (void)presentView;
- (double)presentationTime;
- (void)setActivityIndicator:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMessage:(id)arg1 active:(bool)arg2;
- (void)setPresentationTime:(double)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
