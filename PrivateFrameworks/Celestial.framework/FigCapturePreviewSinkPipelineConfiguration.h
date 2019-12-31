/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCapturePreviewSinkPipelineConfiguration : NSObject {
    bool  _clientIsCameraOrDerivative;
    bool  _deferredPrepareEnabled;
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    bool  _displayPipeRequiresPacked10BitPixelFormatForP3Input;
    bool  _doingFaceTracking;
    FigMetadataObjectCaptureConnectionConfiguration * _metadataObjectConnectionConfiguration;
    bool  _overCaptureEnabled;
    FigVideoCaptureConnectionConfiguration * _previewTimeMachineConnectionConfiguration;
    bool  _primaryCaptureRectModificationEnabled;
    bool  _remoteVideoPreview;
    FigVideoCaptureConnectionConfiguration * _sceneClassifierConnectionConfiguration;
    struct { 
        unsigned short major; 
        unsigned short minor; 
        unsigned short patch; 
    }  _sceneClassifierPipelineVersion;
    int  _sourceColorSpaceProperties;
    bool  _sourceIsBravoDevice;
    bool  _sourcePixelFormatIsFullRange;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _videoDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _videoPreviewSinkConnectionConfiguration;
    double  _videoStabilizationOverscan;
    FigVideoCaptureConnectionConfiguration * _videoThumbnailConnectionConfiguration;
    bool  _vitalityScoringEnabled;
}

@property (nonatomic) bool clientIsCameraOrDerivative;
@property (nonatomic) bool deferredPrepareEnabled;
@property (nonatomic, retain) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (nonatomic) bool displayPipeRequiresPacked10BitPixelFormatForP3Input;
@property (nonatomic) bool doingFaceTracking;
@property (nonatomic, retain) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (nonatomic) bool overCaptureEnabled;
@property (nonatomic, retain) FigVideoCaptureConnectionConfiguration *previewTimeMachineConnectionConfiguration;
@property (nonatomic) bool primaryCaptureRectModificationEnabled;
@property (nonatomic) bool remoteVideoPreview;
@property (nonatomic, retain) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;
@property (nonatomic) struct { unsigned short x1; unsigned short x2; unsigned short x3; } sceneClassifierPipelineVersion;
@property (nonatomic) int sourceColorSpaceProperties;
@property (nonatomic) bool sourceIsBravoDevice;
@property (nonatomic) bool sourcePixelFormatIsFullRange;
@property (nonatomic, retain) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic, retain) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (nonatomic, retain) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (nonatomic) double videoStabilizationOverscan;
@property (nonatomic, retain) FigVideoCaptureConnectionConfiguration *videoThumbnailConnectionConfiguration;
@property (nonatomic) bool vitalityScoringEnabled;

- (bool)clientIsCameraOrDerivative;
- (void)dealloc;
- (bool)deferredPrepareEnabled;
- (id)depthDataConnectionConfiguration;
- (bool)displayPipeRequiresPacked10BitPixelFormatForP3Input;
- (bool)doingFaceTracking;
- (id)metadataObjectConnectionConfiguration;
- (bool)overCaptureEnabled;
- (id)previewTimeMachineConnectionConfiguration;
- (bool)primaryCaptureRectModificationEnabled;
- (bool)remoteVideoPreview;
- (id)sceneClassifierConnectionConfiguration;
- (struct { unsigned short x1; unsigned short x2; unsigned short x3; })sceneClassifierPipelineVersion;
- (void)setClientIsCameraOrDerivative:(bool)arg1;
- (void)setDeferredPrepareEnabled:(bool)arg1;
- (void)setDepthDataConnectionConfiguration:(id)arg1;
- (void)setDisplayPipeRequiresPacked10BitPixelFormatForP3Input:(bool)arg1;
- (void)setDoingFaceTracking:(bool)arg1;
- (void)setMetadataObjectConnectionConfiguration:(id)arg1;
- (void)setOverCaptureEnabled:(bool)arg1;
- (void)setPreviewTimeMachineConnectionConfiguration:(id)arg1;
- (void)setPrimaryCaptureRectModificationEnabled:(bool)arg1;
- (void)setRemoteVideoPreview:(bool)arg1;
- (void)setSceneClassifierConnectionConfiguration:(id)arg1;
- (void)setSceneClassifierPipelineVersion:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg1;
- (void)setSourceColorSpaceProperties:(int)arg1;
- (void)setSourceIsBravoDevice:(bool)arg1;
- (void)setSourcePixelFormatIsFullRange:(bool)arg1;
- (void)setStillImageConnectionConfiguration:(id)arg1;
- (void)setVideoDataConnectionConfiguration:(id)arg1;
- (void)setVideoPreviewSinkConnectionConfiguration:(id)arg1;
- (void)setVideoStabilizationOverscan:(double)arg1;
- (void)setVideoThumbnailConnectionConfiguration:(id)arg1;
- (void)setVitalityScoringEnabled:(bool)arg1;
- (int)sourceColorSpaceProperties;
- (bool)sourceIsBravoDevice;
- (bool)sourcePixelFormatIsFullRange;
- (id)stillImageConnectionConfiguration;
- (id)videoDataConnectionConfiguration;
- (id)videoPreviewSinkConnectionConfiguration;
- (double)videoStabilizationOverscan;
- (id)videoThumbnailConnectionConfiguration;
- (bool)vitalityScoringEnabled;

@end
