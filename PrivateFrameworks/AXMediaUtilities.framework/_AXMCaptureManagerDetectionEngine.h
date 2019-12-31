/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface _AXMCaptureManagerDetectionEngine : NSObject <AXMCaptureManagerVideoFrameObserver> {
    AXMVisionAnalysisOptions * _analysisOptions;
    AXMCaptureManager * _captureManager;
    AXMFaceDetectorNode * _faceDetector;
    AXMImageNode * _imageNode;
    AXMSceneDetectorNode * _sceneDetector;
    AXMVisionEngine * _visionEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)captureManager:(id)arg1 didOutputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (id)initWithCaptureManager:(id)arg1 options:(id)arg2;

@end
