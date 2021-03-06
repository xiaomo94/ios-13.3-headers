/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraClipsQuotaManager : NSObject <HMDDatabaseDelegate, HMFLogging> {
    HMBCloudDatabase * _cloudDatabase;
    bool  _enabled;
}

@property (readonly) HMBCloudDatabase *cloudDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_quotaErrorFromServerError:(id)arg1;
+ (id)_quotaServerErrorFromServerError:(id)arg1;
+ (id)defaultManager;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)_addFunctionInvokeOperationWithFunctionName:(id)arg1 serializedRequest:(id)arg2;
- (id)cloudDatabase;
- (id)database:(id)arg1 willRemoveOwnedZoneWithName:(id)arg2;
- (id)disableCloudStorageForZoneWithName:(id)arg1;
- (id)enableCloudStorageForZoneWithName:(id)arg1;
- (id)initWithDatabase:(id)arg1 isEnabled:(bool)arg2;
- (bool)isEnabled;
- (id)logIdentifier;

@end
