/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataLayerAnimationInfo : NSObject <NSCopying> {
    bool  mAboveIntercept;
    bool  mAtIntercept;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mChartBodyFrameInRepElementSpace;
    bool  mCrossesIntercept;
    bool  mCurrentAboveIntercept;
    bool  mCurrentAtIntercept;
    double  mDuration;
    bool  mElementUndefined;
    bool  mHorizontalChart;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mInterceptRect;
    NSArray * mKeyTimes;
    NSMutableArray * mLayerAnimationValues;
    bool  mShouldAnimate;
    CAMediaTimingFunction * mTimingFunction;
}

@property (nonatomic) bool aboveIntercept;
@property (nonatomic) bool atIntercept;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } chartBodyFrameInRepElementSpace;
@property (nonatomic) bool crossesIntercept;
@property (nonatomic) bool currentAboveIntercept;
@property (nonatomic) bool currentAtIntercept;
@property (nonatomic) double duration;
@property (nonatomic) bool elementUndefined;
@property (nonatomic) bool horizontalChart;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } interceptRect;
@property (nonatomic, copy) NSArray *keyTimes;
@property (nonatomic, readonly) NSArray *layerAnimationValues;
@property (nonatomic) bool shouldAnimate;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;

+ (id)animationInfo;

- (void).cxx_destruct;
- (bool)aboveIntercept;
- (void)addAnimationForLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4;
- (void)addAnimationForLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(bool)arg5;
- (void)addImageContentsAnimationForLayer:(id)arg1 fromImage:(id)arg2 toImage:(id)arg3 keyTimes:(id)arg4;
- (bool)atIntercept;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chartBodyFrameInRepElementSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)crossesIntercept;
- (bool)currentAboveIntercept;
- (bool)currentAtIntercept;
- (double)duration;
- (bool)elementUndefined;
- (bool)horizontalChart;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interceptRect;
- (id)keyTimes;
- (id)layerAnimationValues;
- (void)setAboveIntercept:(bool)arg1;
- (void)setAtIntercept:(bool)arg1;
- (void)setChartBodyFrameInRepElementSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCrossesIntercept:(bool)arg1;
- (void)setCurrentAboveIntercept:(bool)arg1;
- (void)setCurrentAtIntercept:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setElementUndefined:(bool)arg1;
- (void)setHorizontalChart:(bool)arg1;
- (void)setInterceptRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setKeyTimes:(id)arg1;
- (void)setShouldAnimate:(bool)arg1;
- (void)setTimingFunction:(id)arg1;
- (bool)shouldAnimate;
- (id)timingFunction;

@end
