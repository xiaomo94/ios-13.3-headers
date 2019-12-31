/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUILayoutView : CCUIScrollView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    CCUILayoutOptions * _layoutOptions;
    <CCUILayoutViewLayoutSource> * _layoutSource;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) <CCUILayoutViewLayoutSource> *layoutSource;

- (void).cxx_destruct;
- (void)didAddSubview:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRect:(struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct CCUILayoutSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutOptions:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)iterateLayoutSubviewsWithBlock:(id /* block */)arg1;
- (id)layoutSource;
- (void)layoutSubviews;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLayoutSource:(id)arg1;
- (void)setNeedsLayout;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subviewsToLayout;
- (void)willRemoveSubview:(id)arg1;

@end
