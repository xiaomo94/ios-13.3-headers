/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITableViewShadowUpdatesController : NSObject <UIDataSourceModelAssociation, UITableViewDataSourcePrefetching, UITableViewDataSourcePrivate, UITableViewDelegatePrivate, UITableViewDragDelegate_Private, UITableViewDragDestinationDelegate_Internal, UITableViewDragSourceDelegate, UITableViewDropDelegate_Private> {
    _UIDataSourceSnapshotter * _initialSnapshot;
    NSMutableArray * _shadowUpdates;
    UITableView * _tableView;
    _UIDataSourceUpdateMap * _updateMap;
}

@property (nonatomic, readonly) _UIDataSourceSnapshotter *dataSourceAfterShadowUpdates;
@property (nonatomic, readonly) _UIDataSourceSnapshotter *dataSourceBeforeShadowUpdates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasShadowUpdates;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIDataSourceSnapshotter *initialSnapshot;
@property (nonatomic, retain) NSMutableArray *shadowUpdates;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;
@property (nonatomic, retain) _UIDataSourceUpdateMap *updateMap;

- (void).cxx_destruct;
- (long long)__tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (long long)__tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)_rebasedShadowUpdatesForUpdate:(id)arg1 initialSnapshot:(id)arg2;
- (bool)_tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (bool)_tableView:(id)arg1 canHandleDropSession:(id)arg2;
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (long long)_tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)_tableView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (bool)_tableView:(id)arg1 dragSessionSupportsSystemDrag:(id)arg2;
- (void)_tableView:(id)arg1 dragSessionWillBegin:(id)arg2;
- (void)_tableView:(id)arg1 dropSessionDidEnd:(id)arg2;
- (void)_tableView:(id)arg1 dropSessionDidEnter:(id)arg2;
- (void)_tableView:(id)arg1 dropSessionDidExit:(id)arg2;
- (id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)_tableView:(id)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2;
- (bool)_tableView:(id)arg1 shouldSpringLoadRowAtIndexPath:(id)arg2 withContext:(id)arg3;
- (id)_tableView:(id)arg1 targetIndexPathForProposedIndexPath:(id)arg2 currentIndexPath:(id)arg3 dropSession:(id)arg4;
- (id)_tableView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2;
- (void)_tableView:(id)arg1 willLayoutCell:(id)arg2 usingTemplateLayoutCell:(id)arg3 forRowAtIndexPath:(id)arg4;
- (void)appendShadowUpdate:(id)arg1;
- (id)dataSourceAfterShadowUpdates;
- (id)dataSourceBeforeShadowUpdates;
- (bool)hasShadowUpdates;
- (double)heightForFooterInTableView:(id)arg1;
- (double)heightForHeaderInTableView:(id)arg1;
- (id)indexPathAfterShadowUpdates:(id)arg1;
- (id)indexPathAfterShadowUpdates:(id)arg1 allowAppendingInsert:(bool)arg2;
- (id)indexPathAfterShadowUpdates:(id)arg1 startingAtUpdate:(id)arg2;
- (id)indexPathBeforeShadowUpdates:(id)arg1;
- (id)indexPathBeforeShadowUpdates:(id)arg1 startingBeforeUpdate:(id)arg2;
- (id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2;
- (id)indexPathForPreferredFocusedItemForTableView:(id)arg1;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (id)indexPathsAfterShadowUpdates:(id)arg1;
- (id)indexPathsAfterShadowUpdates:(id)arg1 allowAppendingInsert:(bool)arg2;
- (id)indexPathsBeforeShadowUpdates:(id)arg1;
- (id)initWithTableView:(id)arg1;
- (id)initialSnapshot;
- (double)marginForTableView:(id)arg1;
- (id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)rebaseExistingShadowUpdatesForUpdates:(id)arg1;
- (void)regenerateUpdateMap;
- (void)removeShadowUpdate:(id)arg1;
- (void)reset;
- (long long)sectionAfterShadowUpdates:(long long)arg1;
- (long long)sectionBeforeShadowUpdates:(long long)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)sectionsAfterShadowUpdates:(id)arg1;
- (id)sectionsAfterShadowUpdates:(id)arg1 allowAppendingInsert:(bool)arg2;
- (id)sectionsBeforeShadowUpdates:(id)arg1;
- (void)setInitialSnapshot:(id)arg1;
- (void)setShadowUpdates:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setUpdateMap:(id)arg1;
- (id)shadowUpdateWithIdentifier:(id)arg1;
- (id)shadowUpdates;
- (id)tableView;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 accessoryTypeForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 backgroundColorForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 backgroundColorForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tableView:(id)arg1 calloutTargetRectForCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canHandleDropSession:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (id)tableView:(id)arg1 detailTextForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didCancelReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndSwipingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (void)tableView:(id)arg1 didUpdateTextFieldForRowAtIndexPath:(id)arg2 withValue:(id)arg3;
- (id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;
- (void)tableView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (bool)tableView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;
- (void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2;
- (id)tableView:(id)arg1 dropPreviewParametersForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 dropSessionDidEnd:(id)arg2;
- (void)tableView:(id)arg1 dropSessionDidEnter:(id)arg2;
- (void)tableView:(id)arg1 dropSessionDidExit:(id)arg2;
- (id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 leadingSwipeActionsForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 maxTitleWidthForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 maxTitleWidthForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (struct CGPoint { double x1; double x2; })tableView:(id)arg1 newContentOffsetAfterUpdate:(struct CGPoint { double x1; double x2; })arg2 context:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHaveFullLengthTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldSpringLoadRowAtIndexPath:(id)arg2 withContext:(id)arg3;
- (bool)tableView:(id)arg1 shouldUpdateFocusFromRowAtIndexPath:(id)arg2 toView:(id)arg3 heading:(unsigned long long)arg4;
- (bool)tableView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;
- (void)tableView:(id)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginSwipingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willCommitMenuWithAnimator:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
- (double)tableViewSpacingForExtraSeparators:(id)arg1;
- (id)updateMap;
- (id)viewForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;

@end
