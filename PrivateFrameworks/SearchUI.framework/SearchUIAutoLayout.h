/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAutoLayout : NSObject

+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 priority:(float)arg3;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(double)arg3;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(double)arg3 minimum:(bool)arg4;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(double)arg3 minimum:(bool)arg4 priority:(float)arg5;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(double)arg3 priority:(float)arg4;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toView:(id)arg4 attribute:(long long)arg5 constant:(double)arg6;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toView:(id)arg4 attribute:(long long)arg5 constant:(double)arg6 priority:(float)arg7;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 constant:(double)arg5;
+ (id)alignView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 priority:(float)arg5;
+ (id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(long long)arg3;
+ (id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(long long)arg3 constant:(double)arg4;
+ (id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(long long)arg3 priority:(float)arg4;
+ (void)alignViews:(id)arg1 withAttribute:(long long)arg2;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(double)arg3;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(double)arg3 forFont:(id)arg4;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(double)arg3 forFont:(id)arg4 minimum:(bool)arg5;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(double)arg3 minimum:(bool)arg4;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(double)arg3 priority:(float)arg4;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(double)arg3;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(double)arg3 isDynamic:(bool)arg4 forFont:(id)arg5 minimum:(bool)arg6;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(double)arg3 isDynamic:(bool)arg4 forFont:(id)arg5 minimum:(bool)arg6 priority:(float)arg7;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(double)arg3 minimum:(bool)arg4;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(double)arg3 priority:(float)arg4;
+ (void)constrainViewHeightContainer:(id)arg1;
+ (void)constrainViewToContainer:(id)arg1;
+ (void)constrainViewWidthToContainer:(id)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customBaselineInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 font:(id)arg2;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customUnscaledBaselineInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 font:(id)arg2;
+ (double)deviceScaledRoundedValue:(double)arg1;
+ (void)enableAutoLayoutForItems:(id)arg1;
+ (void)fillContainerWithView:(id)arg1;
+ (id)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2;
+ (id)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2 metrics:(id)arg3;
+ (id)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2 options:(unsigned long long)arg3;
+ (id)installConstraintsWithVisualFormat:(id)arg1 withViews:(id)arg2 metrics:(id)arg3 options:(unsigned long long)arg4;
+ (void)requireIntrinsicSizeForView:(id)arg1;
+ (void)requireIntrinsicSizeForView:(id)arg1 withPriority:(float)arg2;
+ (double)scaledValueForValue:(double)arg1 withFont:(id)arg2;
+ (id)setHeight:(double)arg1 forView:(id)arg2;
+ (void)setSize:(struct CGSize { double x1; double x2; })arg1 forView:(id)arg2;
+ (void)setVisibility:(bool)arg1 forView:(id)arg2;
+ (id)setWidth:(double)arg1 forView:(id)arg2;
+ (void)spanContainerHeightForView:(id)arg1;
+ (void)spanContainerWidthForView:(id)arg1;

@end
