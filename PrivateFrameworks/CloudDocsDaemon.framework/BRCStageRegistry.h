/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCStageRegistry : NSObject <BRCLowDiskDelegate, BRCModule> {
    NSMutableSet * _activeDownloadStageIDs;
    NSMutableSet * _activeUploadStageIDs;
    int  _deviceID;
    NSObject<OS_dispatch_queue> * _flushingQueue;
    bool  _isCancelled;
    NSObject<OS_dispatch_source> * _lockedTestTimer;
    bool  _lowDiskSpace;
    BRCStagePersistedState * _persistedState;
    NSObject<OS_dispatch_queue> * _queue;
    BRCAccountSession * _session;
    unsigned long long  _stageDirectoryFileID;
    NSString * _stageDirectoryPath;
    brc_task_tracker * _tracker;
    NSMutableSet * _unflushedStagedFileIDs;
    NSMutableDictionary * _watchedLockedFileIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int deviceID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (readonly) Class superclass;

+ (bool)applySharingReadonlyACLsToFD:(int)arg1 statInfo:(id)arg2 version:(id)arg3 clientZone:(id)arg4 sharingOptions:(unsigned long long)arg5;
+ (unsigned short)computeItemModeFromStatInfo:(id)arg1 isPackage:(bool)arg2;
+ (void)migrateStageToVersion2_0WithSession:(id)arg1;

- (void).cxx_destruct;
- (id)_anchorNameForChangeToken:(id)arg1 recordZoneID:(id)arg2;
- (void)_fileIDMightHaveBeenUnlocked:(id)arg1;
- (bool)_flockToMakeLiveAtPath:(id)arg1 error:(id*)arg2;
- (bool)_graveyardAt:(int)arg1 path:(id)arg2 forItemID:(id)arg3;
- (int)_openStageDirectory:(unsigned char)arg1;
- (id)_pathInStage:(unsigned long long)arg1 index:(unsigned char*)arg2 generationID:(unsigned int*)arg3;
- (int)_performInStageDirectory:(unsigned char)arg1 block:(id /* block */)arg2;
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;
- (void)_updatePersistedStateWithLatestGCStartTime:(long long)arg1;
- (void)_watchLockedRelpath:(id)arg1;
- (void)applyMetadataOnFileDescriptor:(int)arg1 liveFileDescriptor:(int)arg2 itemID:(id)arg3 clientZone:(id)arg4 statInfo:(id)arg5 version:(id)arg6 sharingOptions:(unsigned long long)arg7;
- (void)associateDownloadStageID:(id)arg1 withOperation:(id)arg2;
- (void)associateSyncUpStageID:(id)arg1 withOperation:(id)arg2;
- (void)cancel;
- (void)cleanupStagedDownloadWithID:(id)arg1 forItemID:(id)arg2;
- (void)cleanupStagedSyncUpWithID:(id)arg1;
- (void)cleanupStagedUploadWithID:(id)arg1;
- (void)close;
- (bool)copyPackageFileWithPackageFd:(int)arg1 toStageFd:(int)arg2 relpath:(id)arg3;
- (id)createURLForDownloadWithStageID:(id)arg1 name:(id)arg2;
- (id)createURLForUploadWithStageID:(id)arg1 name:(id)arg2;
- (int)deviceID;
- (bool)didFlushStagedFileID:(unsigned long long)arg1;
- (void)disarmLockedTestTimer;
- (bool)existsInOldVersionStageOrGraveyard:(unsigned long long)arg1;
- (bool)existsInStage:(unsigned long long)arg1 generationID:(unsigned int*)arg2;
- (void)forgetWatchedLockedFileID:(id)arg1;
- (void)forgetWatchedLockedFileIDsForAppLibrary:(id)arg1;
- (void)garbageCollectPackages;
- (long long)garbageCollectSpace:(long long)arg1;
- (id)initWithAccountSession:(id)arg1;
- (bool)isCancelled;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(bool)arg2;
- (bool)makeDirectoryInStageGatherFileID:(unsigned long long*)arg1 generationID:(unsigned int*)arg2 error:(id*)arg3;
- (bool)makeItemLive:(id)arg1 fromStage:(unsigned long long)arg2 bySwappingWith:(id)arg3 fileName:(id)arg4 error:(id*)arg5;
- (id)makeNonLocalVersionSideFaultWithAdditionName:(id)arg1 clientZone:(id)arg2 statInfo:(id)arg3 version:(id)arg4 sharingOptions:(unsigned long long)arg5 error:(id*)arg6;
- (id)makePendingFetchRecordDirWithStartingChangeToken:(id)arg1 recordZoneID:(id)arg2;
- (bool)makeSideFaultInStageGatherFileID:(unsigned long long*)arg1 generationID:(unsigned int*)arg2 documentID:(unsigned int*)arg3 properties:(id)arg4 inAppLibrary:(id)arg5 forCreation:(bool)arg6 error:(id*)arg7;
- (bool)makeSymlinkWithTarget:(id)arg1 inStageGatherFileID:(unsigned long long*)arg2 generationID:(unsigned int*)arg3 error:(id*)arg4;
- (bool)moveFromStage:(unsigned long long)arg1 toPath:(id)arg2 fileName:(id)arg3 error:(id*)arg4;
- (bool)moveFromStageToGraveyard:(unsigned long long)arg1 forItemID:(id)arg2;
- (bool)moveOldVersionFromPath:(id)arg1 error:(id*)arg2;
- (bool)moveToGraveyardFromPath:(id)arg1 forItemID:(id)arg2 error:(id*)arg3;
- (id)nonLocalFaultURLForAdditionName:(id)arg1;
- (void)open;
- (bool)pendingFetchRecordDirExistsInStageWithStartingChangeToken:(id)arg1 recordZoneID:(id)arg2;
- (long long)purgableSpace;
- (long long)purgeGraveyardSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;
- (bool)rememberStagedDownloadWithID:(id)arg1 gatherFileID:(unsigned long long*)arg2 generationID:(unsigned int*)arg3 documentID:(unsigned int*)arg4 appLibrary:(id)arg5 error:(id*)arg6;
- (void)resume;
- (bool)transferDocumentID:(unsigned int)arg1 fromOldVersionStage:(unsigned long long)arg2 toStage:(unsigned long long)arg3;
- (void)willFlushAllStagedFileIDs;

@end
