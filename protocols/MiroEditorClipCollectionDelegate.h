/* Generated by RuntimeBrowser.
 */

@protocol MiroEditorClipCollectionDelegate <NSObject>

@optional

- (void)clipCollection:(UICollectionViewController<MiroEditorClipCollection> *)arg1 didBeginDisplayingCell:(MiroEditorClipCell *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)clipCollection:(UICollectionViewController<MiroEditorClipCollection> *)arg1 didCancelInteractiveMovementForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)clipCollection:(UICollectionViewController<MiroEditorClipCollection> *)arg1 didEndDisplayingCell:(MiroEditorClipCell *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)clipCollection:(UICollectionViewController<MiroEditorClipCollection> *)arg1 didEndInteractiveMovementForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)clipCollection:(UICollectionViewController<MiroEditorClipCollection> *)arg1 didSelectIndexPath:(NSIndexPath *)arg2;
- (void)clipCollection:(UICollectionViewController<MiroEditorClipCollection> *)arg1 didSetClipOnCell:(MiroEditorClipCell *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)clipCollection:(UICollectionViewController<MiroEditorClipCollection> *)arg1 didSnapToIndexPath:(NSIndexPath *)arg2;
- (void)clipCollection:(UICollectionViewController<MiroEditorClipCollection> *)arg1 moveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (void)clipCollection:(UICollectionViewController<MiroEditorClipCollection> *)arg1 willBeginInteractiveMovementForItemAtIndexPath:(NSIndexPath *)arg2;
- (PMClipProvider *)clipCollection:(UICollectionViewController<MiroEditorClipCollection> *)arg1 willSetClipProvider:(PMClipProvider *)arg2 onCell:(MiroEditorClipCell *)arg3 indexPath:(NSIndexPath *)arg4;
- (void)clipCollectionDidScroll:(UICollectionViewController<MiroEditorClipCollection> *)arg1;

@end
