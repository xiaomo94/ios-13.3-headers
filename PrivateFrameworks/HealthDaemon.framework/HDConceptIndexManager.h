/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDConceptIndexManager : NSObject <HDDataObserver> {
    unsigned long long  _batchSize;
    NSMutableArray * _completionBlocks;
    HDConceptIndexer * _conceptIndexer;
    <HDBlockDispatcher> * _dispatcher;
    unsigned long long  _executionState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _executionStateLock;
    bool  _isEnabled;
    HKObserverSet * _observerSet;
    HDProfile * _profile;
}

@property (nonatomic, readonly) HDConceptIndexer *conceptIndexer;
@property (readonly) unsigned long long currentExecutionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_updateConceptIndexWithBlockDispatcher:(id)arg1 conceptIndexer:(id)arg2 batchSize:(long long)arg3 initialCount:(long long)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)conceptIndexer;
- (unsigned long long)currentExecutionState;
- (id)init;
- (id)initWithBlockDispatcher:(id)arg1 batchSize:(unsigned long long)arg2 profile:(id)arg3;
- (void)invalidateAndWait;
- (void)removeObserver:(id)arg1;
- (void)resetWithReindex:(bool)arg1 completion:(id /* block */)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)startWithDescription:(id)arg1;
- (void)stopWithDescription:(id)arg1;
- (void)updateConceptIndexWithCompletion:(id /* block */)arg1;
- (void)updateWithDescription:(id)arg1;

@end
