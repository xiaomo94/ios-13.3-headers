/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDeferredContainerPixelBufferPoolWrapper : NSObject {
    BWPixelBufferPool * _pool;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

- (void)dealloc;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3;
- (struct __CVBuffer { }*)newPixelBuffer;
- (void)signal;

@end
