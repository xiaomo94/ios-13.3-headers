/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKAbstractSyncController : NSObject {
    <IMDCKAbstractSyncControllerDelegate> * _delegate;
    bool  _isSyncing;
}

@property <IMDCKAbstractSyncControllerDelegate> *delegate;
@property (nonatomic) bool isSyncing;
@property (nonatomic, readonly) bool isUsingStingRay;
@property (nonatomic, readonly) IMDCKSyncState *syncState;

- (void).cxx_destruct;
- (bool)_fetchedAllChangesFromCloudKit;
- (void)addSyncDebuggingInfoToDictionary:(id)arg1;
- (id)ckUtilities;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (id)delegate;
- (bool)isSyncing;
- (bool)isUsingStingRay;
- (void)setBroadcastedSyncStateStateToFinished;
- (void)setBroadcastedSyncStateStateToStarting;
- (void)setBroadcastedSyncStateToDeleting;
- (void)setBroadcastedSyncStateToDownloading;
- (void)setBroadcastedSyncStateToStartingInitialSync;
- (void)setBroadcastedSyncStateToStartingPeriodicSync;
- (void)setBroadcastedSyncStateToUploading;
- (void)setDelegate:(id)arg1;
- (void)setIsSyncing:(bool)arg1;
- (void)syncBatchCompleted:(unsigned long long)arg1;
- (long long)syncControllerRecordType;
- (id)syncState;
- (id)syncStateDebuggingInfo:(id)arg1;

@end
