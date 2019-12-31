/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLCommandBuffer : _MTLObjectWithLabel {
    bool  _StatEnabled;
    unsigned long long  _commitTime;
    bool  _completedCallbacksDone;
    struct MTLDispatch { struct MTLDispatch {} *x1; id /* block */ x2; } * _completedDispatchList;
    struct MTLDispatch { struct MTLDispatch {} *x1; id /* block */ x2; } * _completedDispatchListTail;
    unsigned long long  _completionHandlerEnqueueTime;
    unsigned long long  _completionHandlerExecutionTime;
    unsigned long long  _completionInterruptTime;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _cond;
    unsigned long long  _creationTime;
    <MTLCommandEncoder> * _currentCommandEncoder;
    unsigned long long  _enqueueTime;
    NSError * _error;
    unsigned long long  _globalTraceObjectID;
    unsigned long long  _gpuEndTime;
    unsigned long long  _gpuStartTime;
    bool  _hasPresent;
    unsigned long long  _kernelEndTime;
    unsigned long long  _kernelStartTime;
    unsigned long long  _labelTraceID;
    unsigned long long  _listIndex;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    unsigned long long  _numEncoders;
    unsigned long long  _numThisCommandBuffer;
    bool  _ownedByParallelEncoder;
    id /* block */  _perfSampleHandlerBlock;
    bool  _profilingEnabled;
    NSDictionary * _profilingResults;
    _MTLCommandQueue<MTLCommandQueue> * _queue;
    NSMutableArray * _retainedObjects;
    bool  _retainedReferences;
    bool  _scheduledCallbacksDone;
    struct MTLDispatch { struct MTLDispatch {} *x1; id /* block */ x2; } * _scheduledDispatchList;
    struct MTLDispatch { struct MTLDispatch {} *x1; id /* block */ x2; } * _scheduledDispatchListTail;
    bool  _skipRender;
    unsigned long long  _status;
    bool  _strongObjectReferences;
    unsigned long long  _submitToHardwareTime;
    unsigned long long  _submitToKernelTime;
    struct MTLSyncDispatch { struct MTLSyncDispatch {} *x1; id /* block */ x2; } * _syncDispatchList;
    struct MTLSyncDispatch { struct MTLSyncDispatch {} *x1; id /* block */ x2; } * _syncDispatchListTail;
    bool  _synchronousDebugMode;
    NSMutableDictionary * _userDictionary;
    bool  _wakeOnCommit;
}

@property (nonatomic, readonly) double GPUEndTime;
@property (nonatomic, readonly) double GPUStartTime;
@property (getter=isStatEnabled, nonatomic) bool StatEnabled;
@property (readonly) <MTLCommandQueue> *commandQueue;
@property (readonly) NSError *error;
@property (readonly) unsigned long long globalTraceObjectID;
@property (nonatomic, readonly) double kernelEndTime;
@property (nonatomic, readonly) double kernelStartTime;
@property (copy) NSString *label;
@property (getter=getListIndex, nonatomic) unsigned long long listIndex;
@property (nonatomic) unsigned long long numEncoders;
@property (nonatomic) unsigned long long numThisCommandBuffer;
@property (nonatomic) bool ownedByParallelEncoder;
@property (getter=isProfilingEnabled) bool profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly) bool retainedReferences;
@property (readonly) unsigned long long status;
@property (readonly) bool synchronousDebugMode;
@property (nonatomic, readonly) NSMutableDictionary *userDictionary;

+ (void)initialize;

- (double)GPUEndTime;
- (double)GPUStartTime;
- (void)_addRetainedObject:(id)arg1;
- (void)addCompletedHandler:(id /* block */)arg1;
- (void)addScheduledHandler:(id /* block */)arg1;
- (void)addSynchronizationNotification:(id /* block */)arg1;
- (id)commandQueue;
- (void)commit;
- (void)commitAndHold;
- (void)commitAndReset;
- (bool)commitAndWaitUntilSubmitted;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (void)dealloc;
- (void*)debugBufferContentsWithLength:(unsigned long long*)arg1;
- (id)description;
- (void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)didSchedule:(unsigned long long)arg1 error:(id)arg2;
- (void)didScheduleWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)enqueue;
- (id)error;
- (void)executeSynchronizationNotifications:(int)arg1;
- (void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id*)arg3 count:(unsigned long long)arg4;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)getAndIncrementNumEncoders;
- (unsigned long long)getListIndex;
- (unsigned long long)globalTraceObjectID;
- (id)initWithQueue:(id)arg1 retainedReferences:(bool)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(bool)arg2 synchronousDebugMode:(bool)arg3;
- (bool)isCommitted;
- (bool)isProfilingEnabled;
- (bool)isStatEnabled;
- (double)kernelEndTime;
- (double)kernelStartTime;
- (void)kernelSubmitTime;
- (unsigned long long)numEncoders;
- (unsigned long long)numThisCommandBuffer;
- (bool)ownedByParallelEncoder;
- (void)popDebugGroup;
- (void)presentDrawable:(id)arg1;
- (void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (id)profilingResults;
- (void)pushDebugGroup:(id)arg1;
- (bool)retainedReferences;
- (void)runPerfCounterCallbackWithBlock:(id /* block */)arg1;
- (void)setCommitted:(bool)arg1;
- (void)setCurrentCommandEncoder:(id)arg1;
- (void)setListIndex:(unsigned long long)arg1;
- (void)setNumEncoders:(unsigned long long)arg1;
- (void)setNumThisCommandBuffer:(unsigned long long)arg1;
- (void)setOwnedByParallelEncoder:(bool)arg1;
- (void)setProfilingEnabled:(bool)arg1;
- (void)setStatEnabled:(bool)arg1;
- (bool)skipRender;
- (unsigned long long)status;
- (bool)synchronousDebugMode;
- (id)userDictionary;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
