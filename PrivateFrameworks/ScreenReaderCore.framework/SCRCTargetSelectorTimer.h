/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {
    id /* block */  _block;
    bool  _createdTimer;
    bool  _isCanceled;
    bool  _isPending;
    id  _key;
    NSLock * _lock;
    id  _object;
    struct __CFRunLoopTimer { } * _timer;
}

+ (void)_assignThreadPriority;
+ (void)_runThread;
+ (void)initialize;

- (void).cxx_destruct;
- (bool)_createdTimer;
- (void)_dispatch;
- (void)_dispatchMainThread;
- (void)_dispatchSCRCThread;
- (void)_dispatchThreadHelper:(id /* block */)arg1;
- (id)_initWithTarget:(id)arg1 selector:(SEL)arg2 threadKeyOrThread:(id)arg3;
- (void)_runTimerBlock:(id /* block */)arg1;
- (void)cancel;
- (void)dealloc;
- (void)dispatchAfterDelay:(double)arg1;
- (void)dispatchAfterDelay:(double)arg1 withBlock:(id /* block */)arg2;
- (void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 thread:(id)arg3;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3;
- (void)invalidate;
- (bool)isCanceled;
- (bool)isCancelled;
- (bool)isPending;
- (id)threadKey;

@end
