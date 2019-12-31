/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWRenderListProcessor : NSObject {
    NSObject<OS_dispatch_queue> * _configurationMutexQueue;
    bool  _configurationQueueAlwaysEmitsOriginalResult;
    struct opaqueCMFormatDescription { } * _mostRecentFormatDescription;
    NSObject<OS_dispatch_group> * _renderingGroup;
    BWPixelBufferPool * _renderingPool;
}

@property (nonatomic) bool alwaysEmitsOriginalResult;
@property (nonatomic, readonly) BWPixelBufferPool *renderingPool;

+ (void)initialize;

- (void)_continueRenderingUsingRenderList:(id)arg1 result:(unsigned long long)arg2 resultError:(id)arg3 fromRendererNode:(struct BWRenderListRendererNode { struct { struct BWRenderListRendererNode {} *x_1_1_1; } x1; id x2; }*)arg4 parameterNode:(struct BWRenderListParameterNode { struct { struct BWRenderListParameterNode {} *x_1_1_1; } x1; id x2; }*)arg5 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg6 inputPixelBuffer:(struct __CVBuffer { }*)arg7 finalResultHandler:(id /* block */)arg8;
- (void)_emitProcessedSampleBufferFromRenderList:(id)arg1 result:(unsigned long long)arg2 resultError:(id)arg3 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 finalResultHandler:(id /* block */)arg6;
- (void)_finishRenderingUsingRenderList:(id)arg1 result:(unsigned long long)arg2 resultError:(id)arg3 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 finalResultHandler:(id /* block */)arg6;
- (void)_processRenderList:(id)arg1 parameterListProvider:(id)arg2 inputPixelBuffer:(struct __CVBuffer { }*)arg3 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4 resultHandler:(id /* block */)arg5;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingRenderList:(id)arg2;
- (bool)alwaysEmitsOriginalResult;
- (void)dealloc;
- (id)initWithRenderingPool:(id)arg1;
- (void)processRenderList:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 resultHandler:(id /* block */)arg4;
- (void)processRenderList:(id)arg1 withParameters:(id)arg2 inputPixelBuffer:(struct __CVBuffer { }*)arg3 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4 resultHandler:(id /* block */)arg5;
- (id)renderingPool;
- (void)setAlwaysEmitsOriginalResult:(bool)arg1;
- (void)waitForAllProcessingToComplete;

@end
