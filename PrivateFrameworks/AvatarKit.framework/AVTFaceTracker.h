/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTFaceTracker : NSObject <ARRecordingTechniqueDelegate> {
    ARSession * _arSession;
    ARFrame * _currentARFrame;
    NSMutableArray * _delegates;
    bool  _directRetargetingMode;
    bool  _faceIsTracked;
    ARConfiguration * _faceTracking;
    bool  _faceTrackingPaused;
    NSURL * _faceTrackingRecordingURL;
    long long  _frame_id;
    bool  _isActive;
    bool  _isSensorCovered;
    double  _lastARFrameTime;
    unsigned long long  _lastTrackingCaptureTimestamp;
    double  _lastTrackingDate;
    bool  _lowLight;
    long long  _orientation;
    struct { 
        double refTimestamp; 
        double arDelegateTimestamp; 
    }  _perfPacket;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _rawTransform;
    NSObject<OS_dispatch_semaphore> * _recordingSemaphore;
    ARRecordingTechnique * _recordingTechnique;
    bool  _shouldConstraintHeadPose;
    bool  _shouldUseAudioData;
    bool  _skipUpdates;
    double  _timeBetweenARFrame;
    struct { 
        double timestamp; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*translation; 
    }  _trackingData;
    NSLock * _trackingDataLock;
    AVTFaceTrackingInfo * _trackingInfo;
    bool  _trackingIsPaused;
    bool  limitRoll;
}

@property (nonatomic, readonly) double arDelegateTimestamp;
@property (nonatomic, readonly) double arFrameDeltaTime;
@property (nonatomic, readonly) double arFrameTimestamp;
@property (readonly) ARSession *arSession;
@property (readonly) ARFrame *currentARFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool directRetargetingMode;
@property (readonly) bool faceIsTracked;
@property (readonly) long long faceTrackingFrameID;
@property (readonly) AVTFaceTrackingInfo *faceTrackingInfo;
@property (getter=faceTrackingIsPaused, nonatomic) bool faceTrackingPaused;
@property (copy) NSURL *faceTrackingRecordingURL;
@property (readonly) float fieldOfView;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interfaceOrientation;
@property (readonly) unsigned long long lastTrackingCaptureTimestamp;
@property (readonly) double lastTrackingDate;
@property (nonatomic) bool limitRoll;
@property (readonly) bool lowLight;
@property (readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } rawTransform;
@property (getter=isSensorCovered, readonly) bool sensorCovered;
@property (nonatomic) bool shouldConstraintHeadPose;
@property (nonatomic) bool shouldUseAudioData;
@property (nonatomic) bool skipUpdates;
@property (readonly) Class superclass;
@property (readonly) float videoAspectRatio;
@property (readonly) void videoDimensions;

+ (void)setUsesInternalTrackingPipeline:(bool)arg1;
+ (bool)usesInternalTrackingPipeline;

- (void).cxx_destruct;
- (void)_setupARKitWithRecordTechnique:(bool)arg1;
- (void)addDelegate:(id)arg1;
- (double)arDelegateTimestamp;
- (double)arFrameDeltaTime;
- (double)arFrameTimestamp;
- (id)arSession;
- (void)beginQuery;
- (void)copyTrackingData:(struct { double x1; bool x2; float x3[51]; float x4[51]; float x5[1]; float x6[1]; }*)arg1;
- (id)currentARFrame;
- (void)decreaseFrameRate;
- (bool)directRetargetingMode;
- (void)endQuery;
- (void)enumerateDelegates:(id /* block */)arg1;
- (bool)faceIsTracked;
- (long long)faceTrackingFrameID;
- (id)faceTrackingInfo;
- (bool)faceTrackingIsPaused;
- (bool)faceTrackingPaused;
- (id)faceTrackingRecordingURL;
- (float)fieldOfView;
- (void)increaseFrameRateToMaximum;
- (id)init;
- (long long)interfaceOrientation;
- (bool)isActive;
- (bool)isSensorCovered;
- (unsigned long long)lastTrackingCaptureTimestamp;
- (double)lastTrackingDate;
- (bool)limitRoll;
- (bool)lowLight;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rawTransform;
- (void)removeDelegate:(id)arg1;
- (void)run;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)setDirectRetargetingMode:(bool)arg1;
- (void)setFaceIsTracked:(bool)arg1;
- (void)setFaceTrackingPaused:(bool)arg1;
- (void)setFaceTrackingRecordingURL:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setLimitRoll:(bool)arg1;
- (void)setLowLight:(bool)arg1;
- (void)setSensorCovered:(bool)arg1;
- (void)setShouldConstraintHeadPose:(bool)arg1;
- (void)setShouldUseAudioData:(bool)arg1;
- (void)setSkipUpdates:(bool)arg1;
- (void)setupARKit;
- (void)setupARKitWithRecordTechnique;
- (bool)shouldConstraintHeadPose;
- (bool)shouldUseAudioData;
- (bool)skipUpdates;
- (void)startRecording;
- (void)stop;
- (void)stopRecording;
- (void)technique:(id)arg1 didFinishWithResult:(id)arg2;
- (float)videoAspectRatio;
- (void)videoDimensions;

@end
