/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAsyncSerialQueue : NSObject {
    NSOperationQueue * _serialOperationQueue;
}

@property (nonatomic, retain) NSOperationQueue *serialOperationQueue;
@property (nonatomic) bool suspended;
@property (nonatomic, readonly) NSOperationQueue *underlyingOperationQueue;

- (void).cxx_destruct;
- (void)cancelAllBlocks;
- (void)enqueueBlock:(id /* block */)arg1;
- (void)enqueueBlockForMainThread:(id /* block */)arg1;
- (void)enqueueOperation:(id)arg1;
- (id)init;
- (id)initWithQualityOfService:(long long)arg1;
- (id)serialOperationQueue;
- (void)setSerialOperationQueue:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (bool)suspended;
- (id)underlyingOperationQueue;
- (void)withQualityOfService:(long long)arg1 enqueueBlockForMainThread:(id /* block */)arg2;

@end
