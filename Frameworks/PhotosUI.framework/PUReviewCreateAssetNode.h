/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUReviewCreateAssetNode : PXRunNode <PUReviewAssetNode> {
    <PUAdjustmentURLNode> * _adjustmentURLNode;
    <PUReviewImageURLNode> * _imageInfoNode;
    PUReviewAsset * _inputAsset;
    <PUImageDataRenderNode> * _renderImageDataNode;
    <PUImageInfoNode> * _renderImageInfoNode;
    <PUVideoAssetNode> * _renderVideoAssetNode;
    <PUVideoURLExportNode> * _renderVideoURLNode;
    PUReviewAsset * _reviewAsset;
    <PUVideoAssetNode> * _videoAssetNode;
    <PUReviewVideoURLNode> * _videoURLNode;
}

@property (nonatomic, readonly) <PUAdjustmentURLNode> *adjustmentURLNode;
@property (getter=isCanceled, readonly) bool canceled;
@property (getter=isComplete, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PUReviewImageURLNode> *imageInfoNode;
@property (nonatomic, readonly) PUReviewAsset *inputAsset;
@property (nonatomic, readonly) <PUImageDataRenderNode> *renderImageDataNode;
@property (nonatomic, readonly) <PUImageInfoNode> *renderImageInfoNode;
@property (nonatomic, readonly) <PUVideoAssetNode> *renderVideoAssetNode;
@property (nonatomic, readonly) <PUVideoURLExportNode> *renderVideoURLNode;
@property (nonatomic, readonly) PUReviewAsset *reviewAsset;
@property (getter=isRunning, readonly) bool running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PUVideoAssetNode> *videoAssetNode;
@property (nonatomic, readonly) <PUReviewVideoURLNode> *videoURLNode;
@property (getter=isWaiting, readonly) bool waiting;

- (void).cxx_destruct;
- (id)adjustmentURLNode;
- (id)imageInfoNode;
- (id)initWithInputAsset:(id)arg1 imageInfoNode:(id)arg2 renderImageInfoNode:(id)arg3 renderImageDataNode:(id)arg4 videoURLNode:(id)arg5 videoAssetNode:(id)arg6 renderVideoURLNode:(id)arg7 renderVideoAssetNode:(id)arg8 adjustmentURLNode:(id)arg9;
- (id)inputAsset;
- (id)renderImageDataNode;
- (id)renderImageInfoNode;
- (id)renderVideoAssetNode;
- (id)renderVideoURLNode;
- (id)reviewAsset;
- (void)run;
- (id)videoAssetNode;
- (id)videoURLNode;

@end
