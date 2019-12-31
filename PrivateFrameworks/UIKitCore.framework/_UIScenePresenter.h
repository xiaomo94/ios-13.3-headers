/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIScenePresenter : NSObject <BSDescriptionProviding, UIScenePresenter> {
    bool  _enabled;
    bool  _hosting;
    NSString * _identifier;
    BSMonotonicReferenceTime * _initializeTime;
    bool  _invalidated;
    _UIScenePresenterOwner * _owner;
    UIScenePresentationContext * _presentationContext;
    <NSCopying><_UIComparable> * _sortContext;
    _UIScenePresentationView * _view;
    bool  _visibilityPropagationEnabled;
}

@property (nonatomic, retain) BSMonotonicReferenceTime *_initializeTime;
@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isActive, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=isHosting, nonatomic) bool hosting;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly, copy) UIScenePresentationContext *presentationContext;
@property (nonatomic, readonly) UIView<UIScenePresentation> *presentationView;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly, copy) <NSCopying> *sortContext;
@property (readonly) Class superclass;
@property (getter=isVisibilityPropagationEnabled, nonatomic) bool visibilityPropagationEnabled;

- (void).cxx_destruct;
- (id)_initializeTime;
- (void)activate;
- (long long)compare:(id)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithOwner:(id)arg1 identifier:(id)arg2 sortContext:(id)arg3;
- (void)invalidate;
- (bool)isActive;
- (bool)isHosting;
- (bool)isInvalidated;
- (bool)isVisibilityPropagationEnabled;
- (void)modifyPresentationContext:(id /* block */)arg1;
- (id)newSnapshot;
- (id)newSnapshotContext;
- (id)newSnapshotPresentationView;
- (id)presentationContext;
- (id)presentationView;
- (id)scene;
- (void)setEnabled:(bool)arg1;
- (void)setHosting:(bool)arg1;
- (void)setVisibilityPropagationEnabled:(bool)arg1;
- (void)set_initializeTime:(id)arg1;
- (id)sortContext;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
