/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTSimpleAvatarPicker : NSObject <AVTAvatarActionsViewControllerDelegate, AVTAvatarEditorViewControllerDelegate, AVTAvatarPicker, AVTAvatarRecordDataSourceObserver, AVTNotifyingContainerViewDelegate, AVTObjectViewController, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    bool  _allowEditing;
    UICollectionView * _collectionView;
    AVTEdgeDisappearingCollectionViewLayout * _collectionViewLayout;
    AVTAvatarPickerDataSource * _dataSource;
    AVTSimpleAvatarPickerHeaderView * _headerView;
    _AVTAvatarRecordImageProvider * _imageProvider;
    double  _minimumInteritemSpacing;
    AVTRenderingScope * _renderingScope;
    UIView * _view;
    AVTViewSessionProvider * _viewSessionProvider;
    <AVTAvatarPickerDelegate> * avatarPickerDelegate;
    <AVTPresenterDelegate> * presenterDelegate;
}

@property (nonatomic) bool allowEditing;
@property (nonatomic) <AVTAvatarPickerDelegate> *avatarPickerDelegate;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) AVTEdgeDisappearingCollectionViewLayout *collectionViewLayout;
@property (nonatomic, retain) AVTAvatarPickerDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) AVTSimpleAvatarPickerHeaderView *headerView;
@property (nonatomic, readonly) _AVTAvatarRecordImageProvider *imageProvider;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) <AVTPresenterDelegate> *presenterDelegate;
@property (nonatomic, readonly) AVTRenderingScope *renderingScope;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *view;
@property (nonatomic, readonly) AVTViewSessionProvider *viewSessionProvider;

- (void).cxx_destruct;
- (bool)allowEditing;
- (id)avatarActionsViewController:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
- (void)avatarActionsViewControllerDidFinish:(id)arg1;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (id)avatarPickerDelegate;
- (bool)canCreateAvatar;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewLayout;
- (id)dataSource;
- (void)dataSource:(id)arg1 didAddRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didEditRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didRemoveRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)deselectPreviousSelectedItem;
- (id)headerView;
- (void)headerViewButtonPressed;
- (id)imageProvider;
- (long long)indexForSelectedAvatar;
- (id)initWithDataSource:(id)arg1 recordImageProvider:(id)arg2 allowEditing:(bool)arg3;
- (id)initWithStore:(id)arg1 environment:(id)arg2 allowAddItem:(bool)arg3;
- (bool)isItemAtIndexPathOffscreen:(id)arg1;
- (void)loadView;
- (double)minimumInteritemSpacing;
- (void)notifyingContainerViewDidChangeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)notifyingContainerViewWillChangeSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)presentActionsForAvatarForPPT:(id)arg1;
- (void)presentActionsForAvatarRecord:(id)arg1;
- (void)presentMemojiEditorForCreation;
- (id)presenterDelegate;
- (void)reloadData;
- (void)reloadDataSource;
- (id)renderingScope;
- (void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(bool)arg2;
- (id)selectedAvatar;
- (void)setAllowEditing:(bool)arg1;
- (void)setAvatarPickerDelegate:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setMinimumInteritemSpacing:(double)arg1;
- (void)setPresenterDelegate:(id)arg1;
- (void)setView:(id)arg1;
- (bool)shouldShowHeaderButton;
- (void)significantRecordChangeInDataSource:(id)arg1;
- (void)updateHeaderButtonForSelectedAvatar:(id)arg1 invalidateLayout:(bool)arg2 animated:(bool)arg3;
- (id)view;
- (id)viewForAddItem;
- (id)viewSessionProvider;
- (void)wrapAndPresentViewController:(id)arg1 animated:(bool)arg2;

@end
