/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionCompositionalLayoutDynamicAnimator : UIDynamicAnimator {
    id /* block */  _invalidationHandler;
    NSMutableDictionary * _itemBehaviors;
}

@property (nonatomic, readonly) NSArray *visibleItemBehaviors;
@property (nonatomic, readonly) NSSet *visibleItemIdentifiers;
@property (nonatomic, readonly) NSArray *visibleItems;

- (void).cxx_destruct;
- (bool)_animatorStep:(double)arg1;
- (void)addItemBehavior:(id)arg1;
- (id)behaviorForIdentifier:(id)arg1;
- (id)initWithReferenceSystem:(id)arg1 invalidationHandler:(id /* block */)arg2;
- (void)removeItemBehaviorForIdentifier:(id)arg1;
- (void)updateAllItemsFromCurrentState;
- (id)visibleItemBehaviors;
- (id)visibleItemIdentifiers;
- (id)visibleItems;

@end
