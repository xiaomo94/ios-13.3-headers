/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollController : NSObject <ADPlayerDelegate, ADPrerollViewDelegate> {
    ADPlayer * _adPlayer;
    id /* block */  _completionHandler;
    bool  _isObservingThirdPartyAVPlayer;
    MPMoviePlayerController * _moviePlayerController;
    bool  _setupInProgress;
    unsigned long long  _type;
    ADPrerollView * _view;
}

@property (nonatomic, retain) ADPlayer *adPlayer;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isObservingThirdPartyAVPlayer;
@property (nonatomic) MPMoviePlayerController *moviePlayerController;
@property (nonatomic) bool setupInProgress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, retain) ADPrerollView *view;

- (void).cxx_destruct;
- (void)_addAccessibilityIdentifier:(id)arg1;
- (id)_advertisementView;
- (void)_appWillResignActive;
- (bool)_beginPlayback;
- (void)_handlePlaybackCompletion:(bool)arg1;
- (bool)_isEmbedded;
- (void)actionButtonPressed;
- (id)adPlayer;
- (void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned long long)arg2;
- (void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
- (void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3;
- (void)adPlayerDidBeginAction:(id)arg1;
- (void)adPlayerDidFinishPlayback:(id)arg1;
- (void)adPlayerDidTimeout:(id)arg1;
- (void)adPlayerFailedToLoadAsset:(id)arg1;
- (void)adPlayerFailedToPlayWithUnknownError:(id)arg1;
- (void)cancel;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)doneButtonPressed;
- (id)init;
- (id)initWithMoviePlayerController:(id)arg1;
- (bool)isObservingThirdPartyAVPlayer;
- (id)moviePlayerController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pauseButtonPressed;
- (void)playButtonPressed;
- (void)playPrerollAdWithCompletion:(id /* block */)arg1;
- (bool)prerollViewRequestsEmbeddedStatus;
- (void)privacyButtonPressed;
- (void)setAdPlayer:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setIsObservingThirdPartyAVPlayer:(bool)arg1;
- (void)setMoviePlayerController:(id)arg1;
- (void)setSetupInProgress:(bool)arg1;
- (void)setView:(id)arg1;
- (bool)setupInProgress;
- (void)shutdown;
- (void)skipButtonPressed;
- (unsigned long long)type;
- (id)view;
- (id)viewControllerForActionFromAdPlayer:(id)arg1;

@end
