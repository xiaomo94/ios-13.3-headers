/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSRichNotificationMetricsEvent : AMSMetricsEvent

@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic) bool postedSuccessfully;

+ (id)_centerForBundleId:(id)arg1;
+ (id)eventFromMetricsDictionary:(id)arg1 centerBundleId:(id)arg2;
+ (id)eventFromNotificationCenterSettings:(id)arg1 centerBundleId:(id)arg2;

- (id)errorDescription;
- (id)initWithTopic:(id)arg1 settings:(id)arg2 centerBundleId:(id)arg3;
- (bool)postedSuccessfully;
- (void)setErrorDescription:(id)arg1;
- (void)setPostedSuccessfully:(bool)arg1;

@end
