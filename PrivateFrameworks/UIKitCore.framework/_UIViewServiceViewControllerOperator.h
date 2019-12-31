/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIViewServiceViewControllerOperator : UIViewController <_UIFocusMovementActionForwarding, _UIHostedTextServiceSessionDelegate, _UISheetPresentationControllerDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceViewControllerOperator_RemoteViewControllerInterface> {
    bool  __automatic_invalidation_invalidated;
    int  __automatic_invalidation_retainCount;
    id /* block */  __traitsDidChangeHandler;
    id /* block */  __traitsWillChangeHandler;
    bool  _canShowTextServices;
    NSMutableArray * _deferredToViewDidAppear;
    <_UIViewServiceViewControllerOperatorDelegate> * _delegate;
    NSMutableArray * _deputyRotationDelegates;
    bool  _disableAutomaticKeyboardBehavior;
    UIPopoverController * _displayedPopoverController;
    _UIViewServiceDummyPopoverController * _dummyPopoverController;
    long long  _editAlertToken;
    NSUndoManager * _editAlertUndoManager;
    unsigned int  _hostAccessibilityServerPort;
    struct { 
        unsigned int val[8]; 
    }  _hostAuditToken;
    NSString * _hostBundleID;
    int  _hostPID;
    double  _hostStatusBarHeight;
    long long  _hostStatusBarOrientation;
    _UIHostedWindow * _hostedWindow;
    _UIAsyncInvocation * _invalidationInvocation;
    UIViewController * _localViewController;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _localViewControllerRequestedInsets;
    double  _localViewControllerRequestedLeftMargin;
    double  _localViewControllerRequestedRightMargin;
    NSArray * _pluginDisplayConfigurations;
    _UIAsyncInvocation * _prepareForDisconnectionInvocation;
    NSString * _presentationControllerClassName;
    id  _remoteViewControllerProxyToOperator;
    id  _remoteViewControllerProxyToViewController;
    bool  _serviceInPopover;
    unsigned long long  _supportedOrientations;
    _UIHostedTextServiceSession * _textServiceSession;
    _UIViewControllerOneToOneTransitionContext * _viewControllerTransitioningContext;
}

@property (setter=_setTraitsDidChangeHandler:, nonatomic, copy) id /* block */ _traitsDidChangeHandler;
@property (setter=_setTraitsWillChangeHandler:, nonatomic, copy) id /* block */ _traitsWillChangeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIViewServiceViewControllerOperatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)XPCInterface;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostBundleID:(id)arg3 hostAuditToken:(struct { unsigned int x1[8]; })arg4;

- (void).cxx_destruct;
- (int)__automatic_invalidation_logic;
- (void)__cancelAlertActionWithToken:(long long)arg1;
- (void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 hostAccessibilityServerPort:(id)arg3 canShowTextServices:(bool)arg4 replyHandler:(id /* block */)arg5;
- (void)__createViewController:(id)arg1 withContextToken:(id)arg2 fbsDisplays:(id)arg3 appearanceSerializedRepresentations:(id)arg4 traitCollection:(id)arg5 initialInterfaceOrientation:(long long)arg6 hostAccessibilityServerPort:(id)arg7 canShowTextServices:(bool)arg8 replyHandler:(id /* block */)arg9;
- (void)__dimmingViewWasTapped;
- (void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)__hostDidAttachDisplay:(id)arg1;
- (void)__hostDidBecomeActive;
- (void)__hostDidChangeStatusBarHeight:(double)arg1;
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1;
- (void)__hostDidDetachDisplay:(id)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostDidPromoteFirstResponder;
- (void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(bool)arg2;
- (void)__hostDidSetContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3;
- (void)__hostDidSetPresentationControllerClassName:(id)arg1;
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2;
- (void)__hostDidUpdateDisplay:(id)arg1;
- (void)__hostDisablesAutomaticKeyboardBehavior:(bool)arg1;
- (void)__hostReadyToReceiveMessagesFromServiceViewController;
- (void)__hostSceneDidEnterBackground;
- (void)__hostSceneWillEnterForeground;
- (void)__hostViewDidAppear:(bool)arg1;
- (void)__hostViewDidDisappear:(bool)arg1;
- (void)__hostViewDidMoveToScreenWithFBSDisplayIdentity:(id)arg1 newHostingHandleReplyHandler:(id /* block */)arg2;
- (void)__hostViewWillAppear:(bool)arg1 inInterfaceOrientation:(long long)arg2 traitCollection:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)__hostViewWillDisappear:(bool)arg1;
- (void)__hostViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withContextDescription:(id)arg2 boundingPath:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(bool)arg5 fence:(id)arg6 whenDone:(id /* block */)arg7;
- (void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(bool)arg3;
- (void)__hostWillEnterForeground;
- (void)__hostWillResignActive;
- (void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(bool)arg3;
- (void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(bool)arg3 inRemoteViewHierarchy:(bool)arg4;
- (bool)__knownPresentationWithoutPresentationControllerInstance;
- (void)__prepareForDisconnectionWithCompletionHandler:(id /* block */)arg1;
- (void)__redoActionWithToken:(long long)arg1;
- (void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2;
- (void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)__scrollToTopFromTouchAtViewLocation:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id /* block */)arg2;
- (void)__setBoundingPath:(id)arg1;
- (void)__setContentSize:(struct CGSize { double x1; double x2; })arg1 boundingPath:(id)arg2;
- (void)__setContentSize:(struct CGSize { double x1; double x2; })arg1 boundingPath:(id)arg2 withFence:(id)arg3;
- (void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(long long)arg2;
- (void)__setHostTraitCollection:(id)arg1 deferIfAnimated:(bool)arg2;
- (void)__setHostViewUnderlapsStatusBar:(bool)arg1;
- (void)__setServiceInPopover:(bool)arg1;
- (void)__setSheetConfiguration:(id)arg1;
- (void)__showEditAlertView;
- (void)__textServiceDidDismiss;
- (void)__undoActionWithToken:(long long)arg1;
- (id)_appearanceSource;
- (bool)_canShowTextServices;
- (bool)_canShowWhileLocked;
- (double)_canvasSystemMinimumMargin;
- (void)_completeInteractiveSheetTransitionInHost:(bool)arg1 offset:(double)arg2 duration:(double)arg3 timingCurve:(id)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_customBasePresentationInsetsForView:(id)arg1;
- (id)_dataFromPressesEvent:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (bool)_disableAutomaticKeyboardBehavior;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (void)_firstResponderDidChange:(id)arg1;
- (void)_forwardFocusMovementAction:(id)arg1;
- (bool)_forwardPresses:(id)arg1 withEvent:(id)arg2 canceled:(bool)arg3;
- (id)_inputViewsKey;
- (void)_invalidateUnconditionallyThen:(id /* block */)arg1;
- (bool)_isDeallocating;
- (bool)_isHostedRootViewController;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
- (void)_popoverDidDismiss:(id)arg1;
- (void)_popoverWillPresent:(id)arg1;
- (void)_prepareForDisconnectionUnconditionallyThen:(id /* block */)arg1;
- (id)_presentationControllerClassName;
- (bool)_providesCustomBasePresentationInsets;
- (id)_queue;
- (id)_sessionForStateRestoration:(id)arg1;
- (void)_setNeedsUserInterfaceAppearanceUpdate;
- (void)_setTraitsDidChangeHandler:(id /* block */)arg1;
- (void)_setTraitsWillChangeHandler:(id /* block */)arg1;
- (bool)_shouldForwardLegacyRotationOnly;
- (id)_showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 type:(long long)arg3 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 inView:(id)arg5;
- (id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (id)_showServiceForType:(long long)arg1 withContext:(id)arg2;
- (void)_startInteractiveSheetTransitionInHostWithProgress:(double)arg1 offset:(double)arg2;
- (id)_supportedInterfaceOrientationsForViewController:(id)arg1;
- (id /* block */)_traitsDidChangeHandler;
- (id /* block */)_traitsWillChangeHandler;
- (bool)_tryRetain;
- (void)_updateInteractiveSheetTransitionInHostWithProgress:(double)arg1 offset:(double)arg2;
- (void)_updateSupportedInterfaceOrientationsIfNecessary;
- (bool)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char *)arg3;
- (id)_viewControllersForRotationCallbacks;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_viewSafeAreaInsetsFromScene;
- (void)_viewServiceIsDisplayingPopoverController:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willResignContentViewControllerOfPopover:(id)arg1;
- (id)_window;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)_windowDidRegisterScrollToTopView;
- (void)_windowDidUnregisterScrollToTopView;
- (void)addDeputyRotationDelegate:(id)arg1;
- (id)autorelease;
- (bool)becomeFirstResponder;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)delegate;
- (void)dismissHostedTextServiceSession:(id)arg1 animated:(bool)arg2;
- (void)dummyPopoverController:(id)arg1 didChangeContentSize:(struct CGSize { double x1; double x2; })arg2 animated:(bool)arg3;
- (void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(bool)arg2;
- (void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)invalidate;
- (bool)isModalInPresentation;
- (void)loadView;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setDelegate:(id)arg1;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)setNeedsUpdateOfHomeIndicatorAutoHidden;
- (void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
- (void)setNeedsWhitePointAdaptivityStyleUpdate;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1;
- (void)viewDidLoad;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3;

@end
