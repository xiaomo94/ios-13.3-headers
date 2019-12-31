/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWScheduler : NSObject {
    AWAttentionSampler * _attentionSampler;
    NSMutableArray * _clients;
    <AWSchedulerObserver> * _observer;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) AWAttentionSampler *attentionSampler;
@property (nonatomic) <AWSchedulerObserver> *observer;

+ (id)sharedScheduler;
+ (id)sharedUnitTestScheduler;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (void)armEvents;
- (id)attentionSampler;
- (id)description;
- (id)initForUnitTest:(bool)arg1;
- (id)observer;
- (void)processHIDEvent:(struct __IOHIDEvent { }*)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;
- (void)reevaluate;
- (void)removeInvalidClients;
- (void)removeInvalidClientsWithConnection:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setSmartCoverClosed:(bool)arg1;

@end
