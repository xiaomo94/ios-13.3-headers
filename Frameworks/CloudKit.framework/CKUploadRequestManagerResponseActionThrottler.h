/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKUploadRequestManagerResponseActionThrottler : NSObject {
    NSSet * _actionsToThrottle;
    double  _maximumThrottleTime;
    double  _minimumRetryTime;
    long long  _minimumThrottleCount;
    NSMutableDictionary * _responseActionToMetadata;
    double  _throttlePeriod;
}

@property (nonatomic, copy) NSSet *actionsToThrottle;
@property (nonatomic) double maximumThrottleTime;
@property (nonatomic) double minimumRetryTime;
@property (nonatomic) long long minimumThrottleCount;
@property (nonatomic, retain) NSMutableDictionary *responseActionToMetadata;
@property (nonatomic) double throttlePeriod;

+ (double)currentTime;
+ (void)sleep:(double)arg1;

- (void).cxx_destruct;
- (id)actionsToThrottle;
- (void)gateResponseAction:(long long)arg1 isRetry:(bool)arg2;
- (void)gateResponseAction:(long long)arg1 isRetry:(bool)arg2 currentTime:(double)arg3;
- (id)init;
- (double)maximumThrottleTime;
- (double)minimumRetryTime;
- (long long)minimumThrottleCount;
- (id)responseActionToMetadata;
- (void)setActionsToThrottle:(id)arg1;
- (void)setMaximumThrottleTime:(double)arg1;
- (void)setMinimumRetryTime:(double)arg1;
- (void)setMinimumThrottleCount:(long long)arg1;
- (void)setResponseActionToMetadata:(id)arg1;
- (void)setThrottlePeriod:(double)arg1;
- (double)throttlePeriod;
- (double)throttleTimeForCount:(long long)arg1 isRetry:(bool)arg2;

@end
