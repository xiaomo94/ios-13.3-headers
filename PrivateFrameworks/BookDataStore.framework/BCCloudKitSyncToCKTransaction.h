/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

@interface BCCloudKitSyncToCKTransaction : BCCloudKitTransaction {
    BCCloudDataSyncManager * _syncManager;
}

@property (nonatomic, retain) BCCloudDataSyncManager *syncManager;

+ (id)transactionNameForEntityName:(id)arg1;

- (void).cxx_destruct;
- (double)coalescingDelay;
- (id)initWithEntityName:(id)arg1 syncManager:(id)arg2 delegate:(id)arg3;
- (void)performWorkWithCompletion:(id /* block */)arg1;
- (void)setSyncManager:(id)arg1;
- (id)syncManager;
- (double)transactionLifetimeTimout;

@end
