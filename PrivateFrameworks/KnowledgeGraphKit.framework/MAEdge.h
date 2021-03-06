/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface MAEdge : MAElement {
    MANode * _sourceNode;
    MANode * _targetNode;
}

@property (nonatomic, readonly) NSSet *nodes;
@property (nonatomic, readonly) MANode *sourceNode;
@property (nonatomic, readonly) MANode *targetNode;

- (void).cxx_destruct;
- (unsigned long long)_memoryFootprint:(id)arg1;
- (void)_removeAllPersistentStoreProperties;
- (void)_removePersistentStorePropertyForKey:(id)arg1;
- (void)_setPersistentStoreProperties:(id)arg1;
- (void)_setPersistentStorePropertyValue:(id)arg1 forKey:(id)arg2;
- (id)commonNode:(id)arg1;
- (bool)conformsToEdgeSchema:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5;
- (bool)isEqualToEdge:(id)arg1;
- (bool)isEqualToElement:(id)arg1;
- (bool)isLoop;
- (bool)isNode;
- (bool)isUnique;
- (id)nodes;
- (id)oppositeNode:(id)arg1;
- (id)shortDescription;
- (id)sourceNode;
- (id)targetNode;
- (id)visualString;
- (id)visualStringWithName:(id)arg1;
- (id)visualStringWithName:(id)arg1 andPropertyKeys:(id)arg2;

@end
