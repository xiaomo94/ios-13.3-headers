/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKOctreeNode : NSObject {
    struct GKCOctreeNode<NSObject> { int (**x1)(); float x2; struct GKCOctreeNode<NSObject> {} *x3; struct GKCOctreeNode<NSObject> {} *x4[8]; struct vector<NSObject *, std::__1::allocator<NSObject *> > { id *x_5_1_1; id *x_5_1_2; struct __compressed_pair<NSObject *__strong *, std::__1::allocator<NSObject *> > { id *x_3_2_1; } x_5_1_3; } x5; id x6; } * _cOctreeNode;
}

@property (readonly) struct GKBox { } box;

- (struct GKBox { })box;
- (void*)cOctreeNode;
- (void)setCOctreeNode:(void*)arg1;

@end
