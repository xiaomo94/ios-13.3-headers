/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKUploadRequestManager : NSObject {
    CKUploadRequestManagerInternals * _internals;
}

@property (nonatomic, readonly) NSString *activityIdentifierForSchedulingRepairs;
@property (copy) id /* block */ assetRequestCallback;
@property (nonatomic, readonly) CKUploadRequestPersistentStore *database;
@property (nonatomic, readonly) CKUploadRequestManagerInternals *internals;
@property (copy) NSString *machServiceName;
@property (copy) id /* block */ packageRequestCallback;
@property (nonatomic, readonly) CKContainer *repairContainer;
@property (nonatomic, readonly) CKSyncEngine *repairZoneSyncEngine;

+ (id)activityIdentifierForSchedulingRepairsInContainer:(id)arg1;
+ (double)cancelledErrorRetryTime;
+ (double)recurringFetchPeriod;
+ (double)retryableErrorMaxRetryCount;
+ (double)retryableErrorRetryTime;
+ (double)tryAgainLaterRetryTime;

- (void).cxx_destruct;
- (id)activityIdentifierForSchedulingRepairs;
- (id /* block */)assetRequestCallback;
- (void)cancelAllOperations;
- (id)database;
- (void)dealloc;
- (void)fetchServerChanges:(id /* block */)arg1;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ignoringSystemConditions:(bool)arg3;
- (id)internals;
- (id)machServiceName;
- (void)manuallyTriggerUploadRequests;
- (id /* block */)packageRequestCallback;
- (void)registerForItemRequests;
- (id)repairContainer;
- (id)repairZoneSyncEngine;
- (void)scheduleOrInvokeRepairsNow;
- (void)setAssetRequestCallback:(id /* block */)arg1;
- (void)setCallback:(id /* block */)arg1 forOverridePoint:(long long)arg2;
- (void)setMachServiceName:(id)arg1;
- (void)setPackageRequestCallback:(id /* block */)arg1;
- (void)unregister;

@end
