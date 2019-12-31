/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface AR2DSkeletonDetectionPostProcessGPU : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLTexture> * _input;
    <MTLTexture> * _intermediate;
    <MTLTexture> * _output;
    float * _outputBuffer;
    <MTLComputePipelineState> * _pipelineStateInterpolate;
    <MTLComputePipelineState> * _pipelineStateMaxFilter;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (float*)process:(float*)arg1 counter:(unsigned int*)arg2;

@end
