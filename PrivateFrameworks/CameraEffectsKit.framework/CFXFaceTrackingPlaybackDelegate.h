/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface CFXFaceTrackingPlaybackDelegate : NSObject <PVCompositeDelegate> {
    AVAssetTrack * _arFrameMetadataAssetTrack;
    AVAssetReaderOutputMetadataAdaptor * _assetReaderOutputMetadataAdaptor;
    AVMetadataItem * _currentMetadataItem;
    AVAssetTrack * _faceAnchorMetadataAssetTrack;
    AVAssetReader * _metadataAssetReader;
    AVAssetTrack * _metadataAssetTrack;
    AVAssetReaderTrackOutput * _metadataTrackReaderOutput;
    AVMetadataItem * _nextMetadataItem;
    ARFrame * _stillImageARFrame;
    JTFaceAnchor * _stillImageFaceAnchor;
}

@property (nonatomic, retain) AVAssetTrack *arFrameMetadataAssetTrack;
@property (nonatomic, retain) AVAssetReaderOutputMetadataAdaptor *assetReaderOutputMetadataAdaptor;
@property (nonatomic, retain) AVMetadataItem *currentMetadataItem;
@property (nonatomic, retain) AVAssetTrack *faceAnchorMetadataAssetTrack;
@property (nonatomic, retain) AVAssetReader *metadataAssetReader;
@property (nonatomic, retain) AVAssetTrack *metadataAssetTrack;
@property (nonatomic, retain) AVAssetReaderTrackOutput *metadataTrackReaderOutput;
@property (nonatomic, retain) AVMetadataItem *nextMetadataItem;
@property (nonatomic, retain) ARFrame *stillImageARFrame;
@property (nonatomic, retain) JTFaceAnchor *stillImageFaceAnchor;

- (void).cxx_destruct;
- (id)CFX_ARFrameForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)CFX_JTFaceAnchorForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)CFX_setUpMetadataReaderForTrack:(id)arg1;
- (void)CFX_updateCurrentMetadataItemForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)arFrameMetadataAssetTrack;
- (id)assetReaderOutputMetadataAdaptor;
- (id)currentMetadataItem;
- (id)faceAnchorMetadataAssetTrack;
- (id)initWithAssetURL:(id)arg1;
- (id)initWithImageARFrame:(id)arg1;
- (id)initWithImageFaceAnchor:(id)arg1;
- (id)metadataAssetReader;
- (id)metadataAssetTrack;
- (id)metadataTrackReaderOutput;
- (id)nextMetadataItem;
- (id)renderWithInputs:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 metadata:(id)arg3;
- (void)setArFrameMetadataAssetTrack:(id)arg1;
- (void)setAssetReaderOutputMetadataAdaptor:(id)arg1;
- (void)setCurrentMetadataItem:(id)arg1;
- (void)setFaceAnchorMetadataAssetTrack:(id)arg1;
- (void)setMetadataAssetReader:(id)arg1;
- (void)setMetadataAssetTrack:(id)arg1;
- (void)setMetadataTrackReaderOutput:(id)arg1;
- (void)setNextMetadataItem:(id)arg1;
- (void)setStillImageARFrame:(id)arg1;
- (void)setStillImageFaceAnchor:(id)arg1;
- (id)stillImageARFrame;
- (id)stillImageFaceAnchor;

@end
