/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARGPUWarper : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLRenderPipelineState> * _homographyPipelineState;
}

- (void).cxx_destruct;
- (id)init;
- (void)warpCameraImage:(struct __CVBuffer { }*)arg1 withExposureOffset:(float)arg2 withCameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg3 withCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 toPlane:(struct ARTexturedPlane { struct array<unsigned char, 16> { unsigned char x_1_1_1[16]; } x1; unsigned long long x2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_1_1[4]; } x3; struct set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > { struct __tree<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::array<unsigned char, 16>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<std::__1::array<unsigned char, 16> > > { unsigned long long x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; })arg5 withLoadAction:(unsigned long long)arg6 synchronous:(bool)arg7;
- (void)warpPlane:(struct ARTexturedPlane { struct array<unsigned char, 16> { unsigned char x_1_1_1[16]; } x1; unsigned long long x2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_1_1[4]; } x3; struct set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > { struct __tree<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::array<unsigned char, 16>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<std::__1::array<unsigned char, 16> > > { unsigned long long x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; })arg1 toPlane:(struct ARTexturedPlane { struct array<unsigned char, 16> { unsigned char x_1_1_1[16]; } x1; unsigned long long x2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_1_1[4]; } x3; struct set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > { struct __tree<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::array<unsigned char, 16>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<std::__1::array<unsigned char, 16> > > { unsigned long long x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; })arg2 withLoadAction:(unsigned long long)arg3 synchronous:(bool)arg4;

@end
