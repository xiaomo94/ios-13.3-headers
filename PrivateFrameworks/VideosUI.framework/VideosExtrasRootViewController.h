/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosExtrasRootViewController : UIViewController <IKAppContextDelegate, IKAppDeviceConfig, IKApplication, MPVideoOverlayDelegate, UICollectionViewDelegate, UINavigationControllerDelegate> {
    IKAppContext * _applicationContext;
    VideosExtrasArtworkDataSource * _artworkDataSource;
    UIButton * _backButton;
    NSLayoutConstraint * _bottomConstraint;
    VideosExtrasContext * _context;
    <VideosExtrasRootViewControllerDelegate> * _delegate;
    bool  _didAttemptRestartAfterAppContextFailure;
    UIView * _extrasMenuBarView;
    UIStackView * _extrasMenuButtonsStackView;
    NSLayoutConstraint * _extrasScrollViewLeadingConstraint;
    VideosExtrasFeatureContainerViewController * _featureContainer;
    NSObject<OS_dispatch_queue> * _imageRequestQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  _initialPresentationSize;
    NSArray * _lastSelectedSnapshotViewControllers;
    <IKAppDataStoring> * _localStorage;
    VideosExtrasMainTemplateViewController * _mainTemplateViewController;
    VideosExtrasNavigationController * _navigationController;
    bool  _showsBuiltInNavigationControls;
    bool  _showsMenuBar;
    <IKAppUserDefaultsStoring> * _userDefaultsStorage;
    <IKAppDataStoring> * _vendorStorage;
}

@property (nonatomic, retain) IKAppContext *applicationContext;
@property (nonatomic, retain) VideosExtrasArtworkDataSource *artworkDataSource;
@property (nonatomic, retain) UIButton *backButton;
@property (nonatomic, readonly) VideosExtrasContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VideosExtrasRootViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *extrasMenuBarView;
@property (nonatomic, retain) UIStackView *extrasMenuButtonsStackView;
@property (nonatomic, retain) NSLayoutConstraint *extrasScrollViewLeadingConstraint;
@property (nonatomic, retain) VideosExtrasFeatureContainerViewController *featureContainer;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } initialPresentationSize;
@property (nonatomic, retain) NSArray *lastSelectedSnapshotViewControllers;
@property (nonatomic, retain) <IKAppDataStoring> *localStorage;
@property (nonatomic, readonly) UIView *mainMenuBar;
@property (nonatomic, readonly) NSArray *mainMenuItemElements;
@property (nonatomic, retain) VideosExtrasMainTemplateViewController *mainTemplateViewController;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, copy) UITraitCollection *overrideTraitCollection;
@property (nonatomic) bool showsBuiltInNavigationControls;
@property (nonatomic) bool showsMenuBar;
@property (readonly) Class superclass;
@property (nonatomic, retain) <IKAppUserDefaultsStoring> *userDefaultsStorage;
@property (nonatomic, retain) <IKAppDataStoring> *vendorStorage;

+ (id)currentController;

- (void).cxx_destruct;
- (void)_adjustExtrasVisibilityForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_areExtrasVisible;
- (void)_attemptRestart;
- (void)_backButtonPressed:(id)arg1;
- (id)_createDataStorageForIdentifier:(id)arg1;
- (id)_extrasMenuBarViewForElements:(id)arg1;
- (void)_extrasMenuItemSelected:(id)arg1;
- (void)_playbackWillEndNotification:(id)arg1;
- (bool)_setMainDocumentWithViewController:(id)arg1;
- (void)_setNavigationController:(id)arg1;
- (void)_setUpForApplication;
- (void)_showExtrasBar:(bool)arg1;
- (void)_stopOldContextIfNeeded;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (id)appIdentifier;
- (bool)appIsTrusted;
- (id)appJSURL;
- (id)appLaunchParams;
- (bool)appUsesDefaultStyleSheets;
- (id)applicationContext;
- (id)artworkDataSource;
- (id)backButton;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)detectMainDocument:(id)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (id)extrasMenuBarView;
- (id)extrasMenuButtonsStackView;
- (id)extrasScrollViewLeadingConstraint;
- (id)featureContainer;
- (id)initWithContext:(id)arg1;
- (struct CGSize { double x1; double x2; })initialPresentationSize;
- (bool)isTimeZoneSet;
- (id)lastSelectedSnapshotViewControllers;
- (id)localStorage;
- (id)mainMenuBar;
- (id)mainMenuItemElements;
- (id)mainTemplateViewController;
- (id)navigationController;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationControllerForContext:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (void)popToFeatureOrMain;
- (unsigned long long)preferredVideoFormat;
- (unsigned long long)preferredVideoPreviewFormat;
- (bool)prefersStatusBarHidden;
- (struct CGSize { double x1; double x2; })screenSize;
- (void)setApplicationContext:(id)arg1;
- (void)setArtworkDataSource:(id)arg1;
- (void)setBackButton:(id)arg1;
- (void)setClearsStackOnNextPush;
- (void)setDelegate:(id)arg1;
- (void)setExtrasMenuBarView:(id)arg1;
- (void)setExtrasMenuButtonsStackView:(id)arg1;
- (void)setExtrasScrollViewLeadingConstraint:(id)arg1;
- (void)setFeatureContainer:(id)arg1;
- (void)setInitialPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLastSelectedSnapshotViewControllers:(id)arg1;
- (void)setLocalStorage:(id)arg1;
- (void)setMainTemplateViewController:(id)arg1;
- (void)setShowsBuiltInNavigationControls:(bool)arg1;
- (void)setShowsMenuBar:(bool)arg1;
- (void)setUserDefaultsStorage:(id)arg1;
- (void)setVendorStorage:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldExtrasBeVisibleForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldIgnoreJSValidation;
- (void)showExtrasMenuBarInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)showsBuiltInNavigationControls;
- (bool)showsMenuBar;
- (void)start;
- (id)storeFrontCountryCode;
- (unsigned long long)supportedInterfaceOrientations;
- (id)systemLanguage;
- (id)timeZone;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMenuButtonForSelectionAtIndex:(unsigned long long)arg1 deselectedIndex:(unsigned long long)arg2;
- (id)userDefaultsStorage;
- (id)vendorIdentifier;
- (id)vendorStorage;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewElementRegistry;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
