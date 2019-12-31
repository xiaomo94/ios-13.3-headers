/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardEmojiCollectionInputView : UIKeyboardEmojiKeyView <UICollectionViewDataSource, UICollectionViewDelegate, UIKeyboardMediaControllerDelegate> {
    UIKeyboardEmojiCategory * _category;
    UIKeyboardEmojiCollectionView * _collectionView;
    id /* block */  _completionBlock;
    unsigned long long  _currentSection;
    UIKeyboardEmojiGraphicsTraits * _emojiGraphicsTraits;
    UICollectionViewFlowLayout * _flowLayout;
    double  _frameInset;
    bool  _hasShownAnimojiCell;
    bool  _hasShownAnimojiFirstTimeExperience;
    UIResponder<UIKBEmojiHitTestResponder> * _hitTestResponder;
    bool  _inputDelegateCanSupportAnimoji;
    bool  _isDraggingInputView;
    bool  _shouldRetryFetchingAnimojiRecents;
    NSIndexPath * _tappedSkinToneEmoji;
    bool  _useWideAnimojiCell;
}

@property UIKeyboardEmojiCategory *category;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder;
@property (readonly) bool isDraggingInputView;
@property (readonly) Class superclass;
@property (nonatomic) NSIndexPath *tappedSkinToneEmoji;

+ (bool)shouldHighlightEmoji:(id)arg1;

- (double)_recentlyUsedMediaRoundedOffset:(double)arg1 recentlyUsedMediaCellWidth:(double)arg2;
- (void)_setUserHasSelectedSkinToneEmoji:(bool)arg1;
- (bool)_shouldReverseLayoutDirection;
- (bool)_shouldShowRecentlyUsedMedia;
- (bool)_userHasSelectedSkinToneEmoji;
- (bool)baseStringIsCoupleEmoji:(id)arg1;
- (id)category;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id /* block */)completionBlock;
- (void)dealloc;
- (long long)didInputSubTree:(id)arg1;
- (void)didMoveToWindow;
- (void)didTearDownRecentsViewForKeyboardMediaController:(id)arg1;
- (void)dimKeys:(id)arg1;
- (id)emojiBaseFirstCharacterString:(id)arg1;
- (id)emojiBaseString:(id)arg1;
- (id)firstFullyVisibleHeader;
- (bool)genderEmojiBaseStringNeedVariantSelector:(id)arg1;
- (id)hitTestResponder;
- (long long)indexForPrettyCategoryDisplay:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (bool)isDraggingInputView;
- (id)itemInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)memojiSettingEnabled;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)selectedChildSkinToneEmoji:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setHitTestResponder:(id)arg1;
- (void)setTappedSkinToneEmoji:(id)arg1;
- (void)shouldDismissModalDisplayView:(id)arg1;
- (bool)skinToneWasUsedForEmoji:(id)arg1;
- (double)snappedXOffsetForOffset:(double)arg1 scrubbing:(bool)arg2;
- (id)subTreeHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)tappedSkinToneEmoji;
- (void)updateToCategory:(long long)arg1;
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;
- (void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(id /* block */)arg3;

@end
