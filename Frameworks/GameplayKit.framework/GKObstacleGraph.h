/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKObstacleGraph : GKGraph {
    struct GKCObstacleGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; struct vector<GKCPolygonObstacle *, std::__1::allocator<GKCPolygonObstacle *> > { struct GKCPolygonObstacle {} **x_4_1_1; struct GKCPolygonObstacle {} **x_4_1_2; struct __compressed_pair<GKCPolygonObstacle **, std::__1::allocator<GKCPolygonObstacle *> > { struct GKCPolygonObstacle {} **x_3_2_1; } x_4_1_3; } x4; struct vector<GKCPolygonObstacle *, std::__1::allocator<GKCPolygonObstacle *> > { struct GKCPolygonObstacle {} **x_5_1_1; struct GKCPolygonObstacle {} **x_5_1_2; struct __compressed_pair<GKCPolygonObstacle **, std::__1::allocator<GKCPolygonObstacle *> > { struct GKCPolygonObstacle {} **x_3_2_1; } x_5_1_3; } x5; struct vector<GKPolygonObstacle *, std::__1::allocator<GKPolygonObstacle *> > { id *x_6_1_1; id *x_6_1_2; struct __compressed_pair<GKPolygonObstacle *__strong *, std::__1::allocator<GKPolygonObstacle *> > { id *x_3_2_1; } x_6_1_3; } x6; } * _cObstacleGraph;
    Class  _nodeClass;
    NSMutableArray * _sourceObstacles;
}

@property (nonatomic, readonly) float bufferRadius;
@property (nonatomic, readonly) NSArray *obstacles;

+ (id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2;
+ (id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addObstacles:(id)arg1;
- (float)bufferRadius;
- (struct GKCObstacleGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; struct vector<GKCPolygonObstacle *, std::__1::allocator<GKCPolygonObstacle *> > { struct GKCPolygonObstacle {} **x_4_1_1; struct GKCPolygonObstacle {} **x_4_1_2; struct __compressed_pair<GKCPolygonObstacle **, std::__1::allocator<GKCPolygonObstacle *> > { struct GKCPolygonObstacle {} **x_3_2_1; } x_4_1_3; } x4; struct vector<GKCPolygonObstacle *, std::__1::allocator<GKCPolygonObstacle *> > { struct GKCPolygonObstacle {} **x_5_1_1; struct GKCPolygonObstacle {} **x_5_1_2; struct __compressed_pair<GKCPolygonObstacle **, std::__1::allocator<GKCPolygonObstacle *> > { struct GKCPolygonObstacle {} **x_3_2_1; } x_5_1_3; } x5; struct vector<GKPolygonObstacle *, std::__1::allocator<GKPolygonObstacle *> > { id *x_6_1_1; id *x_6_1_2; struct __compressed_pair<GKPolygonObstacle *__strong *, std::__1::allocator<GKPolygonObstacle *> > { id *x_3_2_1; } x_6_1_3; } x6; }*)cObstacleGraph;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)connectNodeUsingObstacles:(id)arg1;
- (void)connectNodeUsingObstacles:(id)arg1 ignoringBufferRadiusOfObstacles:(id)arg2;
- (void)connectNodeUsingObstacles:(id)arg1 ignoringObstacles:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2;
- (id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3;
- (bool)isConnectionLockedFromNode:(id)arg1 toNode:(id)arg2;
- (void)lockConnectionFromNode:(id)arg1 toNode:(id)arg2;
- (struct GKCGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; }*)makeCGraph;
- (id)mutObstacles;
- (Class)nodeClass;
- (id)nodesForObstacle:(id)arg1;
- (id)obstacles;
- (void)removeAllObstacles;
- (void)removeObstacles:(id)arg1;
- (void)unlockConnectionFromNode:(id)arg1 toNode:(id)arg2;

@end