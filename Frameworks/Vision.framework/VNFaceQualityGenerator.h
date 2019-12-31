/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceQualityGenerator : VNDetector {
    struct shared_ptr<vision::mod::FaceQualityPredictor> { 
        struct FaceQualityPredictor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _mFaceQualityPredictor;
    struct FaceQualityOptions { 
        int preferred_device_id; 
        int espresso_engine_id; 
        int storage_type; 
    }  _mNetworkOptions;
}

+ (id)configurationOptionKeysForDetectorKey;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)completeInitializationAndReturnError:(id*)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;
- (bool)supportsProcessingDevice:(id)arg1;

@end
