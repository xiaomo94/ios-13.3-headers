/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDNowPlayingViewController : UIViewController <CARSessionObserving, MCDNowPlayingContentManagerDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    UIBarButtonItem * _activityIndicatorBarButtonItem;
    MPWeakTimer * _activityTimer;
    id /* block */  _albumViewControllerProvider;
    NSString * _appName;
    UIBarButtonItem * _backButton;
    NSString * _bundleID;
    CARSessionStatus * _carSessionStatus;
    <MCDNowPlayingContentManagerProtocol> * _contentManager;
    bool  _handledWillAppear;
    _MCDNowPlayingViewController * _nowPlayingViewController;
    UIBarButtonItem * _playbackQueueBarButtonItem;
    UITableViewController * _playbackQueueViewController;
    UILabel * _rightTitleLabel;
    UIBarButtonItem * _rightTitleLabelBarButtonItem;
    bool  _shouldShowPlaybackQueue;
    bool  _showNavigationBar;
    bool  _trackBuffering;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UIBarButtonItem *activityIndicatorBarButtonItem;
@property (nonatomic, retain) MPWeakTimer *activityTimer;
@property (nonatomic, copy) id /* block */ albumViewControllerProvider;
@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) UIBarButtonItem *backButton;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) CARSessionStatus *carSessionStatus;
@property (nonatomic, retain) <MCDNowPlayingContentManagerProtocol> *contentManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool handledWillAppear;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _MCDNowPlayingViewController *nowPlayingViewController;
@property (nonatomic, retain) UIBarButtonItem *playbackQueueBarButtonItem;
@property (nonatomic, retain) UITableViewController *playbackQueueViewController;
@property (nonatomic, retain) UILabel *rightTitleLabel;
@property (nonatomic, retain) UIBarButtonItem *rightTitleLabelBarButtonItem;
@property (nonatomic) bool shouldShowPlaybackQueue;
@property (nonatomic) bool showNavigationBar;
@property (readonly) Class superclass;
@property (nonatomic) bool trackBuffering;

- (void).cxx_destruct;
- (void)_adjustRightTitleLabelToFit;
- (void)_handleWillAppear;
- (void)_invalidateActivityTimer;
- (void)_popViewControllerAnimated;
- (void)_setupActivityTimer;
- (void)_updateBackButton;
- (id)activityIndicator;
- (id)activityIndicatorBarButtonItem;
- (id)activityTimer;
- (void)albumArtistButtonTapped:(id)arg1;
- (id /* block */)albumViewControllerProvider;
- (id)appName;
- (id)backButton;
- (id)bundleID;
- (id)carSessionStatus;
- (id)contentManager;
- (void)contentManager:(id)arg1 bufferingItem:(bool)arg2;
- (void)contentManager:(id)arg1 displayItemIndex:(long long)arg2 totalItemCount:(long long)arg3;
- (void)contentManager:(id)arg1 presentViewController:(id)arg2;
- (void)contentManager:(id)arg1 sectionName:(id)arg2;
- (void)contentManager:(id)arg1 shouldShowPlaybackQueue:(bool)arg2;
- (void)contentManagerCompletedAllPlayback:(id)arg1;
- (void)contentManagerInitiatedPlaybackFromPlaybackQueue:(id)arg1;
- (void)contentManagerReloadData:(id)arg1;
- (void)dealloc;
- (bool)handledWillAppear;
- (id)initWithBundleID:(id)arg1 appName:(id)arg2;
- (id)initWithPlayableBundleID:(id)arg1 appName:(id)arg2;
- (id)nowPlayingViewController;
- (id)playbackQueueBarButtonItem;
- (id)playbackQueueViewController;
- (id)preferredFocusEnvironments;
- (id)rightTitleLabel;
- (id)rightTitleLabelBarButtonItem;
- (void)session:(id)arg1 didUpdateConfiguration:(id)arg2;
- (void)setActivityIndicator:(id)arg1;
- (void)setActivityIndicatorBarButtonItem:(id)arg1;
- (void)setActivityTimer:(id)arg1;
- (void)setAlbumViewControllerProvider:(id /* block */)arg1;
- (void)setAppName:(id)arg1;
- (void)setBackButton:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCarSessionStatus:(id)arg1;
- (void)setContentManager:(id)arg1;
- (void)setHandledWillAppear:(bool)arg1;
- (void)setNowPlayingViewController:(id)arg1;
- (void)setPlaybackQueueBarButtonItem:(id)arg1;
- (void)setPlaybackQueueViewController:(id)arg1;
- (void)setRightTitle:(id)arg1;
- (void)setRightTitleLabel:(id)arg1;
- (void)setRightTitleLabelBarButtonItem:(id)arg1;
- (void)setShouldShowPlaybackQueue:(bool)arg1;
- (void)setShowNavigationBar:(bool)arg1;
- (void)setTrackBuffering:(bool)arg1;
- (bool)shouldShowPlaybackQueue;
- (bool)showNavigationBar;
- (bool)trackBuffering;
- (void)upNextButtonTapped:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
