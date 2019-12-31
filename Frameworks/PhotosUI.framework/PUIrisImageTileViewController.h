/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUIrisImageTileViewController : PUImageTileViewController <PHLivePhotoViewDelegate, PHLivePhotoViewDelegatePrivate, PUBrowsingViewModelChangeObserver> {
    PHLivePhotoView * __livePhotoView;
    PUBrowsingViewModel * _browsingViewModel;
    <PUIrisImageTileViewControllerDelegate> * _delegate;
    struct { 
        bool respondsToDidBeginPlaying; 
        bool respondsToWillEndPlaying; 
        bool respondsToDidEndPlaying; 
        bool respondsToDidEndVitality; 
        bool respondsToDidBeginHinting; 
        bool respondsToViewHostingGestureRecognizers; 
        bool respondsToDelegateForGestureRecognizer; 
    }  _delegateFlags;
    id /* block */  _ppt_didEndPlayingHandler;
}

@property (nonatomic, readonly) PHLivePhotoView *_livePhotoView;
@property (nonatomic, retain) PUBrowsingViewModel *browsingViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUIrisImageTileViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assetFocusValueDidChange;
- (void)_handleBrowsingIrisPlayer:(id)arg1 didChange:(id)arg2;
- (id)_livePhotoView;
- (void)_playVitalityHintIfNeeded;
- (void)_setLivePhotoView:(id)arg1;
- (void)_updateLivePhotoViewVitalityEnabled;
- (void)_updatePlaybackGestureRecognizer;
- (void)_updatePlayerViewInteractivePlaybackAllowed;
- (void)addToTilingView:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (void)assetViewModelDidChange;
- (id)browsingViewModel;
- (id)delegate;
- (id)generateAssetTransitionInfo;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)livePhotoViewDidBeginHinting:(id)arg1;
- (void)livePhotoViewDidEndPlayingVitality:(id)arg1;
- (id)loadView;
- (void)ppt_playLivePhotoWithCompletionHandler:(id /* block */)arg1;
- (void)removeAllAnimations;
- (void)setAssetViewModel:(id)arg1;
- (void)setBrowsingViewModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateMutableImageLayerModulator:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
