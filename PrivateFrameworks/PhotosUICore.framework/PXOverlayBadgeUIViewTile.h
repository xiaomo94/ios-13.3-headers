/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXOverlayBadgeUIViewTile : UIView <PXChangeObserver, PXOverlayBadgeTile, PXReusableObject, PXUIViewBasicTile> {
    unsigned long long  __badgeOptions;
    PXUIAssetBadgeView * __badgeView;
    PXAssetBadgeManager * _badgeManager;
    PXImageRequester * _imageRequester;
    struct { 
        bool badgeView; 
    }  _needsUpdateFlags;
}

@property (setter=_setBadgeOptions:, nonatomic) unsigned long long _badgeOptions;
@property (nonatomic, readonly) PXUIAssetBadgeView *_badgeView;
@property (nonatomic, retain) PXAssetBadgeManager *badgeManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXImageRequester *imageRequester;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (void)preloadResources;

- (void).cxx_destruct;
- (unsigned long long)_badgeOptions;
- (id)_badgeView;
- (void)_invalidateBadgeView;
- (void)_setBadgeOptions:(unsigned long long)arg1;
- (void)_updateBadgeViewIfNeeded;
- (id)badgeManager;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (id)imageRequester;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)prepareForReuse;
- (void)setBadgeManager:(id)arg1;
- (void)setImageRequester:(id)arg1;
- (id)view;

@end
