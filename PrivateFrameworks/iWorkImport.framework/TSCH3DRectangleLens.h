/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRectangleLens : TSCH3DLens {
    float  mBottom;
    float  mLeft;
    float  mRight;
    float  mTop;
}

@property (nonatomic) float bottom;
@property (nonatomic, readonly) float height;
@property (nonatomic) float left;
@property (nonatomic) float right;
@property (nonatomic) float top;
@property (nonatomic, readonly) float width;

- (float)bottom;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)deviceNormalize;
- (id)frustumRect;
- (float)height;
- (id)init;
- (float)left;
- (id)narrowByNormalizedBounds:(struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; }*)arg1;
- (id)narrowedByNormalizedBounds:(struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; }*)arg1;
- (void)normalize;
- (float)right;
- (void)setBottom:(float)arg1;
- (void)setLeft:(float)arg1;
- (void)setPerPixel:(struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; }*)arg1;
- (void)setPerPixelSize:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (void)setRight:(float)arg1;
- (void)setTop:(float)arg1;
- (id)shiftByPercentage:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (id)shiftedByPercentage:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (float)top;
- (float)width;

@end
