/* Generated by RuntimeBrowser.
 */

@protocol CoreTelephonyShimDelegate <NSObject>

@optional

- (void)ctServerConnectionNotification:(struct __CFString { }*)arg1 notificationInfo:(struct __CFDictionary { }*)arg2;
- (void)currentDataSIMIdentifier:(NSString *)arg1;
- (void)infoDataStallChangedForSubscription:(NSDictionary *)arg1;
- (void)infoDataTransferTimeChangedForSubscription:(NSDictionary *)arg1;
- (void)infoDataTransferTimeEnabledChangedForSubscription:(NSDictionary *)arg1;
- (void)infoLinkPowerCostChangedForSubscription:(NSDictionary *)arg1;
- (void)infoLinkQualityFingeprintChangedForSubscription:(NSDictionary *)arg1;
- (void)infoLinkStateChangedForSubscription:(NSDictionary *)arg1;
- (void)infoTrafficClassChangedForSubscription:(NSDictionary *)arg1;
- (void)operatorNameChangedForSubscription:(NSDictionary *)arg1;
- (void)signalStrengthChangedForSubscription:(NSDictionary *)arg1;

@end