/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIReusableHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView> {
    UIImageView * _chevronView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UIButton * _headerAreaButton;
    UILabel * _headerLabel;
    SiriUISnippetViewController * _snippetViewController;
    NSString * _titleText;
    UIColor * _titleTextColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIButton *headerAreaButton;
@property (nonatomic) SiriUISnippetViewController *snippetViewController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, copy) UIColor *titleTextColor;

+ (double)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_configureHeaderLabelForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)desiredHeightForWidth:(double)arg1;
- (id)headerAreaButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setSnippetViewController:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (id)snippetViewController;
- (id)titleText;
- (id)titleTextColor;

@end
