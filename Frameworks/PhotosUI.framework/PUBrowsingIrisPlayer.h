/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingIrisPlayer : PUViewModel <ISChangeObserver, PXVideoScrubberControllerTarget> {
    long long  __currentUnloadRequestId;
    PHLivePhoto * __livePhoto;
    NSMutableSet * __livePhotoLoadingDisablingReasons;
    NSMutableSet * __livePhotoPlaybackDisablingReasons;
    int  __livePhotoRequestID;
    long long  __livePhotoRequestState;
    id /* block */  __seekCompletionHandler;
    bool  _activated;
    <PUDisplayAsset> * _asset;
    ISWrappedAVPlayer * _avPlayer;
    NSArray * _currentlyDisplayedTimes;
    bool  _hasPendingVitalityHint;
    bool  _isLivePhotoPlaybackAllowed;
    struct { 
        bool livePhoto; 
        bool playerContent; 
        bool playerLoadingTarget; 
        bool playerItemScrubbingPhotoTime; 
        bool playing; 
    }  _isValid;
    bool  _livePhotoLoadingAllowed;
    long long  _loadingTarget;
    PUMediaProvider * _mediaProvider;
    ISLivePhotoPlayer * _player;
    bool  _playing;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _scrubbingPhotoTime;
    id  _videoPeriodicObserver;
    id /* block */  durationChangeHandler;
    id /* block */  playerItemChangeHandler;
    id /* block */  statusChangeHandler;
}

@property (setter=_setCurrentUnloadRequestId:, nonatomic) long long _currentUnloadRequestId;
@property (setter=_setLivePhoto:, nonatomic, retain) PHLivePhoto *_livePhoto;
@property (nonatomic, retain) NSMutableSet *_livePhotoLoadingDisablingReasons;
@property (nonatomic, retain) NSMutableSet *_livePhotoPlaybackDisablingReasons;
@property (setter=_setLivePhotoRequestID:, nonatomic) int _livePhotoRequestID;
@property (setter=_setLivePhotoRequestState:, nonatomic) long long _livePhotoRequestState;
@property (setter=_setSeekCompletionHandler:, nonatomic, copy) id /* block */ _seekCompletionHandler;
@property (getter=isActivated, nonatomic) bool activated;
@property (nonatomic, retain) <PUDisplayAsset> *asset;
@property (setter=_setAvPlayer:, nonatomic, retain) ISWrappedAVPlayer *avPlayer;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentPhototime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentVideoDuration;
@property (setter=_setCurrentlyDisplayedTimes:, nonatomic, copy) NSArray *currentlyDisplayedTimes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ durationChangeHandler;
@property (nonatomic, readonly) bool hasPendingVitalityHint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLivePhotoPlaybackAllowed;
@property (getter=isLivePhotoLoadingAllowed, setter=_setLivePhotoLoadingAllowed:, nonatomic) bool livePhotoLoadingAllowed;
@property (nonatomic) long long loadingTarget;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } nonScrubbingPhotoTime;
@property (nonatomic, readonly) ISLivePhotoPlayer *player;
@property (nonatomic, copy) id /* block */ playerItemChangeHandler;
@property (getter=isPlaying, setter=_setPlaying:, nonatomic) bool playing;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } scrubbingPhotoTime;
@property (nonatomic, copy) id /* block */ statusChangeHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelAllRequests;
- (long long)_contentMode;
- (long long)_currentUnloadRequestId;
- (void)_handleLivePhotoResult:(id)arg1 info:(id)arg2 requestID:(int)arg3;
- (void)_handlePeriodicObserverWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_handlePlaybackStyleChanged;
- (void)_invalidateLivePhoto;
- (void)_invalidatePlayerContent;
- (void)_invalidatePlayerItemLoadingTarget;
- (void)_invalidatePlayerItemScrubbingPhotoTime;
- (void)_invalidatePlaying;
- (bool)_isContentLoadingRequestInProgress;
- (id)_livePhoto;
- (id)_livePhotoLoadingDisablingReasons;
- (id)_livePhotoPlaybackDisablingReasons;
- (int)_livePhotoRequestID;
- (long long)_livePhotoRequestState;
- (bool)_needsUpdate;
- (id)_playerCreateIfNeeded:(bool)arg1;
- (id /* block */)_seekCompletionHandler;
- (void)_setAVPlayer:(id)arg1;
- (void)_setAvPlayer:(id)arg1;
- (void)_setCurrentUnloadRequestId:(long long)arg1;
- (void)_setCurrentlyDisplayedTimes:(id)arg1;
- (void)_setLivePhoto:(id)arg1;
- (void)_setLivePhotoLoadingAllowed:(bool)arg1;
- (void)_setLivePhotoPlaybackAllowed:(bool)arg1;
- (void)_setLivePhotoRequestID:(int)arg1;
- (void)_setLivePhotoRequestState:(long long)arg1;
- (void)_setPlaying:(bool)arg1;
- (void)_setSeekCompletionHandler:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })_targetSize;
- (void)_updateIfNeeded;
- (void)_updateLivePhotoIfNeeded;
- (void)_updatePlayerContentIfNeeded;
- (void)_updatePlayerItemLoadingTargetIfNeeded;
- (void)_updatePlayerItemScrubbingPhotoTimeIfNeeded;
- (void)_updatePlayingIfNeeded;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)asset;
- (id)avPlayer;
- (id)avPlayerForVideoScrubberController:(id)arg1;
- (void)cancelPendingSeeks;
- (id)currentChange;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentItemDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentPhototime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentVideoDuration;
- (id)currentlyDisplayedTimes;
- (void)dealloc;
- (id)debugDetailedDescription;
- (void)didPerformChanges;
- (void)didPlayVitalityHint;
- (id /* block */)durationChangeHandler;
- (bool)hasPendingVitalityHint;
- (id)init;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (bool)isActivated;
- (bool)isLivePhotoLoadingAllowed;
- (bool)isLivePhotoPlaybackAllowed;
- (bool)isPlaying;
- (long long)loadingTarget;
- (id)mediaProvider;
- (id)newViewModelChange;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })nonScrubbingPhotoTime;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (float)playRate;
- (void)playVitalityHint;
- (id)player;
- (id)playerCreateIfNeeded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playerCurrentTime;
- (id)playerItem;
- (id /* block */)playerItemChangeHandler;
- (long long)playerStatus;
- (void)registerChangeObserver:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })scrubbingPhotoTime;
- (void)setActivated:(bool)arg1;
- (void)setAsset:(id)arg1;
- (void)setDurationChangeHandler:(id /* block */)arg1;
- (void)setLivePhotoLoadingDisabled:(bool)arg1 forReason:(id)arg2;
- (void)setLivePhotoPlaybackDisabled:(bool)arg1 forReason:(id)arg2;
- (void)setLoadingTarget:(long long)arg1;
- (void)setPlayerItemChangeHandler:(id /* block */)arg1;
- (void)setScrubbingPhotoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completion:(id /* block */)arg2;
- (void)setStatusChangeHandler:(id /* block */)arg1;
- (void)set_livePhotoLoadingDisablingReasons:(id)arg1;
- (void)set_livePhotoPlaybackDisablingReasons:(id)arg1;
- (id /* block */)statusChangeHandler;
- (void)unloadLivePhoto;
- (void)unregisterChangeObserver:(id)arg1;
- (void)videoScrubberController:(id)arg1 seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 completionHandler:(id /* block */)arg5;

@end
