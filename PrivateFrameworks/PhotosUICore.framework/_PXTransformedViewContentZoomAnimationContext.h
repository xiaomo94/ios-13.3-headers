/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXTransformedViewContentZoomAnimationContext : NSObject <PXZoomAnimationContext> {
    <PXZoomAnimationContext> * _context;
    double  _fromAlpha;
    PXNonuniformTransform * _fromTransform;
    double  _toAlpha;
    PXNonuniformTransform * _toTransform;
    UIView * _transformedView;
}

@property (nonatomic, readonly) double animationDuration;
@property (nonatomic, readonly) long long animationType;
@property (nonatomic, readonly) <PXZoomAnimationContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double fromAlpha;
@property (nonatomic, readonly) PXRegionOfInterest *fromRegionOfInterest;
@property (nonatomic, readonly) PXNonuniformTransform *fromTransform;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keepsSourceRegionOfInterestContent;
@property (getter=isMatchingRegionsOfInterest, nonatomic, readonly) bool matchingRegionsOfInterest;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double toAlpha;
@property (nonatomic, readonly) PXRegionOfInterest *toRegionOfInterest;
@property (nonatomic, readonly) PXNonuniformTransform *toTransform;
@property (nonatomic, readonly) UIView *transformedView;

- (void).cxx_destruct;
- (double)animationDuration;
- (long long)animationType;
- (id)context;
- (void)didEndAnimation:(long long)arg1;
- (double)fromAlpha;
- (id)fromRegionOfInterest;
- (id)fromTransform;
- (id)initWithTransformedView:(id)arg1 context:(id)arg2;
- (bool)isMatchingRegionsOfInterest;
- (bool)keepsSourceRegionOfInterestContent;
- (void)registerCleanupHandler:(id /* block */)arg1;
- (double)toAlpha;
- (id)toRegionOfInterest;
- (id)toTransform;
- (id)transformedView;
- (long long)willBeginAnimation;

@end
