/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureStillImageSettings : NSObject <NSCopying, NSSecureCoding> {
    int  _HDRMode;
    float * _ISOs;
    bool  _autoDeferredProcessingEnabled;
    bool  _autoRedEyeReductionEnabled;
    bool  _autoSpatialOverCaptureEnabled;
    bool  _beginMomentCaptureSettings;
    unsigned int  _bracketImageCount;
    int  _bracketType;
    NSArray * _bravoConstituentImageDeliveryDeviceTypes;
    int  _bravoImageFusionMode;
    bool  _burstQualityCaptureEnabled;
    bool  _cameraCalibrationDataDeliveryEnabled;
    NSString * _captureRequestIdentifier;
    bool  _clientInitiatedPrepareSettings;
    bool  _depthDataDeliveryEnabled;
    bool  _depthDataFiltered;
    int  _digitalFlashMode;
    bool  _embedsDepthDataInImage;
    bool  _embedsPortraitEffectsMatteInImage;
    bool  _embedsSemanticSegmentationMattesInImage;
    NSArray * _enabledSemanticSegmentationMatteURNs;
    struct { long long x1; int x2; unsigned int x3; long long x4; } * _exposureDurations;
    float * _exposureTargetBiases;
    int  _flashMode;
    NSString * _imageGroupIdentifier;
    bool  _lensStabilizationDuringBracketEnabled;
    NSDictionary * _metadata;
    NSDictionary * _metadataForOriginalImage;
    bool  _noiseReductionEnabled;
    NSArray * _originalImageFilters;
    int  _outputFileType;
    unsigned int  _outputFormat;
    unsigned int  _outputHeight;
    bool  _outputMirroring;
    int  _outputOrientation;
    unsigned int  _outputWidth;
    int  _payloadType;
    bool  _portraitEffectsMatteDeliveryEnabled;
    float  _portraitLightingEffectStrength;
    bool  _previewEnabled;
    unsigned int  _previewFormat;
    unsigned int  _previewHeight;
    bool  _previewMirroring;
    int  _previewOrientation;
    unsigned int  _previewWidth;
    NSArray * _processedImageFilters;
    bool  _providesOriginalImage;
    int  _qualityPrioritization;
    int  _rawOutputFileType;
    unsigned int  _rawOutputFormat;
    bool  _rawThumbnailEnabled;
    unsigned int  _rawThumbnailFormat;
    unsigned int  _rawThumbnailHeight;
    unsigned int  _rawThumbnailWidth;
    float  _scaleFactor;
    long long  _settingsID;
    int  _settingsProvider;
    unsigned int  _shutterSound;
    float  _simulatedAperture;
    NSDictionary * _spatialOverCaptureMetadata;
    NSDictionary * _spatialOverCaptureMetadataForOriginalImage;
    bool  _squareCropEnabled;
    double  _stillImageCaptureAbsoluteStartTime;
    long long  _stillImageCaptureStartTime;
    long long  _stillImageRequestTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageUserInitiatedRequestPTS;
    unsigned long long  _stillImageUserInitiatedRequestTime;
    bool  _thumbnailEnabled;
    unsigned int  _thumbnailFormat;
    unsigned int  _thumbnailHeight;
    unsigned int  _thumbnailWidth;
    bool  _userInitiatedRequestSettings;
    float  _videoStabilizationOverscanCropMultiplier;
    NSDictionary * _vtCompressionProperties;
    int  _wideColorMode;
    bool  _zoomWithoutUpscalingEnabled;
}

@property (nonatomic) int HDRMode;
@property (nonatomic, readonly) float*ISOs;
@property (nonatomic) bool autoDeferredProcessingEnabled;
@property (nonatomic) bool autoRedEyeReductionEnabled;
@property (nonatomic) bool autoSpatialOverCaptureEnabled;
@property (getter=isBeginMomentCaptureSettings, nonatomic) bool beginMomentCaptureSettings;
@property (nonatomic, readonly) unsigned int bracketImageCount;
@property (nonatomic, readonly) int bracketType;
@property (nonatomic, copy) NSArray *bravoConstituentImageDeliveryDeviceTypes;
@property (nonatomic) int bravoImageFusionMode;
@property (nonatomic) bool burstQualityCaptureEnabled;
@property (nonatomic) bool cameraCalibrationDataDeliveryEnabled;
@property (nonatomic, readonly) NSString *captureRequestIdentifier;
@property (getter=isClientInitiatedPrepareSettings, nonatomic) bool clientInitiatedPrepareSettings;
@property (nonatomic) bool depthDataDeliveryEnabled;
@property (nonatomic) bool depthDataFiltered;
@property (nonatomic) int digitalFlashMode;
@property (nonatomic) bool embedsDepthDataInImage;
@property (nonatomic) bool embedsPortraitEffectsMatteInImage;
@property (nonatomic) bool embedsSemanticSegmentationMattesInImage;
@property (nonatomic, retain) NSArray *enabledSemanticSegmentationMatteURNs;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; }*exposureDurations;
@property (nonatomic, readonly) float*exposureTargetBiases;
@property (nonatomic) int flashMode;
@property (nonatomic) NSString *imageGroupIdentifier;
@property (nonatomic) bool lensStabilizationDuringBracketEnabled;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, copy) NSDictionary *metadataForOriginalImage;
@property (nonatomic) bool noiseReductionEnabled;
@property (nonatomic, copy) NSArray *originalImageFilters;
@property (nonatomic) int outputFileType;
@property (nonatomic) unsigned int outputFormat;
@property (getter=isOutputFormatCompressed, nonatomic, readonly) bool outputFormatCompressed;
@property (nonatomic) unsigned int outputHeight;
@property (nonatomic) bool outputMirroring;
@property (nonatomic) int outputOrientation;
@property (nonatomic, readonly) NSDictionary *outputPixelBufferAttributes;
@property (nonatomic) unsigned int outputWidth;
@property (nonatomic) int payloadType;
@property (nonatomic) bool portraitEffectsMatteDeliveryEnabled;
@property (nonatomic) float portraitLightingEffectStrength;
@property (nonatomic) bool previewEnabled;
@property (nonatomic) unsigned int previewFormat;
@property (nonatomic) unsigned int previewHeight;
@property (nonatomic) bool previewMirroring;
@property (nonatomic) int previewOrientation;
@property (nonatomic, readonly) NSDictionary *previewPixelBufferAttributes;
@property (nonatomic) unsigned int previewWidth;
@property (nonatomic, copy) NSArray *processedImageFilters;
@property (nonatomic) bool providesOriginalImage;
@property (nonatomic) int qualityPrioritization;
@property (nonatomic) int rawOutputFileType;
@property (nonatomic) unsigned int rawOutputFormat;
@property (nonatomic) bool rawThumbnailEnabled;
@property (nonatomic) unsigned int rawThumbnailFormat;
@property (nonatomic) unsigned int rawThumbnailHeight;
@property (nonatomic) unsigned int rawThumbnailWidth;
@property (nonatomic) float scaleFactor;
@property (nonatomic, readonly) long long settingsID;
@property (nonatomic) int settingsProvider;
@property (nonatomic) unsigned int shutterSound;
@property (nonatomic) float simulatedAperture;
@property (nonatomic, copy) NSDictionary *spatialOverCaptureMetadata;
@property (nonatomic, copy) NSDictionary *spatialOverCaptureMetadataForOriginalImage;
@property (nonatomic) bool squareCropEnabled;
@property (nonatomic) double stillImageCaptureAbsoluteStartTime;
@property (nonatomic) long long stillImageCaptureStartTime;
@property (nonatomic) long long stillImageRequestTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageUserInitiatedRequestPTS;
@property (nonatomic) unsigned long long stillImageUserInitiatedRequestTime;
@property (nonatomic) bool thumbnailEnabled;
@property (nonatomic) unsigned int thumbnailFormat;
@property (nonatomic) unsigned int thumbnailHeight;
@property (nonatomic) unsigned int thumbnailWidth;
@property (getter=isUserInitiatedRequestSettings, nonatomic) bool userInitiatedRequestSettings;
@property (nonatomic) float videoStabilizationOverscanCropMultiplier;
@property (nonatomic, copy) NSDictionary *vtCompressionProperties;
@property (nonatomic) int wideColorMode;
@property (getter=isZoomWithoutUpscalingEnabled, nonatomic) bool zoomWithoutUpscalingEnabled;

+ (bool)supportsSecureCoding;

- (int)HDRMode;
- (float*)ISOs;
- (id)_initWithSettingsID:(long long)arg1 captureRequestIdentifier:(id)arg2 imageGroupIdentifier:(id)arg3;
- (void)_teardownBracketStorage;
- (bool)autoDeferredProcessingEnabled;
- (bool)autoRedEyeReductionEnabled;
- (bool)autoSpatialOverCaptureEnabled;
- (unsigned int)bracketImageCount;
- (int)bracketType;
- (id)bravoConstituentImageDeliveryDeviceTypes;
- (int)bravoImageFusionMode;
- (bool)burstQualityCaptureEnabled;
- (bool)cameraCalibrationDataDeliveryEnabled;
- (id)captureRequestIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)depthDataDeliveryEnabled;
- (bool)depthDataFiltered;
- (id)description;
- (int)digitalFlashMode;
- (bool)embedsDepthDataInImage;
- (bool)embedsPortraitEffectsMatteInImage;
- (bool)embedsSemanticSegmentationMattesInImage;
- (id)enabledSemanticSegmentationMatteURNs;
- (void)encodeWithCoder:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; }*)exposureDurations;
- (float*)exposureTargetBiases;
- (id)figCaptureIrisPreparedSettingsRepresentation;
- (int)flashMode;
- (unsigned long long)hash;
- (id)imageGroupIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettingsID:(long long)arg1;
- (bool)isBeginMomentCaptureSettings;
- (bool)isClientInitiatedPrepareSettings;
- (bool)isEqual:(id)arg1;
- (bool)isOutputFormatCompressed;
- (bool)isUserInitiatedRequestSettings;
- (bool)isZoomWithoutUpscalingEnabled;
- (bool)lensStabilizationDuringBracketEnabled;
- (id)metadata;
- (id)metadataForOriginalImage;
- (bool)noiseReductionEnabled;
- (id)originalImageFilters;
- (int)outputFileType;
- (unsigned int)outputFormat;
- (unsigned int)outputHeight;
- (bool)outputMirroring;
- (int)outputOrientation;
- (id)outputPixelBufferAttributes;
- (unsigned int)outputWidth;
- (int)payloadType;
- (bool)portraitEffectsMatteDeliveryEnabled;
- (float)portraitLightingEffectStrength;
- (bool)previewEnabled;
- (unsigned int)previewFormat;
- (unsigned int)previewHeight;
- (bool)previewMirroring;
- (int)previewOrientation;
- (id)previewPixelBufferAttributes;
- (unsigned int)previewWidth;
- (id)processedImageFilters;
- (bool)providesOriginalImage;
- (int)qualityPrioritization;
- (int)rawOutputFileType;
- (unsigned int)rawOutputFormat;
- (bool)rawThumbnailEnabled;
- (unsigned int)rawThumbnailFormat;
- (unsigned int)rawThumbnailHeight;
- (unsigned int)rawThumbnailWidth;
- (float)scaleFactor;
- (void)setAutoDeferredProcessingEnabled:(bool)arg1;
- (void)setAutoRedEyeReductionEnabled:(bool)arg1;
- (void)setAutoSpatialOverCaptureEnabled:(bool)arg1;
- (void)setBeginMomentCaptureSettings:(bool)arg1;
- (void)setBracketType:(int)arg1 imageCount:(unsigned int)arg2;
- (void)setBravoConstituentImageDeliveryDeviceTypes:(id)arg1;
- (void)setBravoImageFusionMode:(int)arg1;
- (void)setBurstQualityCaptureEnabled:(bool)arg1;
- (void)setCameraCalibrationDataDeliveryEnabled:(bool)arg1;
- (void)setClientInitiatedPrepareSettings:(bool)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setDepthDataFiltered:(bool)arg1;
- (void)setDigitalFlashMode:(int)arg1;
- (void)setEmbedsDepthDataInImage:(bool)arg1;
- (void)setEmbedsPortraitEffectsMatteInImage:(bool)arg1;
- (void)setEmbedsSemanticSegmentationMattesInImage:(bool)arg1;
- (void)setEnabledSemanticSegmentationMatteURNs:(id)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setHDRMode:(int)arg1;
- (void)setImageGroupIdentifier:(id)arg1;
- (void)setLensStabilizationDuringBracketEnabled:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataForOriginalImage:(id)arg1;
- (void)setNoiseReductionEnabled:(bool)arg1;
- (void)setOriginalImageFilters:(id)arg1;
- (void)setOutputFileType:(int)arg1;
- (void)setOutputFormat:(unsigned int)arg1;
- (void)setOutputHeight:(unsigned int)arg1;
- (void)setOutputMirroring:(bool)arg1;
- (void)setOutputOrientation:(int)arg1;
- (void)setOutputWidth:(unsigned int)arg1;
- (void)setPayloadType:(int)arg1;
- (void)setPortraitEffectsMatteDeliveryEnabled:(bool)arg1;
- (void)setPortraitLightingEffectStrength:(float)arg1;
- (void)setPreviewEnabled:(bool)arg1;
- (void)setPreviewFormat:(unsigned int)arg1;
- (void)setPreviewHeight:(unsigned int)arg1;
- (void)setPreviewMirroring:(bool)arg1;
- (void)setPreviewOrientation:(int)arg1;
- (void)setPreviewWidth:(unsigned int)arg1;
- (void)setProcessedImageFilters:(id)arg1;
- (void)setProvidesOriginalImage:(bool)arg1;
- (void)setQualityPrioritization:(int)arg1;
- (void)setRawOutputFileType:(int)arg1;
- (void)setRawOutputFormat:(unsigned int)arg1;
- (void)setRawThumbnailEnabled:(bool)arg1;
- (void)setRawThumbnailFormat:(unsigned int)arg1;
- (void)setRawThumbnailHeight:(unsigned int)arg1;
- (void)setRawThumbnailWidth:(unsigned int)arg1;
- (void)setScaleFactor:(float)arg1;
- (void)setSettingsProvider:(int)arg1;
- (void)setShutterSound:(unsigned int)arg1;
- (void)setSimulatedAperture:(float)arg1;
- (void)setSpatialOverCaptureMetadata:(id)arg1;
- (void)setSpatialOverCaptureMetadataForOriginalImage:(id)arg1;
- (void)setSquareCropEnabled:(bool)arg1;
- (void)setStillImageCaptureAbsoluteStartTime:(double)arg1;
- (void)setStillImageCaptureStartTime:(long long)arg1;
- (void)setStillImageRequestTime:(long long)arg1;
- (void)setStillImageUserInitiatedRequestPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStillImageUserInitiatedRequestTime:(unsigned long long)arg1;
- (void)setThumbnailEnabled:(bool)arg1;
- (void)setThumbnailFormat:(unsigned int)arg1;
- (void)setThumbnailHeight:(unsigned int)arg1;
- (void)setThumbnailWidth:(unsigned int)arg1;
- (void)setUserInitiatedRequestSettings:(bool)arg1;
- (void)setVideoStabilizationOverscanCropMultiplier:(float)arg1;
- (void)setVtCompressionProperties:(id)arg1;
- (void)setWideColorMode:(int)arg1;
- (void)setZoomWithoutUpscalingEnabled:(bool)arg1;
- (long long)settingsID;
- (int)settingsProvider;
- (unsigned int)shutterSound;
- (float)simulatedAperture;
- (id)spatialOverCaptureMetadata;
- (id)spatialOverCaptureMetadataForOriginalImage;
- (bool)squareCropEnabled;
- (double)stillImageCaptureAbsoluteStartTime;
- (long long)stillImageCaptureStartTime;
- (long long)stillImageRequestTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageUserInitiatedRequestPTS;
- (unsigned long long)stillImageUserInitiatedRequestTime;
- (bool)thumbnailEnabled;
- (unsigned int)thumbnailFormat;
- (unsigned int)thumbnailHeight;
- (unsigned int)thumbnailWidth;
- (float)videoStabilizationOverscanCropMultiplier;
- (id)vtCompressionProperties;
- (int)wideColorMode;

@end
