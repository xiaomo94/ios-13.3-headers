/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMLivePhotoButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider> {
    CAMLivePhotoAnimationCache * __animationCache;
    UIImageView * __imageView;
    bool  _allowsAutomaticMode;
}

@property (nonatomic, retain) CAMLivePhotoAnimationCache *_animationCache;
@property (nonatomic, readonly) UIImageView *_imageView;
@property (nonatomic) bool allowsAutomaticMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long livePhotoMode;
@property (readonly) Class superclass;

+ (double)enablingAnimationDuration;

- (void).cxx_destruct;
- (id)_animationCache;
- (id)_availableModes;
- (id)_currentBaseImage;
- (id)_imageView;
- (void)_loadAnimationCacheIfNeeded;
- (void)_updateAnimationImages;
- (void)_updateBaseImage;
- (bool)allowsAutomaticMode;
- (void)finishExpansionAnimated:(bool)arg1;
- (id)headerView;
- (id)imageForAccessibilityHUD;
- (long long)indexForMode:(long long)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)interruptEnablingAnimation;
- (long long)livePhotoMode;
- (long long)modeForIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)performEnablingAnimation;
- (void)preloadEnablingAnimation;
- (void)prepareHeaderViewForExpanding:(bool)arg1;
- (void)reloadData;
- (void)setAllowsAutomaticMode:(bool)arg1;
- (void)setAllowsAutomaticMode:(bool)arg1 needsReloadData:(bool)arg2;
- (void)setLivePhotoMode:(long long)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)set_animationCache:(id)arg1;
- (id)titleForMenuItemAtIndex:(long long)arg1;

@end
