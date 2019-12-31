/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAESimpleKeyer : PAEKeyer

- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (void)createLutForNode:(struct HGNode { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; int x3; int x4; void *x5; int x6; int x7; float *x8; int x9; struct HGShaderEntry {} *x10; struct HGNodeInput {} **x11; int x12; struct HGBitmap {} *x13; bool x14; bool x15; bool x16; bool x17; bool x18; struct set<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> > { struct __tree<HGNodeInput *, std::__1::less<HGNodeInput *>, std::__1::allocator<HGNodeInput *> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGNodeInput *, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<HGNodeInput *> > { unsigned long long x_3_3_1; } x_1_2_3; } x_19_1_1; } x19; int x20; struct HGNode {} *x21; struct HGRect { int x_22_1_1; int x_22_1_2; int x_22_1_3; int x_22_1_4; } x22; }*)arg1 input:(int)arg2 rect:(const struct HGRect { int x1; int x2; int x3; int x4; }*)arg3 omKeyer:(struct PAEKeyerOMKeyer2D { int (**x1)(); float x2; float x3; struct pair<Vec2f, Vec2f> { struct Vec2f { float x_1_2_1[2]; } x_4_1_1; struct Vec2f { float x_2_2_1[2]; } x_4_1_2; } x4; struct pair<Vec2f, Vec2f> { struct Vec2f { float x_1_2_1[2]; } x_5_1_1; struct Vec2f { float x_2_2_1[2]; } x_5_1_2; } x5; float x6; float x7; struct Vec2f { float x_8_1_1[2]; } x8; float *x9; struct vector<float, std::__1::allocator<float> > { float *x_10_1_1; float *x_10_1_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_2_1; } x_10_1_3; } x10; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x_1_2_1; float *x_1_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_1_2_3; } x_11_1_1; } x11; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x_1_2_1; float *x_1_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_1_2_3; } x_12_1_1; } x12; struct Mat4f { struct Vec4f { float x_1_2_1[4]; } x_13_1_1[4]; } x13; }*)arg4;
- (void)dealloc;
- (bool)finishInitialSetup:(id*)arg1;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })getKeyerNode:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg1 omKeyer:(struct PAEKeyerOMKeyer2D { int (**x1)(); float x2; float x3; struct pair<Vec2f, Vec2f> { struct Vec2f { float x_1_2_1[2]; } x_4_1_1; struct Vec2f { float x_2_2_1[2]; } x_4_1_2; } x4; struct pair<Vec2f, Vec2f> { struct Vec2f { float x_1_2_1[2]; } x_5_1_1; struct Vec2f { float x_2_2_1[2]; } x_5_1_2; } x5; float x6; float x7; struct Vec2f { float x_8_1_1[2]; } x8; float *x9; struct vector<float, std::__1::allocator<float> > { float *x_10_1_1; float *x_10_1_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_2_1; } x_10_1_3; } x10; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x_1_2_1; float *x_1_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_1_2_3; } x_11_1_1; } x11; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x_1_2_1; float *x_1_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_1_2_3; } x_12_1_1; } x12; struct Mat4f { struct Vec4f { float x_1_2_1[4]; } x_13_1_1[4]; } x13; }*)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (id)initWithAPIManager:(id)arg1;
- (bool)isSimpleKey;
- (bool)oscIsPublishable;
- (bool)parameterChanged:(unsigned int)arg1;
- (id)properties;
- (bool)pullInitialKey:(id*)arg1;

@end
