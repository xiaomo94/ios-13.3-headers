/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXNotificationsSettingsLogger : NSObject

+ (id)getAppGenreFromBundleId:(id)arg1;

- (id)convertToPBFormat:(id)arg1 setting:(id)arg2;
- (id)createPBSettingForBundleID:(id)arg1 settings:(id)arg2;
- (id)getAggregatedData:(id)arg1 totalApps:(int)arg2;
- (id)getAppUsageDataForBundleID:(id)arg1;
- (double)getSamplingRate;
- (void)logNotificationSettings;
- (id)retrieveLog;
- (id)retrieveSettingsForBundleIDs:(id)arg1;
- (id)wrapLog:(id)arg1;

@end
