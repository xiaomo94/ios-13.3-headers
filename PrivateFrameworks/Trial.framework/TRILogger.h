/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRILogger : NSObject {
    PETEventTracker2 * _eventTracker;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    int  _projectId;
}

- (void).cxx_destruct;
- (void)_dispatchLogEvent:(id)arg1;
- (id)init;
- (id)initWithProjectId:(int)arg1;
- (void)logEvent:(id)arg1;
- (void)logWithTrackingId:(id)arg1 logLevel:(long long)arg2 message:(id)arg3;
- (void)logWithTrackingId:(id)arg1 logLevel:(long long)arg2 message:(id)arg3 args:(char *)arg4;
- (void)logWithTrackingId:(id)arg1 message:(id)arg2;
- (void)logWithTrackingId:(id)arg1 metric:(id)arg2;
- (void)logWithTrackingId:(id)arg1 metric:(id)arg2 dimensions:(id)arg3;
- (void)logWithTrackingId:(id)arg1 metrics:(id)arg2 dimensions:(id)arg3;
- (id)messageWithOneofField:(id)arg1 withName:(id)arg2;

@end
