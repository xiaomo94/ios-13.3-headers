/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSUserNotificationCenter : NSObject {
    <AMSUserNotificationStrategy> * _strategy;
}

@property (nonatomic, readonly) <AMSUserNotificationStrategy> *strategy;

+ (Class)_determineStrategyForBundleId:(id)arg1;
+ (id)activeNotificationsWithCenterBundleId:(id)arg1;
+ (id)postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3;
+ (id)removeNotification:(id)arg1 centerBundleId:(id)arg2;
+ (id)removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3;

- (void).cxx_destruct;
- (id)strategy;

@end
