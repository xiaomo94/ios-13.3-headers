/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPhotoEffect3D : CIFilter {
    CIImage * inputDepthMap;
    NSNumber * inputGrainAmount;
    CIImage * inputImage;
    NSNumber * inputScale;
    NSNumber * inputThreshold;
}

@property (nonatomic, retain) CIImage *inputDepthMap;
@property (nonatomic, retain) NSNumber *inputGrainAmount;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputScale;
@property (nonatomic, retain) NSNumber *inputThreshold;

+ (id)customAttributes;

- (id)_CIPhotoEffectDepthBlend;
- (int)_defaultVersion;
- (int)_maxVersion;
- (int)_maxVersionBG;
- (id)applyCubeWithName:(id)arg1 toImage:(id)arg2;
- (id)backgroundCubeName;
- (id)backgroundCubePath;
- (id)cubeColorSpaceName;
- (id)cubeName;
- (id)cubePath;
- (id)init;
- (id)inputDepthMap;
- (id)inputGrainAmount;
- (id)inputImage;
- (id)inputScale;
- (id)inputThreshold;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputDepthMap:(id)arg1;
- (void)setInputGrainAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputThreshold:(id)arg1;

@end
