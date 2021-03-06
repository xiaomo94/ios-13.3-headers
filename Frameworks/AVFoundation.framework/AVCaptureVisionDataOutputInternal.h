/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVisionDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper * delegateCallbackHelper;
    bool  featureBinningEnabled;
    bool  featureOrientationAssignmentEnabled;
    float  gaussianPyramidBaseOctaveDownscalingFactor;
    unsigned long long  gaussianPyramidOctavesCount;
    float  keypointDetectionThreshold;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  maxBurstDuration;
    unsigned long long  maxKeypointsCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  minBurstFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  minFrameDuration;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
