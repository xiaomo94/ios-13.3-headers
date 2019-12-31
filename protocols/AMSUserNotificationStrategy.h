/* Generated by RuntimeBrowser.
 */

@protocol AMSUserNotificationStrategy

@required

+ (NSArray *)_activeNotificationsWithCenterBundleId:(NSString *)arg1;
+ (AMSBinaryPromise *)_postNotification:(AMSUserNotification *)arg1 bag:(id <AMSBagProtocol>)arg2 centerBundleId:(NSString *)arg3;
+ (AMSBinaryPromise *)_removeNotification:(AMSUserNotification *)arg1 centerBundleId:(NSString *)arg2;
+ (AMSBinaryPromise *)_removeNotificationWithIdentifier:(NSString *)arg1 centerBundleId:(NSString *)arg2 logKey:(NSString *)arg3;

@end