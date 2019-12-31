/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIScene : UIResponder <FBSSceneDelegate> {
    NSNumber * __cachedInterfaceOrientation;
    UISceneActivationConditions * _activationConditions;
    NSDictionary * _additionalSceneBSActionHandlers;
    NSDictionary * _additionalSettingsDiffActions;
    NSDictionary * _builtinComponents;
    <UISceneDelegate> * _delegate;
    NSArray * _finalSceneBSActionHandlers;
    NSArray * _finalSettingsDiffActions;
    NSArray * _flattenedActionsHandlers;
    NSArray * _flattenedDiffActions;
    NSString * _identifier;
    NSPointerArray * _inheritingScenes;
    NSArray * _initialSceneBSActionHandlers;
    NSArray * _initialSettingsDiffActions;
    _UISceneLifecycleMonitor * _lifecycleMonitor;
    FBSSceneSettings * _oldSettings;
    FBSSceneSettings * _overrideSettings;
    NSMutableDictionary * _postSettingsUpdateResponseBlocks;
    NSDictionary * _registeredComponents;
    bool  _respondingToLifecycleEvent;
    FBSScene * _scene;
    struct { 
        unsigned int delegateIsResponder : 1; 
        unsigned int delegateSupportsWillConnect : 1; 
        unsigned int delegateSupportsDidDisconnect : 1; 
        unsigned int delegateSupportsDidBecomeActive : 1; 
        unsigned int delegateSupportsWillResignActive : 1; 
        unsigned int delegateSupportsWillEnterForeground : 1; 
        unsigned int delegateSupportsDidEnterBackground : 1; 
        unsigned int isUIKitManaged : 1; 
        unsigned int isInternal : 1; 
        unsigned int hostsWindows : 1; 
        unsigned int hasInvalidated : 1; 
        unsigned int allowOverrideSettings : 1; 
        unsigned int isProcessingUpdateResponseBlocks : 1; 
        unsigned int readyForSuspend : 1; 
        unsigned int isMediaParticipant : 1; 
    }  _sceneFlags;
    UISceneSession * _session;
    UIScene * _settingsScene;
    NSString * _title;
}

@property (getter=_FBSScene, nonatomic, readonly) FBSScene *_FBSScene;
@property (setter=_setActivationConditions:, nonatomic, retain) UISceneActivationConditions *_activationConditions;
@property (getter=_isActive, nonatomic, readonly) bool _active;
@property (nonatomic, readonly) NSArray *_allWindows;
@property (getter=_cachedInterfaceOrientation, setter=_setCachedInterfaceOrientation:, nonatomic, retain) NSNumber *_cachedInterfaceOrientation;
@property (nonatomic, readonly) FBSSceneSettings *_effectiveSettings;
@property (nonatomic, readonly) UIApplicationSceneClientSettings *_effectiveUIClientSettings;
@property (nonatomic, readonly) UIApplicationSceneSettings *_effectiveUISettings;
@property (nonatomic, readonly) bool _eligableForSuspend;
@property (nonatomic, readonly) bool _hasInvaidated;
@property (nonatomic, readonly) bool _hasLifecycle;
@property (nonatomic, readonly) bool _hostsWindows;
@property (nonatomic, readonly) NSString *_identifier;
@property (nonatomic, readonly) NSArray *_interitingScenes;
@property (getter=_isInternal, nonatomic, readonly) bool _internal;
@property (setter=_setInvolvedInMediaPlayback:, nonatomic) bool _involvedInMediaPlayback;
@property (getter=_isUIKitManaged, nonatomic, readonly) bool _isUIKitManaged;
@property (nonatomic, readonly) _UISceneLifecycleMonitor *_lifecycleMonitor;
@property (nonatomic, readonly) FBSSceneSettings *_oldSettings;
@property (nonatomic, readonly) bool _readyForSuspend;
@property (setter=_setIsRespondingToLifecycleEvent:, nonatomic) bool _respondingToLifecycleEvent;
@property (getter=_runningInTaskSwitcher, nonatomic, readonly) bool _runningInTaskSwitcher;
@property (nonatomic, readonly) NSArray *_sceneBSActionHandlers;
@property (nonatomic, readonly) NSArray *_sceneComponents;
@property (nonatomic, readonly) NSArray *_settingsDiffActions;
@property (setter=_setSettingsScene:, nonatomic) UIScene *_settingsScene;
@property (getter=_suspendedEventsOnly, nonatomic, readonly) bool _suspendedEventsOnly;
@property (getter=_suspendedUnderLock, nonatomic, readonly) bool _suspendedUnderLock;
@property (nonatomic, readonly) BKSAnimationFenceHandle *_synchronizedDrawingFence;
@property (nonatomic, readonly) FBSSceneSettings *_synthesizedSettings;
@property (nonatomic, readonly) double _systemMinimumMargin;
@property (nonatomic, readonly) NSArray *_visibleWindows;
@property (nonatomic, readonly) NSArray *_windows;
@property (nonatomic, retain) UISceneActivationConditions *activationConditions;
@property (nonatomic, readonly) long long activationState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <UISceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UISceneSession *session;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (long long)_activationStateFromSceneSettings:(id)arg1;
+ (bool)_activeSettingsTransaction;
+ (id)_connectionOptionsForScene:(id)arg1 withSpecification:(id)arg2 transitionContext:(id)arg3 actions:(id)arg4 sceneSession:(id)arg5;
+ (void)_enqueuePostSettingUpdateTransactionBlock:(id /* block */)arg1;
+ (void)_enumerateAllWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2 asCopy:(bool)arg3 withBlock:(id /* block */)arg4;
+ (bool)_hostsWindows;
+ (Class)_implicitSceneFilterClass;
+ (id)_mostActiveScene;
+ (id)_persistenceIdentifierForScene:(id)arg1;
+ (void)_registerSceneComponentClass:(Class)arg1 withKey:(id)arg2 predicate:(id)arg3;
+ (id)_sceneForFBSScene:(id)arg1;
+ (id)_sceneForFBSScene:(id)arg1 create:(bool)arg2 withSession:(id)arg3 connectionOptions:(id)arg4;
+ (id)_sceneForFBSScene:(id)arg1 usingPredicate:(id)arg2;
+ (id)_scenesIncludingInternal:(bool)arg1;
+ (void)_setActiveSettingsTransaction:(bool)arg1;
+ (void)_synchronizeDrawingWithFence:(id)arg1;
+ (id)_synchronizedDrawingFence;
+ (void*)_unsafeScenesIncludingInternal;

- (void).cxx_destruct;
- (id)_FBSScene;
- (void)__captureWindow:(id)arg1;
- (void)__releaseWindow:(id)arg1;
- (id)_activationConditions;
- (void)_addInheritingScene:(id)arg1;
- (id)_allWindows;
- (void)_applyOverrideSettings:(id)arg1 forActions:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForInterfaceOrientation:(long long)arg1;
- (id)_cachedInterfaceOrientation;
- (void)_calculateFlattenedActionsHandlers;
- (void)_calculateFlattenedDiffActions;
- (void)_compatibilityModeZoomDidChange;
- (void)_computeMetrics:(bool)arg1;
- (void)_computeMetricsForWindows:(id)arg1 animated:(bool)arg2;
- (bool)_connected;
- (id)_currentOpenApplicationEndpoint;
- (id)_effectiveSettings;
- (id)_effectiveUIClientSettings;
- (id)_effectiveUISettings;
- (bool)_eligableForSuspend;
- (void)_emitSceneSettingsUpdateResponseForCompletion:(id /* block */)arg1 afterSceneUpdateWork:(id /* block */)arg2;
- (void)_enableOverrideSettingsForActions:(id /* block */)arg1;
- (void)_enqueuePostSettingsUpdateResponseBlock:(id /* block */)arg1 inPhase:(id)arg2;
- (void)_enumerateWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2 asCopy:(bool)arg3 stopped:(bool*)arg4 withBlock:(id /* block */)arg5;
- (id)_fbsSceneLayerForWindow:(id)arg1;
- (id)_fixupInheritedClientSettings:(id)arg1;
- (id)_fixupInheritedSettings:(id)arg1;
- (void)_guardedSetOverrideSettings:(id)arg1;
- (bool)_hasInvaidated;
- (bool)_hasLifecycle;
- (bool)_hostsWindows;
- (id)_identifier;
- (void)_initializeSceneComponents;
- (id)_interitingScenes;
- (void)_invalidate;
- (bool)_involvedInMediaPlayback;
- (bool)_isActive;
- (bool)_isInternal;
- (bool)_isUIKitManaged;
- (id)_lifecycleMonitor;
- (void)_makeKeyAndVisibleIfNeeded;
- (bool)_needsMakeKeyAndVisible;
- (id)_oldSettings;
- (void)_openURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_performSystemSnapshotWithActions:(id /* block */)arg1;
- (void)_prepareForResume;
- (void)_prepareForSuspend;
- (bool)_readyForSuspend;
- (void)_readySceneForConnection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBounds;
- (void)_refreshActivationConditions;
- (void)_registerSceneActionsHandlerArray:(id)arg1 forKey:(id)arg2;
- (void)_registerSceneComponent:(id)arg1 forKey:(id)arg2;
- (void)_registerSettingsDiffActionArray:(id)arg1 forKey:(id)arg2;
- (void)_removeInheritingScene:(id)arg1;
- (bool)_respondingToLifecycleEvent;
- (bool)_runningInTaskSwitcher;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (id)_sceneBSActionHandlers;
- (id)_sceneComponentForKey:(id)arg1;
- (id)_sceneComponents;
- (void)_setActivationConditions:(id)arg1;
- (void)_setCachedInterfaceOrientation:(id)arg1;
- (void)_setInvolvedInMediaPlayback:(bool)arg1;
- (void)_setIsRespondingToLifecycleEvent:(bool)arg1;
- (void)_setSettingsScene:(id)arg1;
- (id)_settingsDiffActions;
- (id)_settingsScene;
- (id)_shortDescription;
- (bool)_shouldAllowFencing;
- (bool)_suspendedEventsOnly;
- (bool)_suspendedUnderLock;
- (void)_synchronizeDrawingWithFence:(id)arg1;
- (id)_synchronizedDrawingFence;
- (id)_synthesizedSettings;
- (double)_systemMinimumMargin;
- (id)_topVisibleWindowPassingTest:(id /* block */)arg1;
- (void)_unregisterSceneActionsHandlerArray:(id)arg1;
- (void)_unregisterSceneComponentForKey:(id)arg1;
- (void)_unregisterSettingsDiffActionArrayForKey:(id)arg1;
- (void)_updateUIClientSettingsWithBlock:(id /* block */)arg1;
- (void)_updateUIClientSettingsWithTransitionBlock:(id /* block */)arg1;
- (void)_updateUIClientSettingsWithUITransitionBlock:(id /* block */)arg1;
- (id)_visibleWindows;
- (bool)_windowIsFront:(id)arg1;
- (id)_windows;
- (id)activationConditions;
- (long long)activationState;
- (id)delegate;
- (id)description;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;
- (id)nextResponder;
- (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2 fromTransitionContext:(id)arg3;
- (void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (id)session;
- (void)setActivationConditions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)avkit_secondScreenScenes;

- (void)_avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;
- (id)avkit_asWindowScene;
- (bool)avkit_isForeground;
- (void)avkit_resetPreferredModeSwitchRequest;
- (bool)avkit_screenHasWindowsExcludingWindow:(id)arg1;
- (long long)avkit_screenType;
- (void)avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2;

@end
