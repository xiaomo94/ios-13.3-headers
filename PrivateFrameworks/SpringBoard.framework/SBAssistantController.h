/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAssistantController : NSObject <CSCoverSheetOverlaying, CSExternalBehaviorProviding, PTSettingsKeyObserver, SBFAuthenticationResponder, SBFIdleTimerBehaviorProviding, SBFluidGestureDismissable, SBHomeGestureParticipantDelegate, SBIdleTimerProviding, SiriPresentationSpringBoardMainScreenViewControllerDelegate> {
    NSString * _appDisplayIDBeingHosted;
    SBAssistantWindow * _assistantWindow;
    NSSet * _audioCategoriesDisablingVolumeHUD;
    <BSInvalidatable> * _deferOrientationUpdatesAssertion;
    SBFAuthenticationAssertion * _disableAssertion;
    bool  _dismissing;
    SBFluidDismissalState * _fluidDismissalState;
    <BSInvalidatable> * _hideApplicationModalAlertsAssertion;
    SBHomeGestureParticipant * _homeGestureParticipant;
    <SBIdleTimer> * _idleTimer;
    <SBIdleTimerCoordinating> * _idleTimerCoordinator;
    bool  _isHidingOtherWindows;
    FBDisplayLayoutElement * _mainDisplayLayoutElement;
    SiriPresentationSpringBoardMainScreenViewController * _mainScreenSiriPresentation;
    NSHashTable * _observers;
    BSEventQueue * _operationQueue;
    SiriPresentationSpringBoardMainScreenViewController * _presentedMainScreenSiriPresentation;
    UIApplicationSceneDeactivationAssertion * _resignActiveAssertion;
    SBSystemAnimationSettings * _settings;
    <BSInvalidatable> * _suspendWallpaperAnimationAssertion;
    bool  _unlockedDevice;
    bool  _visible;
    NSMutableArray * _windowLevelAssertions;
}

@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, retain) SBFluidDismissalState *fluidDismissalState;
@property (readonly) unsigned long long hash;
@property (getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:, nonatomic) <SBIdleTimerCoordinating> *idleTimerCoordinator;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (readonly) Class superclass;
@property (nonatomic, retain) <BSInvalidatable> *suspendWallpaperAnimationAssertion;
@property (nonatomic, readonly) bool unlockedDevice;
@property (getter=isVisible, nonatomic, readonly) bool visible;

+ (void)bootstrapServices;
+ (bool)isVisible;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (bool)shouldBreadcrumbLaunchedApplicationWithBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_activationSettingsWithPunchoutStyle:(long long)arg1;
- (void)_bioAuthenticated:(id)arg1;
- (void)_createAssistantWindowIfNecessary;
- (double)_defaultAnimatedDismissDurationForMainScreen;
- (void)_deviceBlocked:(id)arg1;
- (void)_dismissForMainScreenWithFactory:(id)arg1 completion:(id /* block */)arg2;
- (id)_idleTimerBehavior;
- (id)_idleTimerCoordinator;
- (id)_init;
- (void)_noteDeviceLockedOrBlocked;
- (void)_presentForMainScreenAnimated:(bool)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)_prototypeSettingsChanged;
- (void)_remoteLocked:(id)arg1;
- (void)_restoreOrientation;
- (void)_setIdleTimerCoordinator:(id)arg1;
- (void)_setStatusBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)_setUnlockedDevice:(bool)arg1;
- (void)_setVisible:(bool)arg1;
- (void)_toggleModalAlertHidingAssertion:(bool)arg1;
- (void)_uiLocked:(id)arg1;
- (void)_updateOrientationLock;
- (void)_updateRootViewControllerOwnsHomeGesture;
- (void)_updateSceneClientSettings;
- (void)_updateWindowLevel;
- (void)_viewDidAppearOnMainScreen:(bool)arg1;
- (void)_viewDidDisappearOnMainScreen:(bool)arg1;
- (void)_viewWillAppearOnMainScreen:(bool)arg1;
- (void)_viewWillDisappearOnMainScreen:(bool)arg1;
- (id)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3;
- (id)activationSettings;
- (void)addObserver:(id)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)coverSheetIdentifier;
- (void)dealloc;
- (void)deviceUnlockRequestedWithPassword:(id)arg1;
- (void)dismissAssistantViewIfNecessary;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 completion:(id /* block */)arg2;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 factory:(id)arg2 completion:(id /* block */)arg3;
- (void)dismissOverlayForDashBoardAnimated:(bool)arg1;
- (id)fluidDismissalState;
- (void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2;
- (void)handleInvalidAuthenticationRequest:(id)arg1;
- (void)handleSuccessfulAuthenticationRequest:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (long long)idleTimerDuration;
- (long long)idleTimerMode;
- (long long)idleWarnMode;
- (id)init;
- (bool)isEnabled;
- (bool)isVisible;
- (id)mainScreenView;
- (long long)notificationBehavior;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)overrideInterfaceOrientation:(long long*)arg1;
- (long long)participantState;
- (long long)proximityDetectionMode;
- (void)removeObserver:(id)arg1;
- (bool)requestPasscodeUnlockWithCompletion:(id /* block */)arg1;
- (unsigned long long)restrictedCapabilities;
- (void)screenWakeIdleTimerResetRequested;
- (void)screenWakeRequested;
- (long long)scrollingStrategy;
- (void)setFluidDismissalState:(id)arg1;
- (void)setSuspendWallpaperAnimationAssertion:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldShowLockStatusBarTime;
- (bool)shouldShowSystemVolumeHUDForCategory:(id)arg1;
- (void)siriPresentation:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2;
- (void)siriPresentation:(id)arg1 isEnabledDidChange:(bool)arg2;
- (bool)siriPresentation:(id)arg1 requestsDeviceUnlockWithPassword:(id)arg2;
- (void)siriPresentation:(id)arg1 requestsDismissalWithOptions:(id)arg2 withHandler:(id /* block */)arg3;
- (void)siriPresentation:(id)arg1 requestsPresentationWithOptions:(id)arg2 withHandler:(id /* block */)arg3;
- (void)siriPresentation:(id)arg1 requestsPunchout:(id)arg2 withHandler:(id /* block */)arg3;
- (id)suspendWallpaperAnimationAssertion;
- (bool)unlockedDevice;
- (id)window;

@end
