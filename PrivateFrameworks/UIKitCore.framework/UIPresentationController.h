/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPresentationController : NSObject <UIAppearanceContainer, UIContentContainer, UIFocusEnvironment, UIGestureRecognizerDelegate, UITraitEnvironment, _UIAppearanceContainer, _UIContentContainerInternal, _UIFallbackEnvironment, _UIGeometryChangeObserver, _UITraitEnvironmentInternal> {
    id /* block */  __computeToEndFrameForCurrentTransition;
    id /* block */  __containerSuperviewForCurrentTransition;
    UIView * __currentPresentationSuperview;
    id /* block */  __currentTransitionDidComplete;
    id /* block */  __customFromViewForCurrentTransition;
    id /* block */  __customToViewForCurrentTransition;
    id /* block */  __fromViewForCurrentTransition;
    id /* block */  __toViewForCurrentTransition;
    id /* block */  __transitionViewForCurrentTransition;
    <UIViewControllerTransitionCoordinatorContext> * _adaptiveTransitionContext;
    <UIViewControllerTransitionCoordinator> * _adaptiveTransitionCoordinator;
    UITapGestureRecognizer * _backGestureRecognizer;
    UIBarButtonItem * _barButtonItem;
    bool  _changedPresentingViewControllerDuringAdaptation;
    bool  _containerIgnoresDirectTouchEvents;
    UIView * _containerView;
    <UIViewControllerInteractiveTransitioning> * _currentInteractionController;
    NSUUID * _currentRunningAnimationsUUID;
    <UIViewControllerAnimatedTransitioning> * _currentTransitionController;
    UIView * _customViewForTouchContinuation;
    <UIAdaptivePresentationControllerDelegate> * _delegate;
    SEL  _didEndSelector;
    bool  _didUpdateLayoutForStatusBarAndInterfaceOrientation;
    UITraitCollection * _internalOverrideTraitCollection;
    bool  _isCurrentStateCancelled;
    bool  _isDisconnectedRoot;
    UITraitCollection * _lastNotifiedTraitCollection;
    bool  _monitorsSystemLayoutFittingSize;
    bool  _needsDidAppear;
    bool  _needsDidDisappear;
    UITraitCollection * _overrideTraitCollection;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    UIView * _presentationView;
    UIViewController * _presentedViewController;
    UIViewController * _presentingViewController;
    UIView * _realSourceView;
    bool  _shouldContinueTouchesOnTargetViewController;
    UIView * _snapshotOverlayView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
    long long  _state;
    id  _target;
    bool  _transitionAsDisconnectedRoot;
}

@property (nonatomic, copy) id /* block */ _computeToEndFrameForCurrentTransition;
@property (nonatomic, copy) id /* block */ _containerSuperviewForCurrentTransition;
@property (getter=_currentPresentationSuperview, setter=_setCurrentPresentationSuperview:, nonatomic) UIView *_currentPresentationSuperview;
@property (nonatomic, copy) id /* block */ _currentTransitionDidComplete;
@property (nonatomic, copy) id /* block */ _customFromViewForCurrentTransition;
@property (nonatomic, copy) id /* block */ _customToViewForCurrentTransition;
@property (nonatomic, copy) id /* block */ _fromViewForCurrentTransition;
@property (nonatomic, readonly) bool _isPresentedInFullScreen;
@property (nonatomic, readonly) bool _mayChildGrabPresentedViewControllerView;
@property (nonatomic, readonly) <_UITraitEnvironmentInternal> *_parentTraitEnvironment;
@property (getter=_preferredContentSize, setter=_setPreferredContentSize:, nonatomic) struct CGSize { double x1; double x2; } _preferredContentSize;
@property (nonatomic, copy) id /* block */ _toViewForCurrentTransition;
@property (nonatomic, copy) id /* block */ _transitionViewForCurrentTransition;
@property (nonatomic, readonly) long long adaptivePresentationStyle;
@property (getter=_adaptiveTransitionContext, setter=_setAdaptiveTransitionContext:, nonatomic, retain) <UIViewControllerTransitionCoordinatorContext> *adaptiveTransitionContext;
@property (getter=_adaptiveTransitionCoordinator, setter=_setAdaptiveTransitionCoordinator:, nonatomic, retain) <UIViewControllerTransitionCoordinator> *adaptiveTransitionCoordinator;
@property (nonatomic, retain) UIBarButtonItem *barButtonItem;
@property (getter=_changedPresentingViewControllerDuringAdaptation, setter=_setChangedPresentingViewControllerDuringAdaptation:, nonatomic) bool changedPresentingViewControllerDuringAdaptation;
@property (getter=_containerIgnoresDirectTouchEvents, setter=_setContainerIgnoresDirectTouchEvents:, nonatomic) bool containerIgnoresDirectTouchEvents;
@property (setter=_setContainerView:, nonatomic, retain) UIView *containerView;
@property (getter=_currentInteractionController, setter=_setCurrentInteractionController:, nonatomic, retain) <UIViewControllerInteractiveTransitioning> *currentInteractionController;
@property (getter=_currentTransitionController, setter=_setCurrentTransitionController:, nonatomic, retain) <UIViewControllerAnimatedTransitioning> *currentTransitionController;
@property (getter=_customViewForTouchContinuation, setter=_setCustomViewForTouchContinuation:, nonatomic, retain) UIView *customViewForTouchContinuation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIAdaptivePresentationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameOfPresentedViewInContainerView;
@property (readonly) unsigned long long hash;
@property (getter=_internalOverrideTraitCollection, setter=_setInternalOverrideTraitCollection:, nonatomic, copy) UITraitCollection *internalOverrideTraitCollection;
@property (nonatomic) bool isCurrentStateCancelled;
@property (nonatomic, copy) UITraitCollection *overrideTraitCollection;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic, readonly) long long presentationStyle;
@property (getter=_presentationView, setter=_setPresentationView:, nonatomic, retain) UIView *presentationView;
@property (nonatomic, readonly) NCNotificationViewController *presentedNotificationViewController;
@property (nonatomic, readonly) UIView *presentedView;
@property (setter=_setPresentedViewController:, nonatomic, retain) UIViewController *presentedViewController;
@property (setter=_setPresentingViewController:, nonatomic, retain) UIViewController *presentingViewController;
@property (getter=_realSourceView, nonatomic, readonly) UIView *realSourceView;
@property (getter=_shouldContinueTouchesOnTargetViewController, setter=_setShouldContinueTouchesOnTargetViewController:, nonatomic) bool shouldContinueTouchesOnTargetViewController;
@property (nonatomic, readonly) bool shouldPresentInFullscreen;
@property (nonatomic, readonly) bool shouldRemovePresentersView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_allowsDeferredTransitions;
+ (bool)_preventsAppearanceProxyCustomization;
+ (void)_scheduleTransition:(id /* block */)arg1;
+ (bool)_shouldDeferTransitions;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_statusBarOverlapAndMarginInfoForView:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (struct { long long x1; long long x2; })__sizeClassPair;
- (id)_activePresentationController;
- (id)_adaptiveTransitionContext;
- (id)_adaptiveTransitionCoordinator;
- (id)_adaptiveWillTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_additionalSafeAreaInsets;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (id)_animatorForContainmentTransition;
- (id)_appearanceContainer;
- (Class)_appearanceGuideClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_baseContentInsetsWithLeftMargin:(double*)arg1 rightMargin:(double*)arg2;
- (void)_beginOcclusionIfNecessary:(bool)arg1;
- (bool)_changedPresentingViewControllerDuringAdaptation;
- (id)_childPresentationController;
- (void)_cleanup;
- (id /* block */)_computeToEndFrameForCurrentTransition;
- (void)_containedViewControllerModalStateChanged;
- (bool)_containerIgnoresDirectTouchEvents;
- (id /* block */)_containerSuperviewForCurrentTransition;
- (void)_containerViewBoundsDidChange;
- (void)_containerViewLayoutSubviews;
- (void)_containerViewSafeAreaInsetsDidChange;
- (void)_containerViewTraitCollectionDidChange;
- (void)_containerViewWillLayoutSubviews;
- (void)_coverWithSnapshot;
- (id)_currentContextPresentationSuperview;
- (id)_currentInteractionController;
- (id)_currentPresentationSuperview;
- (id)_currentTransitionController;
- (id /* block */)_currentTransitionDidComplete;
- (id /* block */)_customFromViewForCurrentTransition;
- (id /* block */)_customToViewForCurrentTransition;
- (id)_customViewForTouchContinuation;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (id)_descriptionForPrintingViewControllerHierarchy;
- (void)_disableMenuPressForBackGesture;
- (void)_dismissWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (void)_enableOcclusion:(bool)arg1;
- (bool)_fallbackShouldDismiss;
- (id)_fallbackTraitCollection;
- (id)_firstCurrentContextChildInWindow;
- (id)_focusMapContainer;
- (bool)_forcesPreferredAnimationControllers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForChildContentContainer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfPresentedViewControllerViewInSuperview;
- (id /* block */)_fromViewForCurrentTransition;
- (id)_fullscreenPresentationSuperview;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)_gestureRecognizerShouldBegin:(id)arg1;
- (bool)_inheritsPresentingViewControllerThemeLevel;
- (void)_initViewHierarchyForPresentationSuperview:(id)arg1;
- (id)_initialPresentationViewControllerForViewController:(id)arg1;
- (id)_internalOverrideTraitCollection;
- (bool)_isAdapted;
- (bool)_isModal;
- (bool)_isPresentedInFullScreen;
- (bool)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (bool)_mayChildGrabPresentedViewControllerView;
- (bool)_monitorsSystemLayoutFittingSize;
- (void)_parent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (id)_parentPresentationController;
- (id)_parentPresentationControllerImmediate:(bool)arg1;
- (id)_parentTraitCollection;
- (id)_parentTraitEnvironment;
- (id)_passthroughViews;
- (void)_performBackGesture:(id)arg1;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (struct CGSize { double x1; double x2; })_preferredContentSize;
- (id)_preferredInteractionControllerForDismissal:(id)arg1;
- (id)_preferredInteractionControllerForPresentation:(id)arg1;
- (void)_prepareForWindowDeallocRecursively:(bool)arg1;
- (void)_presentWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (bool)_presentationPotentiallyUnderlapsStatusBar;
- (id)_presentationView;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (bool)_preserveResponderAcrossWindows;
- (id)_realSourceView;
- (void)_realSourceViewDidChangeFromView:(id)arg1 toView:(id)arg2;
- (void)_realSourceViewGeometryDidChange;
- (void)_releaseSnapshot;
- (id)_rootPresentingViewControllerForNestedPresentation;
- (void)_sendDelegateWillPresentWithAdaptiveStyle:(long long)arg1 transitionCoordinator:(id)arg2;
- (void)_sendDidAttemptToDismiss;
- (void)_sendDidDismiss;
- (void)_sendFallbackDidDismiss;
- (void)_sendFallbackWillDismiss;
- (void)_sendPresentationControllerNotification:(id)arg1 userInfo:(id)arg2;
- (void)_sendWillDismiss;
- (void)_setAdaptiveTransitionContext:(id)arg1;
- (void)_setAdaptiveTransitionCoordinator:(id)arg1;
- (void)_setChangedPresentingViewControllerDuringAdaptation:(bool)arg1;
- (void)_setContainerIgnoresDirectTouchEvents:(bool)arg1;
- (void)_setContainerView:(id)arg1;
- (void)_setCurrentInteractionController:(id)arg1;
- (void)_setCurrentPresentationSuperview:(id)arg1;
- (void)_setCurrentTransitionController:(id)arg1;
- (void)_setCustomViewForTouchContinuation:(id)arg1;
- (void)_setInternalOverrideTraitCollection:(id)arg1;
- (void)_setOverrideTraitCollection:(id)arg1 updatingPresentedViewControllerImmediately:(bool)arg2;
- (void)_setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setPresentationView:(id)arg1;
- (void)_setPresentedViewController:(id)arg1;
- (void)_setPresentingViewController:(id)arg1;
- (void)_setRealSourceView:(id)arg1;
- (void)_setShouldContinueTouchesOnTargetViewController:(bool)arg1;
- (bool)_shouldAdaptFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (bool)_shouldContinueTouchesOnTargetViewController;
- (bool)_shouldDisableInteractionDuringTransitions;
- (bool)_shouldDisablePresentersAppearanceCallbacks;
- (bool)_shouldDismiss;
- (bool)_shouldGrabPresentersView;
- (bool)_shouldKeepCurrentFirstResponder;
- (bool)_shouldMakePresentedViewControllerFirstResponder;
- (bool)_shouldOccludeDuringPresentation;
- (bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (bool)_shouldPreserveFirstResponder;
- (bool)_shouldRespectDefinesPresentationContext;
- (bool)_shouldRestoreFirstResponder;
- (bool)_shouldSavePresentedViewControllerForStateRestoration;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 childViewController:(id)arg2;
- (id /* block */)_toViewForCurrentTransition;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionToWillBegin;
- (id /* block */)_transitionViewForCurrentTransition;
- (bool)_transitioningFrom;
- (bool)_transitioningTo;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_updateRealSourceView;
- (void)_updateTraitsIfNecessary;
- (id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
- (id)_viewsParticipatingInNavigationControllerTransition;
- (void)_willRunTransitionForCurrentStateDeferred:(bool)arg1;
- (void)_window:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (long long)adaptivePresentationStyle;
- (long long)adaptivePresentationStyleForTraitCollection:(id)arg1;
- (id)barButtonItem;
- (void)completeCurrentTransitionImmediately;
- (id)containerView;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (bool)dismissed;
- (bool)dismissing;
- (id)focusItemContainer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)init;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (bool)isCurrentStateCancelled;
- (id)overrideTraitCollection;
- (id)parentFocusEnvironment;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (long long)presentationStyle;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (bool)presented;
- (id)presentedContentContainer;
- (id)presentedView;
- (id)presentedViewController;
- (bool)presenting;
- (id)presentingViewController;
- (void)runTransitionForCurrentState;
- (void)setBarButtonItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsCurrentStateCancelled:(bool)arg1;
- (void)setNeedsFocusUpdate;
- (void)setOverrideTraitCollection:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setState:(long long)arg1;
- (void)set_computeToEndFrameForCurrentTransition:(id /* block */)arg1;
- (void)set_containerSuperviewForCurrentTransition:(id /* block */)arg1;
- (void)set_currentTransitionDidComplete:(id /* block */)arg1;
- (void)set_customFromViewForCurrentTransition:(id /* block */)arg1;
- (void)set_customToViewForCurrentTransition:(id /* block */)arg1;
- (void)set_fromViewForCurrentTransition:(id /* block */)arg1;
- (void)set_toViewForCurrentTransition:(id /* block */)arg1;
- (void)set_transitionViewForCurrentTransition:(id /* block */)arg1;
- (bool)shouldPresentInFullscreen;
- (bool)shouldRemovePresentersView;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (long long)state;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transitionDidFinish:(bool)arg1;
- (void)transitionDidStart;
- (void)updateFocusIfNeeded;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

+ (id)ts_dismissalTransitionDidEndNotification;
+ (id)ts_presentationTransitionDidEndNotification;

- (void)ts_containerIgnoresDirectTouchEvents:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

- (id)presentedNotificationViewController;

@end
