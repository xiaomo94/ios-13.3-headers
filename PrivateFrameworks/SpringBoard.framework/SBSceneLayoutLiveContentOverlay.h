/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBSceneLayoutLiveContentOverlay : NSObject <SBSwitcherLiveContentOverlay> {
    bool  _asynchronousRenderingTemporarilyDisabled;
    long long  _containerOrientation;
    SBFHomeGrabberSettings * _grabberSettings;
    long long  _rasterizationStyle;
    SBOrientationTransformWrapperView * _sceneLayoutOrientationWrapperView;
    SBMainDisplaySceneLayoutViewController * _sceneLayoutViewController;
    SBWindowSelfHostWrapper * _sceneLayoutWindowHostWrapper;
    NSMutableDictionary * _statusBarAssertions;
    bool  _wantsMinificationFilter;
}

@property (nonatomic, readonly) bool asynchronousRenderingTemporarilyDisabled;
@property (nonatomic) long long containerOrientation;
@property (nonatomic, readonly) UIView *contentOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBFHomeGrabberSettings *grabberSettings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long rasterizationStyle;
@property (nonatomic, readonly) SBOrientationTransformWrapperView *sceneLayoutOrientationWrapperView;
@property (nonatomic, readonly) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (nonatomic, readonly) SBWindowSelfHostWrapper *sceneLayoutWindowHostWrapper;
@property (nonatomic, retain) NSMutableDictionary *statusBarAssertions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsMinificationFilter;

- (void).cxx_destruct;
- (void)_evaluateAsynchronousRenderingEnablement;
- (bool)asynchronousRenderingTemporarilyDisabled;
- (long long)containerOrientation;
- (id)contentOverlayView;
- (void)dealloc;
- (void)disableAsynchronousRenderingForNextCommit;
- (id)grabberSettings;
- (id)initWithSceneLayoutViewController:(id)arg1;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (long long)rasterizationStyle;
- (id)sceneLayoutOrientationWrapperView;
- (id)sceneLayoutViewController;
- (id)sceneLayoutWindowHostWrapper;
- (void)setContainerOrientation:(long long)arg1;
- (void)setHomeGrabberHidden:(bool)arg1 animated:(bool)arg2;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(bool)arg2;
- (void)setStatusBarAssertions:(id)arg1;
- (void)setStatusBarHidden:(bool)arg1 nubViewHidden:(bool)arg2 animator:(id /* block */)arg3;
- (void)setUsesBrightSceneViewBackgroundMaterial:(bool)arg1;
- (id)statusBarAssertions;
- (bool)wantsMinificationFilter;

@end
