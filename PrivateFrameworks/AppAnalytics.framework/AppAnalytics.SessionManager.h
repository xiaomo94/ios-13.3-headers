/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
 */

@interface AppAnalytics.SessionManager : Swift._SwiftObject <AAFlushable> {
    void accessQueue;
    void dataStacks;
    void flushProcessor;
    void observers;
    void options;
    void processorManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  state;
    void suspendCount;
    void tracker;
}

- (void)flushWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;

@end
