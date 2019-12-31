/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLModelMigrator : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _containedObjectsLock;
    bool  _didCreateSqliteErrorFileForLightweightMigration;
    bool  _didImportFileSystemAssets;
    NSFileManager * _fileManager;
    NSObject<OS_dispatch_group> * _fileSystemLoadGroup;
    NSObject<OS_dispatch_queue> * _fileSystemLoadQueue;
    bool  _isPostProcessingLightWeightMigration;
    PLLibraryServicesManager * _libraryServicesManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lightweightMigrationLock;
    PLPhotoLibraryPathManager * _pathManager;
    PLPhotoLibrary * _photoLibrary;
    PLMigrationPostProcessingToken * _postProcessingToken;
    bool  _rebuildRequired;
    PLRelationshipOrderKeyManager * _relationshipOrderKeyManager;
    double  _startTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _storeMetadataLock;
    NSDictionary * _syncedPropertiesByUUID;
    PLThumbnailManager * _thumbnailManager;
    PLXPCTransaction * _transaction;
}

@property (getter=isCloudPhotoLibraryEnabled, readonly) bool cloudPhotoLibraryEnabled;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } containedObjectsLock;
@property (nonatomic, retain) NSFileManager *fileManager;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lightweightMigrationLock;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PLMigrationPostProcessingToken *postProcessingToken;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } storeMetadataLock;

+ (bool)_commitSQLTransactionAndCloseDB:(struct sqlite3 { }*)arg1;
+ (struct sqlite3 { }*)_openSQLTransactionWithDBPath:(const char *)arg1;
+ (bool)_readBooleanFlagWithKey:(id)arg1 fromMetadataWithMOC:(id)arg2 pathManager:(id)arg3;
+ (id)_readNumberWithKey:(id)arg1 fromMetadataWithMOC:(id)arg2 pathManager:(id)arg3 error:(id*)arg4;
+ (bool)_rollbackSQLTransactionAndCloseDB:(struct sqlite3 { }*)arg1;
+ (bool)_writeNumber:(id)arg1 forKey:(id)arg2 pathManager:(id)arg3 error:(id*)arg4;
+ (int)currentModelVersion;
+ (bool)enumerateObjectsWithIncrementalSaveDefaultBatchSizeFetchRequest:(id)arg1 managedObjectContext:(id)arg2 count:(unsigned long long*)arg3 error:(id*)arg4 block:(id /* block */)arg5;
+ (bool)executeBatchDeleteWithEntityName:(id)arg1 predicate:(id)arg2 managedObjectContext:(id)arg3;
+ (id)extractPathToAssetUUIDRecoveryMappingFromDatabasePath:(id)arg1;
+ (bool)readDidImportFileSystemAssetsFromMetadataWithMOC:(id)arg1 pathManager:(id)arg2;
+ (bool)resetThumbnailIndexesAndInitiateRebuildRequestIfSuccessfulForThumbnailManager:(id)arg1;
+ (id)schemaIncompatibilityDetailsForStoreMetadata:(id)arg1 model:(id)arg2;
+ (bool)shouldImportAssetsFromDCIMSubDirectoryAtURL:(id)arg1 assetsKind:(int*)arg2;
+ (bool)waitForDataMigratorToExit;

- (void).cxx_destruct;
- (bool)_addCameraCaptureDeviceForAssetsInStore:(id)arg1;
- (bool)_addCloudKindSubtypeAndBurstFlagsInStore:(id)arg1;
- (bool)_addLocationHashesToAssets:(id)arg1;
- (bool)_addUUIDsToCollectionLists:(id)arg1 skipMomentLists:(bool)arg2;
- (bool)_addUUIDsToExistingKeywordsInStore:(id)arg1;
- (bool)_applyDataProtectionToDCIMFromClassBToClassC;
- (void)_applySyncedProperties:(id)arg1 toAsset:(id)arg2;
- (bool)_batchOfflineDeleteFromDatabaseOnlyAssets:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3;
- (bool)_cleanupInvalidAlbumsAndFoldersInStore:(id)arg1;
- (bool)_cleanupLegacyFiles;
- (void)_collectFileURLs:(id)arg1 urlsToSkip:(id)arg2 forAddingToAlbum:(id)arg3 intoAssetsArray:(id)arg4 assetsKind:(int)arg5 testCreationDates:(bool)arg6;
- (bool)_convertManagedAdjustmentsInStore:(id)arg1;
- (bool)_convertNameSourceFromBoolToIntForDeferredRebuildFaceInStore:(id)arg1;
- (bool)_createImportSessionAlbums:(id)arg1;
- (bool)_createManualIndexesDropBeforeCreate:(bool)arg1;
- (void)_createPhotoDataDirectoryFailedWithNoPermission:(id)arg1;
- (bool)_createPhotoDataDirectoryIfNecessary;
- (id)_dateForFirstCRVSPhoto;
- (id)_dateForVariations;
- (id)_dateForWideGamutCapture;
- (id)_dateWithiTunesTimeInterval:(double)arg1;
- (bool)_deleteAllMemoriesInStore:(id)arg1;
- (bool)_deleteCloudSharedAndSynced:(bool)arg1 assetReferencesInStore:(id)arg2;
- (bool)_deleteExtraneousAdjustedFullSizeResourcesForSloMoAssetsWithStore:(id)arg1;
- (bool)_deleteOrphanedExtendedAttributes:(id)arg1;
- (bool)_deleteOrphanedUnverifiedPeople:(id)arg1;
- (bool)_deletePersistentHistoryInStore:(id)arg1;
- (bool)_deletePersonsMissingUUIDInStore:(id)arg1;
- (bool)_deletePhotoCloudSharingMetadataInManagedObjectContext:(id)arg1 error:(id*)arg2;
- (bool)_deletePhotoStreamAssetReferencesInStore:(id)arg1;
- (bool)_deleteVideoThumbsMadeFromPreferredFrameInStore:(id)arg1;
- (bool)_disableICloudPhoto;
- (bool)_emptyResourceTablesInStagedStore:(id)arg1;
- (bool)_ensureAllUserVerifiedPersonsHaveFaceCropsInStore:(id)arg1;
- (id)_eventNameFromDate:(id)arg1;
- (bool)_executeBatchUpdateWithEntityName:(id)arg1 predicate:(id)arg2 propertiesToUpdate:(id)arg3 managedObjectContext:(id)arg4;
- (void)_failed_recordCurrentVersionMetadata;
- (void)_failed_repairSingletonObjectsInNewDatabaseWithNilContextError:(id)arg1;
- (void)_failed_repairSingletonObjectsInNewDatabaseWithNoPersistentStores;
- (void)_failed_repairSingletonObjectsInNewDatabaseWithRepairError:(id)arg1;
- (void)_failed_repairSingletonObjectsWithError:(id)arg1;
- (void)_failed_repairSingletonObjectsWithErrorTypeNSPersistentStoreOpenError;
- (void)_failed_repairSingletonObjectsWithErrorTypeNSPersistentStoreTimeoutError;
- (void)_failed_repairSingletonObjectsWithErrorTypeOtherCoreDataError;
- (void)_failed_repairSingletonObjectsWithErrorTypeOtherPhotosError;
- (void)_failed_repairSingletonObjectsWithErrorTypeOtherSQLiteError;
- (void)_failed_repairSingletonObjectsWithErrorTypePLPhotosErrorLibraryRequiresMigration;
- (void)_failed_repairSingletonObjectsWithErrorTypePLPhotosErrorLibraryTooNew;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_CANTOPEN;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_CORRUPT;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_ERROR;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_FULL;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_LOCKED;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_NOTADB;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_PERM;
- (void)_failed_repairSingletonObjectsWithInvalidDatabaseFile;
- (void)_failed_repairSingletonObjectsWithInvalidFileTypeLibraryDirectory;
- (void)_failed_repairSingletonObjectsWithMissingDatabaseFile;
- (void)_failed_repairSingletonObjectsWithMissingLibraryDirectory;
- (void)_failed_repairSingletonObjectsWithNilContextError:(id)arg1;
- (void)_failed_repairSingletonObjectsWithNoPersistentStores;
- (void)_failed_repairSingletonObjectsWithRepairError:(id)arg1;
- (void)_fatal_cannotProceedRebuildPreventionSafetyCheckTriggered;
- (id)_fetchRequestToIdentifyAdjustedDepthAndVariationsCandidates;
- (id)_fetchRequestToIdentifyBakedInVariationsCandidatesIncludingLongExposure:(bool)arg1;
- (bool)_filterSceneClassificationsInStore:(id)arg1;
- (bool)_fixAdjustedAssets:(id)arg1;
- (bool)_fixAdjustedFingerprintsInStore:(id)arg1;
- (bool)_fixAlbumAndFolderSortAscending:(id)arg1;
- (bool)_fixAssetMasterResources:(id)arg1;
- (bool)_fixCloudMasterCloudLocalState:(id)arg1;
- (bool)_fixCloudSharedGIFsInStore:(id)arg1;
- (bool)_fixCloudSharedVideosInStore:(id)arg1;
- (bool)_fixCorruptedOrientationsInStore:(id)arg1;
- (bool)_fixCustomKeyAssetForAlbum:(id)arg1;
- (bool)_fixCustomRenderedValues:(id)arg1;
- (bool)_fixDuplicatedAssets:(id)arg1;
- (bool)_fixDuplicatedRootFolderAndOrphanedAlbumsInStore:(id)arg1;
- (bool)_fixEmptyVideoResourcePathsInStore:(id)arg1;
- (bool)_fixFaceAlgorithmVersion:(id)arg1;
- (bool)_fixFaceGroupUnverifiedPerson:(id)arg1;
- (bool)_fixHasLocationSmartAlbum:(id)arg1;
- (bool)_fixImportedAssetsFromCMMSavedInDCIMWithWrongSavedAssetType:(id)arg1;
- (bool)_fixIncorrectAddedDateForAssetsInStore:(id)arg1;
- (void)_fixIncorrectHeifMetadataForAsset:(id)arg1;
- (bool)_fixIncorrectHeifMetadataInStore:(id)arg1;
- (bool)_fixIncorrectThumbnailTables;
- (bool)_fixInitialSyncMarker;
- (bool)_fixInvalidPostMigrationFileSystemImportedAssets:(id)arg1;
- (bool)_fixItemIdentifierForVideoCmplInStore:(id)arg1;
- (bool)_fixKeywordsInStagedStore:(id)arg1;
- (bool)_fixKindSubtypeForLoopingVideoLivePhotosInStore:(id)arg1;
- (bool)_fixLastPrefetchDateInStore:(id)arg1;
- (bool)_fixLocalPathForVideoCmplDerivativesInStore:(id)arg1;
- (bool)_fixLocallyAvailableFlagForThumbnailsInStore:(id)arg1;
- (bool)_fixLocationValuesInStore:(id)arg1;
- (bool)_fixMasterCloudLocalStateEnum:(id)arg1;
- (bool)_fixMemoriesWithAssetLists:(id)arg1;
- (bool)_fixMergedPeopleThatShouldBeVerified:(id)arg1;
- (bool)_fixMovieAttributesInStore:(id)arg1;
- (bool)_fixNilCloudMasterGUID:(id)arg1;
- (bool)_fixNonDuplicatedAssets:(id)arg1 adjusted:(bool)arg2;
- (bool)_fixOriginalPropertiesForCloudSharedAssetsInStore:(id)arg1;
- (void)_fixPathForResource:(id)arg1 withPath:(id)arg2;
- (bool)_fixPersonAndFaceGroup:(id)arg1;
- (bool)_fixRawWithZeroDimensions:(id)arg1;
- (bool)_fixRejectedKeyFace:(id)arg1;
- (bool)_fixSharedStreamVideoResourcesInStore:(id)arg1;
- (bool)_fixSidecarUTIsAndDataStoreSubtype:(id)arg1;
- (bool)_fixSingletonFaceFaceGroup:(id)arg1;
- (bool)_fixTrashedDate:(id)arg1;
- (bool)_fixUTIForRDMigrationInStore:(id)arg1;
- (bool)_fixUTIforSlowMoInStore:(id)arg1;
- (bool)_fixUnpushedVideoComplementResourcesInStore:(id)arg1;
- (bool)_fixUploadedButNotRemotelyAvailalbeCPLResourcesInStore:(id)arg1;
- (bool)_fixVideoDimensionsForAsset:(id)arg1;
- (bool)_fixVideoDimensionsInStore:(id)arg1;
- (bool)_fixVideoJPGPath:(id)arg1;
- (bool)_fixVisibleBurstAsset:(id)arg1;
- (bool)_fixWhiteBalanceValuesInStore:(id)arg1;
- (bool)_fixWhitelistOwnerForPendingInvitationsInStore:(id)arg1;
- (bool)_fixZeroDurationPhotoIrisWithLocalResourcesInStore:(id)arg1 assumeAdjustedIrisIsVisible:(bool)arg2;
- (bool)_fixZeroTrashedDateForEntityName:(id)arg1 inManagedObjectContext:(id)arg2;
- (bool)_fixupAlbumOrderInAlbumListInStore:(id)arg1;
- (bool)_fixupAssetPersistence:(id)arg1;
- (bool)_fixupBrokenBurstPicksInStore:(id)arg1;
- (bool)_fixupCloudResourcesInStore:(id)arg1;
- (bool)_fixupCroppedUnadjustedAssets:(id)arg1;
- (bool)_fixupEditorBundleIDsInStore:(id)arg1;
- (bool)_fixupImportedAssetsInStore:(id)arg1;
- (bool)_fixupImportedEventsInStore:(id)arg1;
- (bool)_fixupKeyAssetsForAlbumsInStore:(id)arg1;
- (bool)_fixupLocalResourcesStates:(id)arg1;
- (bool)_fixupResourceTypeUnknownInStore:(id)arg1;
- (bool)_fixupSharedStreamOrientationsInStore:(id)arg1;
- (bool)_fixupSharedVideosWithoutThumbnailsInStore:(id)arg1;
- (bool)_fixupSyncedAssetAttributesInStore:(id)arg1;
- (bool)_flattenUnknownCustomRenderedValues:(id)arg1;
- (bool)_forceAlbumMetadataToDiskInStore:(id)arg1;
- (void)_forceDupeAnalysis;
- (bool)_forceSoftResetSync;
- (bool)_generateAddedDateForAssetsInStore:(id)arg1;
- (void)_generateAlbumMetadataFromLastiTunesSyncedPlist;
- (id)_iTunesPhotosLastSyncMetadata;
- (bool)_identifyVariationsAndDepthAdjustmentsForAsset:(id)arg1;
- (bool)_identifyVariationsAndDepthAdjustmentsIncludingBakedInLongExposure:(bool)arg1 inStore:(id)arg2;
- (void)_importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_importAllDCIMAssets:(id)arg1 pendingFraction:(float)arg2;
- (id)_importFileSystemImportAssets:(id)arg1 forceUpdate:(bool)arg2 progress:(id)arg3;
- (bool)_initiateLightweightReimportOfAllPhotoCloudSharingMetadataInStore:(id)arg1;
- (bool)_invalidateReverseGeocodingDataInStore:(id)arg1;
- (bool)_isReasonableCreationDate:(id)arg1;
- (id)_libraryUpgradeTypeDescriptionWithMigrationType:(long long)arg1 forced:(bool)arg2;
- (void)_loadFacesFileSystemDataIntoDatabase;
- (void)_loadFileSystemDataIntoDatabaseIfNeededWithReason:(id)arg1 progress:(id)arg2;
- (id)_managedObjectModelForLightweightMigrationStageWithURL:(id)arg1;
- (bool)_markAllProcessedAnalysisStatesDirtyForWorkerType:(short)arg1 withStartingWorkerFlags:(int)arg2 inStore:(id)arg3;
- (bool)_markMigrationVerifiedTypePersonsInStore:(id)arg1;
- (bool)_markOldPhotoIrisEditsEvaluatedInStore:(id)arg1;
- (bool)_markPhotoIrisVideoOrphansInStore:(id)arg1;
- (bool)_migrateAssetLocationData:(id)arg1;
- (bool)_migrateCloudResourcesRelationshipsInStagedStore:(id)arg1;
- (bool)_migrateDetectedFacesGroupInStagedStore:(id)arg1;
- (int)_migrateLegacySlomoAdjustmentsForAsset:(id)arg1;
- (bool)_migrateLegacySlomoAdjustmentsInStore:(id)arg1 fromLegacySLMFormat:(bool)arg2;
- (bool)_migrateOriginalColorSpaceInStagedStore:(id)arg1;
- (void)_migratePersonContactInfo;
- (bool)_migrateRejectedFacesGroupInStagedStore:(id)arg1;
- (bool)_migrateTransformableUUIDsToStringsInStore:(id)arg1;
- (bool)_migrateVersionSpecific1kResourcesInStore:(id)arg1;
- (id)_migrationInfoWithMigrationType:(long long)arg1 forced:(bool)arg2 sourceModelVersion:(id)arg3 updateMigrationState:(bool)arg4;
- (bool)_move1kResourcesOutOfMastersDir:(id)arg1;
- (bool)_moveCloudSharedDerivativesInStore:(id)arg1;
- (bool)_moveMyPhotoStreamToAlbumsListInStore:(id)arg1;
- (id)_newSyncedPropertiesByAssetUUIDs:(bool)arg1;
- (id)_nextRequiredStagedMigrationVersionAfterVersion:(id)arg1;
- (bool)_nukeWallpaperRemnantsInStore:(id)arg1;
- (id)_orderedAssetsToImportCameraRollOnly:(bool)arg1;
- (void)_parseDMContextForRestartingAfterRestoreFromBackup:(bool*)arg1 restartingAfterRestoreFromCloud:(bool*)arg2;
- (bool)_performChangesOnBatchFetchedObjects:(id)arg1 inMOC:(id)arg2 batchSize:(unsigned long long)arg3 objectHandler:(id /* block */)arg4 error:(id*)arg5;
- (bool)_performMigrationCacheDateCreatedOnResources:(bool)arg1 cacheItemIdentifierOnResources:(bool)arg2 store:(id)arg3;
- (void)_performRebuildPreventionSafetyCheckForInternalBuilds;
- (bool)_persistImportSessionAlbumType:(id)arg1;
- (bool)_persistMemoriesInStore:(id)arg1;
- (bool)_persistMetadataToFileSystemForAlbum:(id)arg1;
- (bool)_persistPersonsInStore:(id)arg1;
- (bool)_persistPhotoIrisVisibilityStateToDiskInStore:(id)arg1;
- (bool)_persistPlaceAnnotationData:(id)arg1;
- (bool)_persistStoreUUIDToMobileCPLPlist:(id)arg1;
- (bool)_persistVideoComplPropertiesInStore:(id)arg1;
- (bool)_populateAdjustmentTimestampsOnAssets:(id)arg1;
- (bool)_populateAlbumAndFolderOrderKeysInStagedStore:(id)arg1;
- (bool)_populateCloudNameSourceOnFacesInStore:(id)arg1;
- (bool)_populateCloudResourceLocalStateInStor:(id)arg1;
- (bool)_populateCloudVerifiedTypeOnPersonsInStore:(id)arg1;
- (bool)_populateDurationAndHDRTypeFromAdditionalAssetAttributesInStagedStore:(id)arg1;
- (void)_populateFaceRegionsForAsset:(id)arg1;
- (bool)_populateFaceRegionsInStore:(id)arg1;
- (bool)_populateGroupingStateOnAllGroupedAssetsInStore:(id)arg1;
- (bool)_populateHasAdjustmentsForAssetsInStore:(id)arg1;
- (bool)_populateLatLongInAsset:(id)arg1;
- (bool)_populateLightweightReimportDirectoryWithPhotoCloudSharingAssetsInManagedObjectContext:(id)arg1 error:(id*)arg2;
- (bool)_populateNilOriginalFilename:(id)arg1;
- (bool)_populateNilOriginalFilenameOnMaster:(id)arg1;
- (bool)_populateRepresentativeAssets:(id)arg1;
- (bool)_populateUserKeyFacePickSourceForPersonInStore:(id)arg1;
- (bool)_populateVideoCpFieldsInStagedStore:(id)arg1;
- (bool)_postProcessFromVersion6006Store:(id)arg1;
- (id)_predicateForInconsistentHeifAssets;
- (void)_prepareForImportDeleteCorruptAssetsWithImporter:(id)arg1 context:(id)arg2;
- (void)_printCountsForEntityName:(id)arg1 groupByProperties:(id)arg2 inManagedObjectContext:(id)arg3;
- (void)_printMigrationSummaryInStore:(id)arg1;
- (bool)_processDeletesForUUIDs:(id)arg1;
- (bool)_purgeCloudSharedResourcesInStore:(id)arg1;
- (void)_rebuildAssetsFromJournal:(id)arg1 pendingFraction:(float)arg2;
- (bool)_rebuildWideCaptureThumbsInStore:(id)arg1;
- (bool)_reconstructImageExtendedAttributes:(id)arg1;
- (bool)_recordCurrentVersionMetadataInPersistentStore:(id)arg1 coordinator:(id)arg2 extraMetadata:(id)arg3;
- (bool)_recoverSingleBurstPhotos:(id)arg1;
- (bool)_refreshTriggerValues:(id)arg1;
- (bool)_regenerateReferenceKeyDataInStore:(id)arg1;
- (bool)_regenerateSharedStreamsDataStoreKeysDataInStore:(id)arg1;
- (bool)_relocateCPLMarkerFiles;
- (bool)_removeAllSharedAssetDCIMFilesInStore:(id)arg1;
- (bool)_removeAutoloopCacheIfExists;
- (bool)_removeAutoloopWorkerStatesInStore:(id)arg1;
- (bool)_removeCameraRollInStore:(id)arg1;
- (bool)_removeCloudSharedFileAtPath:(id)arg1 withFileManager:(id)arg2 error:(id*)arg3;
- (bool)_removeContactMatchingDictionaryOnTombstonedPeople:(id)arg1;
- (bool)_removeEvents:(id)arg1;
- (void)_removeFileAt:(id)arg1 forResource:(id)arg2;
- (bool)_removeInvalidAdjustmentResourceDataInStore:(id)arg1;
- (bool)_removeInvalidImportSessionAlbums:(id)arg1;
- (bool)_removeOldPersonMetadataInStore:(id)arg1;
- (bool)_removeUnneededAnalysisStateTableEntries:(id)arg1;
- (bool)_removeUntrackedCloudResourceImageDerivativesInStore:(id)arg1;
- (bool)_removeUntrackedPersonMetadataInStore:(id)arg1;
- (bool)_removingDuplicatedCloudAssetGuid:(id)arg1;
- (bool)_renumberLocalAvailabilityAndLocalAvailabilityTargetsInStore:(id)arg1;
- (void)_repairCloudPlaceholderKindForVideoAsset:(id)arg1;
- (bool)_repairLegacyMigrationDuplicateVersionCloudResources:(id)arg1;
- (void)_repairMetadataAndSingletonsForMigrationType:(long long)arg1 forced:(bool)arg2;
- (bool)_repairOrphanedProjectAlbumsInStore:(id)arg1;
- (void)_repairPotentialModelCorruption;
- (void)_repairRootFolderFixedOrderKeysInContext:(id)arg1;
- (bool)_repairSingletonObjectsInDatabaseForOfflineStore:(id)arg1;
- (bool)_repairSingletonObjectsInDatabaseUsingContext:(id)arg1 error:(id*)arg2;
- (bool)_repairTableThumbFragmentation;
- (bool)_repersistDuplicatedAssets:(id)arg1;
- (bool)_repushAllUserSmartAlbum:(id)arg1;
- (bool)_repushAssetsMatchingPredicate:(id)arg1 inStore:(id)arg2 withMaster:(bool)arg3;
- (bool)_repushAssetsWithAnyUserConfirmedFaceInStore:(id)arg1;
- (bool)_repushAssetsWithNewGroupingPropertiesInStore:(id)arg1;
- (bool)_repushMemoriesWithNewFeaturesInStore:(id)arg1;
- (bool)_repushPersonsWithMergeTargetInStore:(id)arg1;
- (bool)_requestAvailabilityChangeForAssetsMissing1kResourcesInStore:(id)arg1;
- (bool)_resetAlbumToFolderOrderKeyForAlbums:(id)arg1;
- (bool)_resetAnalysisStateForVideosInStore:(id)arg1;
- (bool)_resetDupesAnalysisInStore:(id)arg1;
- (bool)_resetFailedAssets:(id)arg1;
- (bool)_resetFailedCloudMasters:(id)arg1;
- (void)_resetICPLPrompt;
- (void)_resetLocalResourcesStateForAssetsWithContext:(id)arg1 usingPredicate:(id)arg2;
- (bool)_resetThumbnailsAndInitiateRebuildRequestIfNeeded;
- (bool)_resetUploadAttempts:(id)arg1;
- (bool)_retryQuarantinedAssetsAndFixResourceRelation:(id)arg1;
- (bool)_revalidateImportSessionDates:(id)arg1;
- (bool)_runMigrationStepWithName:(id)arg1 fetchRequest:(id)arg2 store:(id)arg3 migrationHandler:(id /* block */)arg4;
- (bool)_runMigrationStepWithPrettyFunction:(const char *)arg1 store:(id)arg2 migrationHandler:(id /* block */)arg3;
- (bool)_runPairingForAssetsInStore:(id)arg1;
- (bool)_saveChangesToPhotoIrisInStore:(id)arg1 matchingPredicate:(id)arg2 countChanged:(unsigned long long*)arg3 error:(id*)arg4 changeBlock:(id /* block */)arg5;
- (bool)_scavengeSnowplowMetadataForAssetsInStore:(id)arg1;
- (bool)_setImportedByInPLCloudMaster:(id)arg1;
- (void)_setIsPostProcessingLightWeightMigration:(bool)arg1;
- (void)_setLastWelcomedDBVersion;
- (bool)_setPlaybackStyleForAnimatedGIFsInStore:(id)arg1;
- (bool)_setUserTypeOnKeyFace:(id)arg1;
- (bool)_setupRootFolderInStore:(id)arg1;
- (bool)_shouldConvertManagedAdjustmentsForAsset:(id)arg1;
- (void)_shouldRepromptUserIfNeeded;
- (bool)_shouldTriggerLightweightMigrationFailureForInternalTesting;
- (id)_stagedManagedObjectModelURLWithStageVersion:(id)arg1;
- (id)_stagedVersions;
- (bool)_storeContainsFaceCrops:(id)arg1 success:(bool*)arg2;
- (bool)_supportForUserSmartQuery:(id)arg1;
- (id)_syncedPropertiesForAssetUUID:(id)arg1;
- (bool)_tagScreenshotsForAssetsInStore:(id)arg1;
- (bool)_trimInvalidAlbumAssetsMappingRecords;
- (bool)_tryToPromoteUnknownAssetsInStore:(id)arg1;
- (bool)_ungroupDuplicateGroupedAssetsInStore:(id)arg1;
- (bool)_unquarantineClass:(Class)arg1 inManagedObject:(id)arg2;
- (bool)_unquarantinedQuarantinedItems:(id)arg1;
- (bool)_updateAlbumDatesInStore:(id)arg1;
- (bool)_updateCPLMarkerFiles;
- (bool)_updateKeyAssetInMemory:(id)arg1;
- (bool)_updateKindSubtypeForPanoramaPhotosNeedsReset:(bool)arg1 inStore:(id)arg2;
- (bool)_updateMissingFileSystemVolumeUuidInStore:(id)arg1;
- (bool)_updatePlaybackStylesAndVariationsInStore:(id)arg1;
- (bool)_updatePlaybackWithBatchUpdateRequest:(id)arg1 targetDescription:(id)arg2 inContext:(id)arg3;
- (bool)_updateQualitySortForResourcesWithCPLResourceTypeVideoFullSizeInStore:(id)arg1;
- (bool)_updateSuggestionStartAndEndDatesInStore:(id)arg1;
- (void)_validateCurrentModelVersionAttempt:(long long)arg1;
- (void)_validateCurrentModelVersionFailedWithMismatchedVersion:(long long)arg1;
- (void)_validateCurrentModelVersionFailedWithNoVersionFromServer;
- (bool)_validateOrDeleteFileAtPath:(id)arg1 forCloudResource:(id)arg2;
- (bool)_verifyAndFixBrokenLocalAvailabilityForResourceWithFileIDsInStore:(id)arg1;
- (bool)_verifyCloudAssetsLocalAvailability:(id)arg1;
- (void)_writeToPhotoDataDirectoryFailedWithNoPermission:(id)arg1;
- (void)applyDataProtectionToAllPhotosFilesOnce;
- (void)applyDataProtectionToPhotosPaths:(id)arg1 fromKeyClass:(int)arg2 toKeyClass:(int)arg3;
- (void)archiveAssetUUIDForPathPlist:(id)arg1;
- (id)archivedAssetUUIDForURL:(id)arg1;
- (long long)attemptLightweightMigrationFromVersion:(id)arg1 onStore:(id)arg2 withMetadata:(id)arg3 orStoreURL:(id)arg4 options:(id)arg5 coordinator:(id)arg6 migrationPolicy:(unsigned int)arg7 error:(id*)arg8;
- (long long)checkForceRebuildIndicatorFile;
- (void)cleanupModelForDataMigrationForRestoreType:(long long)arg1;
- (bool)clearVisionWorkerCache;
- (void)collectContentsOfDirectoryURL:(id)arg1 urlsToSkip:(id)arg2 forAddingToAlbum:(id)arg3 intoAssetsArray:(id)arg4 assetsKind:(int)arg5;
- (struct os_unfair_lock_s { unsigned int x1; })containedObjectsLock;
- (long long)createNewDatabaseWithMigrationType:(long long)arg1 forced:(bool)arg2 error:(id*)arg3;
- (bool)debug_resetThumbnailsAndInitiateRebuildRequest;
- (bool)deleteAllAssetAnalysisStatesInStore:(id)arg1;
- (bool)deleteAllMomentsFromStore:(id)arg1;
- (bool)deleteAnalysisStatesInStore:(id)arg1 forWorkerType:(short)arg2;
- (bool)didImportFileSystemAssets;
- (bool)didImportFileSystemAssetsWithMOC:(id)arg1;
- (void)dontImportFileSystemDataIntoDatabase;
- (long long)faceMigrationResetLevelRequiredForPreviousStoreVersion:(unsigned long long)arg1;
- (bool)faceQualityResetRequiredForPreviousStoreVersion:(unsigned long long)arg1;
- (id)fileManager;
- (bool)fixPossiblyIncorrectAddedDateForAsset:(id)arg1;
- (bool)fixupStatesWithUnreachableAssetUUIDsInStore:(id)arg1;
- (bool)fixupUnknownAnalysisStatesInStore:(id)arg1;
- (void)forceImportFileSystemDataIntoDatabase;
- (id)generatePathToAssetUUIDRecoveryMapping;
- (bool)graphPersonResetRequiredForPreviousStoreVersion:(unsigned long long)arg1;
- (void)handleGreenChanges:(id)arg1;
- (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)initWithPathManager:(id)arg1 relationshipOrderKeyManager:(id)arg2;
- (bool)isCloudPhotoLibraryEnabled;
- (bool)isLoadingFacesFromFileSystem;
- (bool)isPhotoLibraryDatabaseReadyForOpen;
- (bool)isPostProcessingLightweightMigration;
- (long long)legacyMigrationState;
- (struct os_unfair_lock_s { unsigned int x1; })lightweightMigrationLock;
- (void)loadFacesFileSystemDataIntoDatabase;
- (void)loadFileSystemAssetsNotifyCompleted:(id /* block */)arg1;
- (void)loadFileSystemAssetsNotifyEnter;
- (void)loadFileSystemAssetsNotifyLeave;
- (void)loadFileSystemDataIntoDatabaseIfNeededWithReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)managedObjectContextForMigrationInStore:(id)arg1 name:(const char *)arg2 concurrencyType:(unsigned long long)arg3;
- (id)managedObjectContextForMigrationWithName:(const char *)arg1 persistentStoreCoordinator:(id)arg2 concurrencyType:(unsigned long long)arg3;
- (bool)markAllDirtyFaceAnalysisStatesWithFaceDetectionWorkerFlagsInStore:(id)arg1;
- (bool)markAllSceneAnalysisStatesDirtyAndClearDistanceIdentitiesInStoreAndClearSceneprints:(id)arg1;
- (bool)markUserConfirmedFacesAndCorrespondingFaceAnalysisStatesDirtyInStore:(id)arg1;
- (long long)migrateOrCreateDatabaseIfNecessaryWithPersistentContainer:(id)arg1 migrationPolicy:(unsigned int)arg2 error:(id*)arg3;
- (void)migratePersonContactInfo;
- (bool)migratePurgeableResources;
- (bool)migrateToRequiredAnalysisState:(id)arg1;
- (id)pathManager;
- (void)pausePhotoStreams;
- (bool)performFaceAnalysisResetMigrationStepWithResetLevel:(long long)arg1 store:(id)arg2;
- (id)photoLibrary;
- (void)postProcessFixesAfterOTARestoreForCompleteAsset:(id)arg1 fixAddedDate:(bool)arg2;
- (bool)postProcessMigratedStore:(id)arg1 fromVersion:(int)arg2;
- (bool)postProcessThumbnailsOnlyIfVersionMismatchOrMissing:(bool*)arg1;
- (id)postProcessingToken;
- (bool)processWelterweightMigrationStageOnStore:(id)arg1 fromVersion:(int)arg2 toVersion:(int)arg3 migrationContext:(id)arg4;
- (bool)rebuildAllMomentsInStore:(id)arg1;
- (bool)rebuildRequired;
- (bool)relocateOriginalUBFPaths:(id)arg1;
- (void)repairSingletonObjectsInDatabase;
- (bool)resetAnalysisStateForVideosWithMoc:(id)arg1;
- (bool)resetFaceQualityInStore:(id)arg1;
- (bool)resetGraphPersonsInStore:(id)arg1;
- (bool)resetManualOrderForNonFavoritePeopleInManagedObjectContext:(id)arg1;
- (bool)resetManualOrderForNonFavoritePeopleInStore:(id)arg1;
- (bool)resetRejectedFacesOnAllPersonsInStore:(id)arg1;
- (bool)restartingAfterDeviceToDeviceRestoreFromBackup;
- (bool)restartingAfterNonCloudRestoreFromBackup;
- (bool)restartingAfterOTAMigration;
- (bool)restartingAfterRestoreFromBackup;
- (void)resumePhotoStreams;
- (bool)sceneStepRequiredForPreviousStoreVersion:(unsigned long long)arg1;
- (void)setContainedObjectsLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setDidImportFileSystemAssets:(bool)arg1;
- (void)setFileManager:(id)arg1;
- (void)setLightweightMigrationLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setLoadingFacesFromFileSystem:(bool)arg1;
- (void)setRebuildRequired:(bool)arg1;
- (void)setStoreMetadataLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (bool)shouldCreateDatabase;
- (bool)shouldRebuildDCIMDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isPhotoStream:(bool*)arg3 isCPLAssets:(bool*)arg4 cameraRollOnly:(bool)arg5;
- (bool)skipDataProtectionForFilePath:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })storeMetadataLock;
- (id)thumbnailManager;
- (bool)touchAnalysisStateSortTokensInStoreInStore:(id)arg1;
- (bool)updateCompletedMigrationStateWithError:(id*)arg1;
- (void)validateCurrentModelVersion;

@end
