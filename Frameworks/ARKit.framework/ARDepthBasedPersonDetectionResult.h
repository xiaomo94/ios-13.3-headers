/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARDepthBasedPersonDetectionResult : ARPersonDetectionResult {
    long long  _numberDepthPixels;
    double  _sumDepthValues;
}

@property (nonatomic) long long numberDepthPixels;
@property (nonatomic) double sumDepthValues;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (long long)numberDepthPixels;
- (void)setNumberDepthPixels:(long long)arg1;
- (void)setSumDepthValues:(double)arg1;
- (double)sumDepthValues;

@end