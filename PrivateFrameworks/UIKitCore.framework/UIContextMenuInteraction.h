/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIContextMenuInteraction : NSObject <UIInteraction, _UIClickPresentationInteractionDelegateInternal, _UIPreviewPlatterPresentationAnimatorDelegate, _UIPreviewPlatterPresentationControllerDelegate> {
    NSMutableDictionary * _configurationsByIdentifier;
    <UIContextMenuInteractionDelegate> * _delegate;
    struct { 
        bool previewForHighlighting; 
        bool previewForDismissing; 
        bool willPerformPreviewActionForMenuWithConfiguration; 
        bool willDisplayMenuForConfiguration; 
        bool willEndForConfiguration; 
        bool styleForMenuWithConfiguration; 
        bool accessoriesForMenuWithConfiguration; 
        bool asyncConfigurationForMenuAtLocation; 
        bool overrideSuggestedActions; 
        bool shouldAllowDragAfterDismiss; 
        bool interactionEffectForTargetedPreview; 
        bool shouldAttemptToPresentConfiguration; 
        bool willCommit; 
        bool willPresent; 
        bool didEnd; 
    }  _delegateImplements;
    _UIContextMenuAnimator * _pendingCommitAnimator;
    UIContextMenuConfiguration * _pendingConfiguration;
    _UIClickPresentationInteraction * _presentationInteraction;
    NSMutableDictionary * _presentationsByIdentifier;
    UITargetedPreview * _stashedPreview;
    UIView * _view;
}

@property (nonatomic) bool allowSimultaneousRecognition;
@property (nonatomic, retain) NSMutableDictionary *configurationsByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <UIContextMenuInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizerForFailureRelationships;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIContextMenuAnimator *pendingCommitAnimator;
@property (nonatomic, retain) UIContextMenuConfiguration *pendingConfiguration;
@property (nonatomic, retain) _UIClickPresentationInteraction *presentationInteraction;
@property (nonatomic, retain) NSMutableDictionary *presentationsByIdentifier;
@property (nonatomic, copy) UITargetedPreview *stashedPreview;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (id)_deferredMenuPlaceholder;

- (void).cxx_destruct;
- (id)_accessoryViewsForPreviewPlatterPresentationController:(id)arg1;
- (unsigned long long)_actualLayoutForPreferredLayout:(unsigned long long)arg1 withConfiguration:(id)arg2;
- (void)_clickPresentationInteraction:(id)arg1 dragSessionDidEndForItems:(id)arg2;
- (id)_clickPresentationInteraction:(id)arg1 interactionEffectForTargetedPreview:(id)arg2;
- (void)_clickPresentationInteraction:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3;
- (id)_clickPresentationInteraction:(id)arg1 previewForCancellingDragItem:(id)arg2;
- (void)_clickPresentationInteraction:(id)arg1 shouldBegin:(id /* block */)arg2;
- (void)_clickPresentationInteractionEnded:(id)arg1 forPresentation:(id)arg2 reason:(unsigned long long)arg3;
- (bool)_clickPresentationInteractionShouldAllowDragAfterDismiss:(id)arg1;
- (bool)_clickPresentationInteractionShouldAllowRapidRestart:(id)arg1;
- (id)_delegate_configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_delegate_contextMenuInteractionWillDisplayForConfiguration:(id)arg1;
- (id)_delegate_contextMenuInteractionWillEndForConfiguration:(id)arg1 presentation:(id)arg2;
- (id)_delegate_previewForDismissingForConfiguration:(id)arg1;
- (id)_delegate_previewForHighlightingForConfiguration:(id)arg1;
- (void)_delegate_tappedPreviewForConfiguration:(id)arg1 withAnimator:(id)arg2;
- (void)_dragMorphDidCompleteForConfiguration:(id)arg1;
- (id)_fulfilledConfigurationForConfiguration:(id)arg1;
- (void)_interactionShouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)_liveDragPreviewForConfiguration:(id)arg1 dragItem:(id)arg2;
- (void)_performCleanupForConfigurationWithIdentifier:(id)arg1;
- (void)_presentMenuAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_previewPlatterPresentationController:(id)arg1 beginDragWithTouch:(id)arg2;
- (void)_previewPlatterPresentationControllerDidBeginPanInteraction:(id)arg1;
- (void)_previewPlatterPresentationControllerDidEndPanInteraction:(id)arg1;
- (void)_previewPlatterPresentationControllerDidTapPreview:(id)arg1;
- (void)_previewPlatterPresentationControllerWantsToBeDismissed:(id)arg1 withReason:(unsigned long long)arg2 alongsideActions:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)_suggestedMenuForConfiguration:(id)arg1;
- (void)_updateVisibleMenuWithBlock:(id /* block */)arg1;
- (id)actualPlatterContainerViewForPresentationController:(id)arg1;
- (bool)allowSimultaneousRecognition;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)configurationsByIdentifier;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (void)dismissMenu;
- (id)gestureRecognizerForFailureRelationships;
- (id)initWithDelegate:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (id)pendingCommitAnimator;
- (id)pendingConfiguration;
- (id)presentationInteraction;
- (id)presentationsByIdentifier;
- (void)setAllowSimultaneousRecognition:(bool)arg1;
- (void)setConfigurationsByIdentifier:(id)arg1;
- (void)setPendingCommitAnimator:(id)arg1;
- (void)setPendingConfiguration:(id)arg1;
- (void)setPresentationInteraction:(id)arg1;
- (void)setPresentationsByIdentifier:(id)arg1;
- (void)setStashedPreview:(id)arg1;
- (id)stashedPreview;
- (id)targetedPreviewForAnimator:(id)arg1 dismissingWithStyle:(unsigned long long)arg2;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
