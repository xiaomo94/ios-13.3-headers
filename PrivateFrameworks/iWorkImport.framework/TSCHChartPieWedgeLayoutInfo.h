/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartPieWedgeLayoutInfo : NSObject <NSCopying> {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mCombinedLabelTransformIntoPieChartCoordinateSpace;
    NSNumber * mEnableCalloutLine;
    NSArray * mPieLabels;
    TSCHChartPieWedgeElement * mWedgeElement;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } combinedLabelErasableFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } combinedLabelErasableFrameInChartCoordinateSpace;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } combinedLabelRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } combinedLabelRectInChartCoordinateSpace;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } combinedLabelRectMidpointInChartCoordinateSpace;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } combinedLabelTransformIntoPieChartCoordinateSpace;
@property (nonatomic, readonly) long long enableCalloutLineSetting;
@property (nonatomic, copy) NSArray *pieLabels;
@property (nonatomic, readonly) bool stackLabels;
@property (nonatomic, retain) TSCHChartPieWedgeElement *wedgeElement;

- (void).cxx_destruct;
- (double)combinedLabelDistanceFromWedgeTip;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })combinedLabelErasableFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })combinedLabelErasableFrameInChartCoordinateSpace;
- (bool)combinedLabelIsOnLeftSide;
- (bool)combinedLabelOutsideWedge;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })combinedLabelRect;
- (struct CGPoint { double x1; double x2; })combinedLabelRectBottomLeftCornerInChartCoordinateSpace;
- (struct CGPoint { double x1; double x2; })combinedLabelRectBottomRightCornerInChartCoordinateSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })combinedLabelRectInChartCoordinateSpace;
- (struct CGPoint { double x1; double x2; })combinedLabelRectMidpointInChartCoordinateSpace;
- (struct CGPoint { double x1; double x2; })combinedLabelRectTopLeftCornerInChartCoordinateSpace;
- (struct CGPoint { double x1; double x2; })combinedLabelRectTopRightCornerInChartCoordinateSpace;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })combinedLabelTransformIntoPieChartCoordinateSpace;
- (void)concatenateCombinedLabelTransformWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)enableCalloutLineSetting;
- (id)initWithPieWedgeElement:(id)arg1 pieLabels:(id)arg2 combinedLabelTransformIntoPieChartCoordinateSpace:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)pieLabels;
- (struct CGPoint { double x1; double x2; })pointAtLabelInChartCoordinateSpace;
- (struct CGPoint { double x1; double x2; })pointAtLabelInChartCoordinateSpaceOnCloseXSideBottomYWithStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })pointAtLabelInChartCoordinateSpaceOnCloseXSideMiddleY;
- (struct CGPoint { double x1; double x2; })pointAtLabelInChartCoordinateSpaceOnCloseXSideMiddleYWithStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })pointAtLabelInChartCoordinateSpaceOnCloseXSideTopYWithStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })pointAtLabelInChartCoordinateSpaceOnFarXSideBottomYWithStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })pointAtLabelInChartCoordinateSpaceOnFarXSideMiddleYWithStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })pointAtLabelInChartCoordinateSpaceOnFarXSideTopYWithStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)pointOutsidePieChart:(struct CGPoint { double x1; double x2; })arg1;
- (void)realignPieLabels:(long long)arg1;
- (void)setCombinedLabelTransformIntoPieChartCoordinateSpace:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPieLabels:(id)arg1;
- (void)setWedgeElement:(id)arg1;
- (bool)stackLabels;
- (void)updateToUseChartCoordinateSpaceWithChartBodyCenterPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })vectorFromWedgeTipToCombinedLabelRect;
- (id)wedgeElement;

@end
