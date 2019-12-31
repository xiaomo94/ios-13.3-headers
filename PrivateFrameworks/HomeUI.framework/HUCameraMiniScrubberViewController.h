/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraMiniScrubberViewController : UIViewController <HFCameraPlaybackEngineObserver, HUCameraPlayerScrubbing> {
    AVBackgroundView * _backgroundView;
    NSDate * _clipStartDate;
    HMCameraClip * _currentClip;
    CADisplayLink * _displayLink;
    bool  _isScrubbing;
    bool  _isVisible;
    UIButton * _liveButton;
    UIButton * _playPauseButton;
    HFCameraPlaybackEngine * _playbackEngine;
    HUMiniScrubber * _playbackPositionSlider;
    HUBlendedSeparatorView * _rightBlendedSeparator;
}

@property (nonatomic, retain) AVBackgroundView *backgroundView;
@property (nonatomic, retain) NSDate *clipStartDate;
@property (nonatomic, retain) HMCameraClip *currentClip;
@property (nonatomic, readonly) double currentScrubberResolution;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isScrubbing;
@property (nonatomic) bool isVisible;
@property (nonatomic, retain) UIButton *liveButton;
@property (nonatomic, retain) UIButton *playPauseButton;
@property (nonatomic, retain) HFCameraPlaybackEngine *playbackEngine;
@property (nonatomic, retain) HUMiniScrubber *playbackPositionSlider;
@property (nonatomic, retain) HUBlendedSeparatorView *rightBlendedSeparator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_displayLinkUpdated:(id)arg1;
- (void)_loopPlaybackIfNeeded;
- (double)_playbackLength;
- (void)_seekToCurrentScrubberValue;
- (void)_updateScrubberDisplayLinkState;
- (void)_updateSliderPosition;
- (id)backgroundView;
- (void)beginScrubbing:(id)arg1;
- (id)clipStartDate;
- (id)currentClip;
- (double)currentScrubberResolution;
- (void)dealloc;
- (id)displayLink;
- (void)endScrubbing:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1 startDate:(id)arg2;
- (bool)isScrubbing;
- (bool)isVisible;
- (id)liveButton;
- (id)playPauseButton;
- (void)playPauseButtonPressed:(id)arg1;
- (id)playbackEngine;
- (void)playbackEngine:(id)arg1 didUpdateClipManager:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (id)playbackPositionSlider;
- (id)rightBlendedSeparator;
- (void)scrubberValueChanged:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setClipStartDate:(id)arg1;
- (void)setCurrentClip:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setIsScrubbing:(bool)arg1;
- (void)setIsVisible:(bool)arg1;
- (void)setLiveButton:(id)arg1;
- (void)setPlayPauseButton:(id)arg1;
- (void)setPlaybackEngine:(id)arg1;
- (void)setPlaybackPositionSlider:(id)arg1;
- (void)setRightBlendedSeparator:(id)arg1;
- (void)toggleLive:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
