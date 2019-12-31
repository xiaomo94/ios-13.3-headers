/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarAttributeEditorViewController : UIViewController <AVTAttributeEditorSectionHeaderViewDelegate, AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTCollapsibleHeaderControllerDelegate, AVTFaceTrackingManagerDelegate, AVTGroupDialDelegate, AVTNotifyingContainerViewDelegate, AVTTransitionModel, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout> {
    bool  _allowFacetracking;
    UILabel * _alphaAssetsLabel;
    AVTAttributeEditorAnimationCoordinator * _animationCoordinator;
    UICollectionView * _attributesCollectionView;
    AVTViewSession * _avtViewSession;
    AVTViewSessionProvider * _avtViewSessionProvider;
    AVTViewThrottler * _avtViewThrottler;
    AVTCollapsibleHeaderController * _collapsibleHeaderController;
    bool  _collectionViewIsPerformingBatchUpdates;
    <AVTAvatarAttributeEditorLayout> * _currentLayout;
    AVTTransition * _currentTransition;
    AVTAvatarAttributeEditorDataSource * _dataSource;
    <AVTAvatarAttributeEditorViewControllerDelegate> * _delegate;
    bool  _disableAvatarSnapshotting;
    AVTUIEnvironment * _environment;
    AVTGroupDial * _groupDial;
    UIView * _groupDialContainerView;
    bool  _hasMadeAnySelection;
    UIView * _headerMaskingView;
    _AVTAvatarRecordImageProvider * _headerPreviewImageRenderer;
    <AVTTaskScheduler> * _headerPreviewScheduler;
    <AVTTaskScheduler> * _imageProviderScheduler;
    bool  _isAnimatingHighlight;
    bool  _isCreating;
    NSDate * _lastPosedAvatarImageRenderingTime;
    AVTAvatarAttributeEditorModelManager * _modelManager;
    id /* block */  _pendingCollectionViewReloadDataBlock;
    id /* block */  _pendingUnhighlightBlock;
    id /* block */  _postSessionDidBecomeActiveHandler;
    AVTShadowView * _shadowView;
    UITapGestureRecognizer * _tapGestureRecognizer;
    AVTImageTransitioningContainerView * _transitioningContainer;
    CALayer * _verticleRule;
    UIView * _verticleRuleContainer;
}

@property (nonatomic) bool allowFacetracking;
@property (nonatomic, retain) UILabel *alphaAssetsLabel;
@property (nonatomic, retain) AVTAttributeEditorAnimationCoordinator *animationCoordinator;
@property (nonatomic, retain) UICollectionView *attributesCollectionView;
@property (nonatomic, readonly) AVTMemoji *avatar;
@property (nonatomic, readonly) AVTAvatarRecord *avatarRecord;
@property (nonatomic, retain) AVTViewSession *avtViewSession;
@property (nonatomic, readonly) AVTViewSessionProvider *avtViewSessionProvider;
@property (nonatomic, retain) AVTViewThrottler *avtViewThrottler;
@property (nonatomic, retain) AVTCollapsibleHeaderController *collapsibleHeaderController;
@property (nonatomic) bool collectionViewIsPerformingBatchUpdates;
@property (nonatomic, retain) <AVTAvatarAttributeEditorLayout> *currentLayout;
@property (nonatomic, retain) AVTTransition *currentTransition;
@property (nonatomic, retain) AVTAvatarAttributeEditorDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTAvatarAttributeEditorViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAvatarSnapshotting;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, retain) AVTGroupDial *groupDial;
@property (nonatomic, retain) UIView *groupDialContainerView;
@property (nonatomic) bool hasMadeAnySelection;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *headerMaskingView;
@property (nonatomic, retain) _AVTAvatarRecordImageProvider *headerPreviewImageRenderer;
@property (nonatomic, readonly) <AVTTaskScheduler> *headerPreviewScheduler;
@property (nonatomic, readonly) <AVTTaskScheduler> *imageProviderScheduler;
@property (nonatomic) bool isAnimatingHighlight;
@property (nonatomic, readonly) bool isCreating;
@property (nonatomic, retain) NSDate *lastPosedAvatarImageRenderingTime;
@property (nonatomic, readonly) AVTAvatarAttributeEditorModelManager *modelManager;
@property (nonatomic, copy) id /* block */ pendingCollectionViewReloadDataBlock;
@property (nonatomic, copy) id /* block */ pendingUnhighlightBlock;
@property (nonatomic, copy) id /* block */ postSessionDidBecomeActiveHandler;
@property (nonatomic, retain) AVTShadowView *shadowView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, retain) AVTImageTransitioningContainerView *transitioningContainer;
@property (nonatomic, retain) CALayer *verticleRule;
@property (nonatomic, retain) UIView *verticleRuleContainer;

+ (id)attributeRowIdentifier;
+ (id)colorRowIdentifier;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })adjustedSafeAreaInsets;
- (bool)allowFacetracking;
- (id)alphaAssetsLabel;
- (id)animationCoordinator;
- (void)applyBaseAlpha;
- (void)applyFullAlpha;
- (void)applyLayout:(id)arg1;
- (void)applyLayout:(id)arg1 layoutAvatarView:(bool)arg2;
- (void)attributeEditorSectionController:(id)arg1 didSelectSectionItem:(id)arg2;
- (void)attributeEditorSectionController:(id)arg1 didUpdateSectionItem:(id)arg2;
- (void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)arg1;
- (id)attributesCollectionView;
- (id)avatar;
- (id)avatarRecord;
- (id)avtViewSession;
- (id)avtViewSessionProvider;
- (id)avtViewThrottler;
- (void)beginAVTViewSessionWithDidBeginBlock:(id /* block */)arg1;
- (id)collapsibleHeaderController;
- (void)collapsibleHeaderController:(id)arg1 willUpdateHeaderToHeight:(double)arg2;
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (bool)collectionViewIsPerformingBatchUpdates;
- (void)configureAVTViewFromSession:(id)arg1;
- (void)configurePPTMemoji:(id /* block */)arg1;
- (void)configureThrottlerForAVTView:(id)arg1;
- (void)configureUserInfoLabel;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)createAlphaAssetsLabel;
- (void)createVerticleRuleIfNeeded;
- (id)currentLayout;
- (id)currentTransition;
- (id)dataSource;
- (id)delegate;
- (void)didTapAvatarView:(id)arg1;
- (bool)disableAvatarSnapshotting;
- (id)environment;
- (id)groupDial;
- (void)groupDial:(id)arg1 didDeselectGroupAtIndex:(long long)arg2;
- (void)groupDial:(id)arg1 didSelectGroupAtIndex:(long long)arg2 tapped:(bool)arg3;
- (id)groupDialContainerView;
- (bool)hasMadeAnySelection;
- (id)headerMaskingView;
- (id)headerPreviewImageRenderer;
- (id)headerPreviewScheduler;
- (id)imageProviderScheduler;
- (id)init;
- (id)initWithAvatarRecord:(id)arg1 avtViewSessionProvider:(id)arg2 environment:(id)arg3 isCreating:(bool)arg4;
- (long long)interfaceOrientationForFaceTrackingManager:(id)arg1;
- (bool)isAnimatingHighlight;
- (bool)isCreating;
- (id)lastPosedAvatarImageRenderingTime;
- (id)liveView;
- (void)loadView;
- (id)modelManager;
- (void)notifyingContainerViewDidChangeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)notifyingContainerViewWillChangeSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id /* block */)pendingCollectionViewReloadDataBlock;
- (id /* block */)pendingUnhighlightBlock;
- (id /* block */)postSessionDidBecomeActiveHandler;
- (void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)prepareForPresetsScrollTestOnCategory:(id)arg1 readyHandler:(id /* block */)arg2;
- (void)presentActionSheetForSelection:(id)arg1 sender:(id)arg2;
- (id)presetSectionItemForIndexPath:(id)arg1;
- (void)rebuildUIModelAfterSelectionInSection:(id)arg1 senderRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)reloadCollectionViewDataWithCompletion:(id /* block */)arg1;
- (void)resetAllSectionControllersStateToDefault;
- (void)sectionHeaderView:(id)arg1 didTapAccessorySelection:(id)arg2 sender:(id)arg3;
- (void)selectCategory:(id)arg1 withCompletionDelay:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)selectedItemInSection:(id)arg1;
- (void)setAllowFacetracking:(bool)arg1;
- (void)setAlphaAssetsLabel:(id)arg1;
- (void)setAnimationCoordinator:(id)arg1;
- (void)setAttributesCollectionView:(id)arg1;
- (void)setAvtViewSession:(id)arg1;
- (void)setAvtViewThrottler:(id)arg1;
- (void)setCollapsibleHeaderController:(id)arg1;
- (void)setCollectionViewIsPerformingBatchUpdates:(bool)arg1;
- (void)setCurrentLayout:(id)arg1;
- (void)setCurrentTransition:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableAvatarSnapshotting:(bool)arg1;
- (void)setGroupDial:(id)arg1;
- (void)setGroupDialContainerView:(id)arg1;
- (void)setHasMadeAnySelection:(bool)arg1;
- (void)setHeaderMaskingView:(id)arg1;
- (void)setHeaderPreviewImageRenderer:(id)arg1;
- (void)setIsAnimatingHighlight:(bool)arg1;
- (void)setLastPosedAvatarImageRenderingTime:(id)arg1;
- (void)setPendingCollectionViewReloadDataBlock:(id /* block */)arg1;
- (void)setPendingUnhighlightBlock:(id /* block */)arg1;
- (void)setPostSessionDidBecomeActiveHandler:(id /* block */)arg1;
- (void)setShadowView:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTransitioningContainer:(id)arg1;
- (void)setVerticleRule:(id)arg1;
- (void)setVerticleRuleContainer:(id)arg1;
- (void)setupCollapsibleHeaderIfNeededForLayout:(id)arg1 withSession:(id)arg2;
- (void)setupImageView;
- (void)setupPreview:(id /* block */)arg1;
- (void)setupTapGestureForView:(id)arg1;
- (id)shadowView;
- (id)tapGestureRecognizer;
- (void)tearDownCollapsibleHeaderIfNeeded;
- (void)tearDownThrottler;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;
- (void)transitionToLiveViewAnimated:(bool)arg1;
- (id)transitioningContainer;
- (void)updateCollapsibleHeaderHeightConstraintsAnimated:(bool)arg1;
- (void)updateForChangedSelectionIfNeeded;
- (void)updateForSelectionOfAccessoryItem:(id)arg1 senderRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)updateForSelectionOfItem:(id)arg1 controller:(id)arg2;
- (void)updateForSelectionOfItem:(id)arg1 inSection:(id)arg2 senderRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)updateHeaderDependentLayoutWithHeaderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
- (void)updateImageViewWithPosedAvatarRecordForcingRender:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateLayoutAttributes;
- (id)verticleRule;
- (id)verticleRuleContainer;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visibleLayout;

@end
