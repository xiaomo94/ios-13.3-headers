/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPLightMotionAnalyzer : VCPVideoAnalyzer {
    float  _actionScore;
    float  _cameraMotionConfidences;
    float  _cameraMotionParams;
    struct EncodeAnalysis { int x1; int x2; char *x3; struct __CVBuffer {} *x4; struct Translation { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; long long *x6; long long *x7; int *x8; int *x9; int *x10; struct Translation {} *x11; struct FrameBuffer {} *x12; struct EncodeStats {} *x13; float x14; float x15; struct MotionFieldAnalysis { struct EncodeStats {} *x_16_1_1; float *x_16_1_2; float *x_16_1_3; char *x_16_1_4; int x_16_1_5; int x_16_1_6; int x_16_1_7; int x_16_1_8; float x_16_1_9; float x_16_1_10; float x_16_1_11; bool x_16_1_12; bool x_16_1_13; int *x_16_1_14[2]; char *x_16_1_15[2]; float *x_16_1_16[2]; short *x_16_1_17[2]; float *x_16_1_18[2]; int x_16_1_19[2]; int *x_16_1_20[2]; float *x_16_1_21[2]; float *x_16_1_22[2]; struct ObjectDetection { struct Vector<ma::Object *> { struct __CFArray {} *x_1_3_1; } x_23_2_1; struct MotionVector {} *x_23_2_2; float *x_23_2_3; int *x_23_2_4; int *x_23_2_5; int *x_23_2_6; int x_23_2_7; int x_23_2_8; bool x_23_2_9; } x_16_1_23; struct ObjectTracking { struct Object { int x_1_3_1; struct CGRect { struct CGPoint { double x_1_5_1; double x_1_5_2; } x_2_4_1; struct CGSize { double x_2_5_1; double x_2_5_2; } x_2_4_2; } x_1_3_2; struct CGPoint { double x_3_4_1; double x_3_4_2; } x_1_3_3; struct CGPoint { double x_4_4_1; double x_4_4_2; } x_1_3_4; bool x_1_3_5; float x_1_3_6; float x_1_3_7; float x_1_3_8; float x_1_3_9; bool x_1_3_10; } x_24_2_1; struct Object { int x_2_3_1; struct CGRect { struct CGPoint { double x_1_5_1; double x_1_5_2; } x_2_4_1; struct CGSize { double x_2_5_1; double x_2_5_2; } x_2_4_2; } x_2_3_2; struct CGPoint { double x_3_4_1; double x_3_4_2; } x_2_3_3; struct CGPoint { double x_4_4_1; double x_4_4_2; } x_2_3_4; bool x_2_3_5; float x_2_3_6; float x_2_3_7; float x_2_3_8; float x_2_3_9; bool x_2_3_10; } x_24_2_2; bool x_24_2_3; int x_24_2_4; int x_24_2_5; float *x_24_2_6; float *x_24_2_7; float *x_24_2_8; float *x_24_2_9; float *x_24_2_10; float *x_24_2_11; float *x_24_2_12; long long x_24_2_13; long long x_24_2_14; float *x_24_2_15; int x_24_2_16; } x_16_1_24; } x16; } * _encodeAnalysis;
    unsigned long long  _flags;
    struct Frame { 
        int frame_idx_; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } timestamp_; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration_; 
        struct Translation { 
            float x_; 
            float y_; 
            float z_; 
        } ave_motion_; 
        struct Translation { 
            float x_; 
            float y_; 
            float z_; 
        } org_motion_; 
        float quality_score_; 
        unsigned long long distortion_; 
        float distortion_norm_; 
        struct Translation { 
            float x_; 
            float y_; 
            float z_; 
        } motion_change_; 
        unsigned int compressed_bytes_; 
        bool blur_; 
        struct Translation { 
            float x_; 
            float y_; 
            float z_; 
        } acc_var_; 
        float texture_; 
        struct MotionResult { 
            float significant_values_[6]; 
            float confidence_[6]; 
            float fine_action_score_; 
            float action_score_; 
            float track_score_; 
            float rotation_angle_; 
            float subtle_motion_score_; 
            int action_blocks_; 
            float action_motion_; 
            bool valid_mb_; 
            bool valid_submb_; 
            int support_size_; 
            float residual_var_; 
            float gmv_[2]; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } duration_; 
            float scene_delta_; 
            float scene_delta_ratio_; 
            struct Vector<ma::Object *> { 
                struct __CFArray {} *vector_; 
            } objects_; 
            struct Vector<ma::Object *> { 
                struct __CFArray {} *vector_; 
            } detect_objects_; 
        } motion_result_; 
        float interestingness_; 
        float obstruction_; 
        float colorfulness_score_; 
        struct Histogram { 
            float extremities_; 
            float overexposes_; 
            int *histogram_[3]; 
            int *moments_hist_[2]; 
        } histogram_; 
    }  _frame;
    NSObject<OS_dispatch_queue> * _queue;
    struct EncodeStatsHW { int (**x1)(); bool *x2; bool *x3; struct MotionVector {} *x4; struct MotionVector {} *x5; unsigned short *x6; unsigned short *x7; unsigned int *x8; unsigned short *x9; unsigned short *x10; unsigned short *x11; unsigned short *x12; unsigned short *x13; unsigned short *x14; unsigned short *x15; unsigned short *x16; unsigned short *x17; unsigned short *x18; unsigned short *x19; unsigned int x20; bool x21; bool x22; bool x23; int x24; int x25; int x26; struct OpaqueVTCompressionSession {} *x27; struct __CFData {} *x28; struct { long long x_29_1_1; int x_29_1_2; unsigned int x_29_1_3; long long x_29_1_4; } x29; int x30; int x31; bool x32; } * _stats;
    bool  _turbo;
}

@property (readonly) float actionScore;

+ (float)autoLiveMotionScore:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)actionScore;
- (void)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completion:(id /* block */)arg4;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)cameraMotionDetection:(struct MotionResult { float x1[6]; float x2[6]; float x3; float x4; float x5; float x6; float x7; int x8; float x9; bool x10; bool x11; int x12; float x13; float x14[2]; struct { long long x_15_1_1; int x_15_1_2; unsigned int x_15_1_3; long long x_15_1_4; } x15; float x16; float x17; struct Vector<ma::Object *> { struct __CFArray {} *x_18_1_1; } x18; struct Vector<ma::Object *> { struct __CFArray {} *x_19_1_1; } x19; }*)arg1;
- (void)dealloc;
- (int)generateThresholds:(float)arg1 withConfidences:(float)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1 turbo:(bool)arg2;
- (int)prewarmWithWidth:(int)arg1 height:(int)arg2;

@end
