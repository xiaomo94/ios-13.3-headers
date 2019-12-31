/* Generated by RuntimeBrowser.
 */

@protocol PXGTextureConverter <NSObject>

@required

- (PXGPayloadTexture *)createPayloadTextureFromPayload:(id <NSCopying>)arg1;
- (<PXGTextureAtlasManager> *)createTextureAtlasManagerForImageDataSpec:(struct { unsigned long long x1; unsigned short x2; unsigned short x3; })arg1;
- (PXGImageTexture *)createTextureFromCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2;
- (PXGImageTexture *)createTextureFromCVPixelBuffer:(struct __CVBuffer { }*)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (int)presentationType;
- (NSObject<OS_dispatch_queue> *)processingQueue;
- (NSObject<OS_dispatch_queue> *)requestQueue;
- (void)setProcessingQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setRequestQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (bool)supportsTextureAtlas;
- (PXGImageTexture *)transparentTexture;

@end
