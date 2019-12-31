/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableDictionary : NSDictionary <PHMutableFetchDictionaryAccessing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithSharedKeySet:(id)arg1;

- (void)__addObject:(id)arg1 forKey:(id)arg2;
- (void)__setObject:(id)arg1 forKey:(id)arg2;
- (void)_mutate;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (void)addObjects:(id)arg1 forKeys:(id)arg2;
- (void)addObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)invert;
- (void)removeAllObjects;
- (void)removeEntriesInDictionary:(id)arg1;
- (void)removeEntriesPassingTest:(id /* block */)arg1;
- (void)removeEntriesWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (void)removeKeysForObject:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)replaceObject:(id)arg1 forKey:(id)arg2;
- (void)replaceObjects:(id)arg1 forKeys:(id)arg2;
- (void)replaceObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)setDictionary:(id)arg1;
- (void)setEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;

// Image: /System/Library/CoreServices/RawCamera.bundle/RawCamera

- (id)makeSerializable;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

- (void)mfo_addEntriesFromDictionaryWithRecursion:(id)arg1;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

- (void)abs_setNonNilObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)CKAddPropertySafelyForKey:(id)arg1 value:(id)arg2;
- (void)CKSynchronizedRemoveObjectForKey:(id)arg1;
- (bool)CKSynchronizedSetIfAbsentObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (void)_web_setBool:(bool)arg1 forKey:(id)arg2;
- (void)_web_setInt:(int)arg1 forKey:(id)arg2;
- (void)_web_setObject:(id)arg1 forUncopiedKey:(id)arg2;
- (Class)classForCoder;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (bool)pu_containsIndexPath:(id)arg1;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (void)un_safeSetObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (void)vs_setObjectUnlessNil:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

- (void)axSafelyAddEntriesFromDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant

- (id)mutableCopyDeep;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)aa_removeObjectForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (void)ams_setNullableObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission

- (void)ap_setNullableObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer

- (void)ae_moveObjectFromKey:(id)arg1 toKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (void)bs_setSafeObject:(id)arg1 forKey:(id)arg2;
- (id)bs_takeObjectForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (void)setIdsMetadataFileKey:(id)arg1;
- (void)setIdsMetadataFileURLType:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (id)CALsafeObjectForKey:(id)arg1 calculatedWithBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

- (void)copyObjectFromDictionary:(id)arg1 forKey:(id)arg2;
- (void)copyObjectFromDictionaryRemoveIfNotPresent:(id)arg1 forKey:(id)arg2;
- (void)copyObjectsFromDictionary:(id)arg1 forKeys:(id)arg2;
- (void)copyObjectsFromDictionaryRemoveIfNotPresent:(id)arg1 forKeys:(id)arg2;
- (void)removeObjectsForKeysOtherThan:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setBoolIfNotPresent:(bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setDoubleIfNotPresent:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setFloatIfNotPresent:(float)arg1 forKey:(id)arg2;
- (void)setInt:(int)arg1 forKey:(id)arg2;
- (void)setIntIfNotPresent:(int)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forIndex:(int)arg2;
- (void)setObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)setObjectIfNotPresent:(id)arg1 forKey:(id)arg2;
- (void)setObjectOrRemoveIfNil:(id)arg1 forKey:(id)arg2;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)setRectIfNotPresent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (id)crk_validateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 allowZeroLengthString:(bool)arg4 outError:(id*)arg5;
- (id)crk_validateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 outError:(id*)arg4;
- (id)crk_validateAndRemoveNonZeroLengthStringWithKey:(id)arg1 isRequired:(bool)arg2 outError:(id*)arg3;
- (id)crk_validateAndRemoveObjectOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 outError:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (void)_cn_setNonNilObject:(id)arg1 forKey:(id)arg2;
- (void)_cn_setObject:(id)arg1 orPlaceholder:(id)arg2 forKey:(id)arg3;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

- (id)wf_popObjectForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

- (void)CDVAddObjectsAndKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial

- (void)_processAdditionalInfo:(id)arg1 forFilter:(id)arg2;
- (void)setAverageColorEnabled:(bool)arg1 includingOptimizations:(bool)arg2 withAdditionalInfoPromise:(id /* block */)arg3;
- (void)setBlurRadius:(double)arg1 ignoringIdentity:(bool)arg2 includingOptimizations:(bool)arg3 withAdditionalInfoPromise:(id /* block */)arg4;
- (void)setBrightness:(double)arg1 ignoringIdentity:(bool)arg2 includingOptimizations:(bool)arg3 withAdditionalInfoPromise:(id /* block */)arg4;
- (void)setColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1 ignoringIdentity:(bool)arg2 includingOptimizations:(bool)arg3 withAdditionalInfoPromise:(id /* block */)arg4;
- (void)setLuminanceAmount:(double)arg1 values:(id)arg2 ignoringIdentity:(bool)arg3 includingOptimizations:(bool)arg4 withAdditionalInfoPromise:(id /* block */)arg5;
- (void)setSaturation:(double)arg1 ignoringIdentity:(bool)arg2 includingOptimizations:(bool)arg3 withAdditionalInfoPromise:(id /* block */)arg4;
- (void)setTintColor:(id)arg1 includingOptimizations:(bool)arg2 withAdditionalInfoPromise:(id /* block */)arg3;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofFilter:(id)arg3;
- (void)setZoom:(double)arg1 ignoringIdentity:(bool)arg2 includingOptimizations:(bool)arg3 withAdditionalInfoPromise:(id /* block */)arg4;
- (void)sortFiltersWithOrder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

+ (id)MSASDictionaryWithCopyOfDictionary:(id)arg1;

- (id)MSASAddDictionary:(id)arg1;
- (id)MSASAddEventIsDueToAlbumDeletionAlbumGUID:(id)arg1;
- (id)MSASAddEventIsDueToAssetCollectionDeletionAssetCollectionGUID:(id)arg1;
- (id)MSASAddIsAlbumResetSyncAlbumGUID:(id)arg1;
- (id)MSASAddIsErrorRecovery;
- (id)MSASAddIsGlobalResetSync;
- (id)MSASAddIsLocalChange;
- (id)MSASAddNotInterestingKey;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (void)cr_setNonNilObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV

- (void)addObjectsAndKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy

- (void)dp_addBoolForKey:(id)arg1;
- (void)dp_addStringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

- (void)dnds_setSafeLocalDateForTimestamp:(id)arg1 key:(id)arg2;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (void)ef_removeObjectsPassingTest:(id /* block */)arg1;
- (void)ef_setOptionalObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS

- (void)setObject:(id)arg1 forInt:(int)arg2;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

- (id)fm_objectForKey:(id)arg1 withDefaultValue:(id /* block */)arg2;
- (void)fm_safeSetObject:(id)arg1 forKey:(id)arg2;
- (void)fm_safelyMapKey:(id)arg1 toObject:(id)arg2;
- (void)fm_safelySetObject:(id)arg1 forKey:(id)arg2;
- (void)safelyMapKey:(id)arg1 toObject:(id)arg2;
- (void)safelySetObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

- (void)fiui_incrementValueForKey:(id)arg1 byValue:(double)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (void)_gkAddEntriesFromFormEncodedString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (void)hf_setMinimumDisplayPriority:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbDictionaryFromOPACKData:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

- (void)setAsString:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)nonRetainingDictionary;
+ (id)nonRetainingKeyAndValueDictionary;
+ (id)retainingKeyDictionary;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (id)if_popObjectForKey:(id)arg1;
- (void)if_setBoolIfYES:(bool)arg1 forKey:(id)arg2;
- (void)if_setObjectIfNonNil:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (void)mf_fixupRFC2231Values;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

- (void)MCDeepCopyEntriesFromDictionary:(id)arg1;
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1;
- (void)MCDeleteBoolRestriction:(id)arg1;
- (void)MCFilterRestrictionPayloadKeys:(id)arg1;
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;
- (id)MCMutableDictionaryContainingValidatedKeysAndClasses:(id)arg1 removeKeys:(bool)arg2 outError:(id*)arg3;
- (void)MCSetBoolRestriction:(id)arg1 value:(bool)arg2;
- (void)MCSetIntersectionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetIntersectionSetting:(id)arg1 values:(id)arg2;
- (void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)MCSetUnionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetUnionSetting:(id)arg1 values:(id)arg2;
- (void)MCSetValueRestriction:(id)arg1 value:(id)arg2;
- (id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 allowZeroLengthString:(bool)arg4 outError:(id*)arg5;
- (id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 outError:(id*)arg4;
- (id)MCValidateAndRemoveNonZeroLengthStringWithKey:(id)arg1 isRequired:(bool)arg2 outError:(id*)arg3;
- (id)MCValidateAndRemoveObjectOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 outError:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (void)copyObjectFromDictionary:(id)arg1 forKey:(id)arg2;
- (void)copyObjectFromDictionaryRemoveIfNotPresent:(id)arg1 forKey:(id)arg2;
- (void)copyObjectsFromDictionary:(id)arg1 forKeys:(id)arg2;
- (void)copyObjectsFromDictionaryRemoveIfNotPresent:(id)arg1 forKeys:(id)arg2;
- (void)removeObjectsForKeysOtherThan:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setBoolIfNotPresent:(bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setDoubleIfNotPresent:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setFloatIfNotPresent:(float)arg1 forKey:(id)arg2;
- (void)setInt:(int)arg1 forKey:(id)arg2;
- (void)setIntIfNotPresent:(int)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forIndex:(int)arg2;
- (void)setObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)setObjectIfNotPresent:(id)arg1 forKey:(id)arg2;
- (void)setObjectOrRemoveIfNil:(id)arg1 forKey:(id)arg2;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)setRectIfNotPresent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (void)mf_addObject:(id)arg1 forKey:(id)arg2;
- (id)mf_objectForKey:(id)arg1 ofClass:(Class)arg2;
- (void)mf_setBool:(bool)arg1 forKey:(id)arg2;
- (void)mf_setInteger:(int)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy

- (void)mf_addObject:(id)arg1 forKey:(id)arg2;
- (id)mf_objectForKey:(id)arg1 ofClass:(Class)arg2;
- (void)mf_setBool:(bool)arg1 forKey:(id)arg2;
- (void)mf_setInteger:(int)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit

- (void)mt_removeNaNValues;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)mergeWithDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (id)na_objectForKey:(id)arg1 withDefaultValue:(id /* block */)arg2;
- (void)na_safeSetObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)fc_dequeueTransactions;
- (bool)fc_enqueueActionType:(long long)arg1;
- (void)fc_enqueueTransaction:(id)arg1 withMaxTransactionCount:(unsigned long long)arg2;
- (void)fc_mergeWithDictionary:(id)arg1 withValueCombiner:(id /* block */)arg2;
- (void)fc_popActionTypesUpToCount:(unsigned long long)arg1;
- (void)fc_removeObjectsForKeysNotInArray:(id)arg1;
- (void)fc_removeObjectsForKeysNotInSet:(id)arg1;
- (void)fc_removeObjectsForKeysPassingTest:(id /* block */)arg1;
- (void)fc_safelySetObject:(id)arg1 forKey:(id)arg2;
- (void)fc_safelySetObjectAllowingNil:(id)arg1 forKey:(id)arg2;
- (void)fc_safelySetObjectAllowingNil:(id)arg1 forKeyAllowingNil:(id)arg2;
- (void)fc_setLocalDataHintIfNeeded:(bool)arg1;
- (void)fc_transformValuesWithKeyAndValueBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (void)ic_addKey:(id)arg1 forNonNilObject:(id)arg2;
- (void)ic_removeObjectForNonNilKey:(id)arg1;
- (void)ic_setNonNilObject:(id)arg1 forKey:(id)arg2;
- (void)ic_setNonNilObject:(id)arg1 forNonNilKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (void)ic_addZoneID:(id)arg1 forAccountID:(id)arg2;
- (void)ic_removeZoneID:(id)arg1 forAccountID:(id)arg2;

// Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics

- (void)addTurnstileInfoDesc:(struct stackshot_thread_turnstileinfo { unsigned long long x1; unsigned long long x2; unsigned char x3; unsigned char x4; unsigned long long x5; }*)arg1 count:(unsigned int)arg2;
- (void)addWaitInfoDesc:(struct stackshot_thread_waitinfo { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned char x4; }*)arg1 count:(unsigned int)arg2;
- (void)osa_logCounter_countLogTypes_internal:(id)arg1 forOwner:(id)arg2;
- (unsigned long long)osa_logCounter_getForSubtype:(id)arg1 forOwner:(id)arg2;
- (void)osa_logCounter_incrementForSubtype:(id)arg1 signature:(id)arg2 filepath:(const char *)arg3;
- (void)osa_logCounter_incrementForSubtype_internal:(id)arg1 signature:(id)arg2 filepath:(const char *)arg3;
- (bool)osa_logCounter_isLog:(id)arg1 byKey:(id)arg2 count:(unsigned long long*)arg3 withinLimit:(unsigned long long*)arg4 withOptions:(id)arg5;
- (void)osa_logCounter_recordNixedDuplicate:(const char *)arg1;

// Image: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate

- (void)_accumulateKey:(id)arg1 value:(long long)arg2;
- (void)_accumulateKey:(id)arg1 value:(long long)arg2;
- (void)_recordRetirement:(id)arg1 reason:(id)arg2;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;
+ (id)tsu_dictionaryByInvertingDictionaryIfPossible:(id)arg1;

- (id)addToCacheAndReturnCssString:(id)arg1;
- (id)tsu_objectForKey:(id)arg1 withDefaultOfClass:(Class)arg2;
- (id)tsu_objectForKey:(id)arg1 withDefaultUsingBlock:(id /* block */)arg2;
- (void)tsu_setNonNilObject:(id)arg1 forKey:(id)arg2;
- (void)tsu_setNonNilValueForKey:(id)arg1 fromDictionary:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void)safelySetObject:(id)arg1 forKey:(id)arg2;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInt32:(int)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setLongLong:(long long)arg1 forKey:(id)arg2;
- (void)setObjectOrNull:(id)arg1 forKey:(id)arg2;
- (void)setUnsignedLongLong:(unsigned long long)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (void)_pl_setNonNilObject:(id)arg1 forKey:(id)arg2;
- (void)pl_applyOrientation:(long long)arg1 toNormalizedPointWithXKey:(id)arg2 yKey:(id)arg3;
- (void)pl_enforceCorrectValuesForMinKey:(id)arg1 maxKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit

- (id)_createOrConvertToMutableDictionaryFromDictionary:(id)arg1;
- (id)_mutableDictionaryAtKeyPath:(struct NSArray { Class x1; }*)arg1;
- (void)_overlayCustomValueAtKeyPath:(struct NSArray { Class x1; }*)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 handler:(id /* block */)arg4;
- (void)_overlayValueAtKey:(id)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 targetTakePrecedent:(bool)arg4 nestedDictionaryHandler:(id /* block */)arg5;
- (void)pk_overlayDictionary:(id)arg1 existingValuesTakePrecedent:(bool)arg2 exceptKeyPaths:(struct NSSet { Class x1; }*)arg3 exemptionHandler:(id /* block */)arg4;
- (void)pk_removeItemsAtKeyPaths:(struct NSSet { Class x1; }*)arg1;

// Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo

- (void)addObject:(id)arg1 toSetForKey:(id)arg2;
- (id)objectsInAllSetsForKeys:(id)arg1;
- (void)removeObject:(id)arg1 fromSetForKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport

- (void)_pas_setObject:(id)arg1 forNonCopiedKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

- (void)rc_safelySetObjectAllowingNil:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (void)scrc_mergeEntriesFromDictionary:(id)arg1;
- (void)scrc_mergeEntriesFromDictionary:(id)arg1 factory:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport

- (void)setSafeObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices

- (void)setSafeObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;
+ (id)tsu_dictionaryByInvertingDictionaryIfPossible:(id)arg1;

- (id)tsu_objectForKey:(id)arg1 withDefaultOfClass:(Class)arg2;
- (id)tsu_objectForKey:(id)arg1 withDefaultUsingBlock:(id /* block */)arg2;
- (void)tsu_removeObjectsWithoutKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback

- (void)tvp_setObjectIfNotNil:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

+ (id)dictionaryFromXPCObject:(id)arg1;
+ (id)dictionaryWithKeys:(id)arg1 values:(id)arg2;

- (id)getContextValueWithName:(id)arg1;
- (void)keys:(id*)arg1 values:(id*)arg2;
- (id)setContextValueWithName:(id)arg1 value:(id)arg2;
- (id)tri_contextValueWithName:(id)arg1;
- (id)tri_setContextValueWithName:(id)arg1 value:(id)arg2;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_dictionaryWithContentsOfDictionaries:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (void)uns_safeSetCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)uns_safeSetCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forKey:(id)arg2;
- (void)uns_safeSetNonEmptyArray:(id)arg1 forKey:(id)arg2;
- (void)uns_safeSetNonEmptyDictionary:(id)arg1 forKey:(id)arg2;
- (void)uns_safeSetNonEmptySet:(id)arg1 forKey:(id)arg2;
- (void)uns_safeSetNonEmptyString:(id)arg1 forKey:(id)arg2;
- (void)uns_safeSetObject:(id)arg1 forKey:(id)arg2;
- (void)uns_setCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)uns_setCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

- (void)vcp_addEntriesFromResults:(id)arg1;
- (void)vcp_addFlags:(unsigned long long)arg1;
- (void)vcp_addStatsFlags:(unsigned long long)arg1;
- (void)vcp_addTypes:(unsigned long long)arg1;
- (void)vcp_appendResult:(id)arg1 forKey:(id)arg2;
- (void)vcp_appendResults:(id)arg1;
- (id)vcp_mutableResults;
- (void)vcp_removeResultForKey:(id)arg1;
- (void)vcp_removeSyncPoint;
- (void)vcp_setDateAnalyzed:(id)arg1;
- (void)vcp_setDateModified:(id)arg1;
- (void)vcp_setFingerprint:(id)arg1;
- (void)vcp_setFlags:(unsigned long long)arg1;
- (void)vcp_setQuality:(double)arg1;
- (void)vcp_setResult:(id)arg1 forKey:(id)arg2;
- (void)vcp_setResults:(id)arg1;
- (void)vcp_setStatsFlags:(unsigned long long)arg1;
- (void)vcp_setSyncPoint:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)vcp_setTimerange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)vcp_setTypes:(unsigned long long)arg1;
- (void)vcp_setVersion:(int)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

- (void)vui_setObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)vui_setOrRemoveObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

- (void)wlk_setObjectUnlessNil:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (void)tsp_addObject:(id)arg1 toArrayWithDeepCopyOptionKey:(id)arg2;
- (void)tsp_addObject:(id)arg1 toArrayWithSerializationOptionKey:(id)arg2;
- (void)tsp_delayArchivingObjectDuringDeepCopy:(id)arg1;
- (void)tsp_delayArchivingObjectDuringSerialization:(id)arg1;
- (void)tsp_setDeepCopyObjectProxy:(id)arg1 forReferencedObject:(id)arg2;
- (void)tsp_setSerializationObjectProxy:(id)arg1 forReferencedObject:(id)arg2;
- (void)tsp_skipArchivingObjectDuringDeepCopy:(id)arg1;
- (void)tsp_skipArchivingObjectDuringSerialization:(id)arg1;
- (id)tsu_objectForKey:(id)arg1 withDefaultOfClass:(Class)arg2;
- (id)tsu_objectForKey:(id)arg1 withDefaultUsingBlock:(id /* block */)arg2;
- (void)tsu_setNonNilObject:(id)arg1 forKey:(id)arg2;
- (void)tsu_setNonNilValueForKey:(id)arg1 fromDictionary:(id)arg2;

// Image: /usr/lib/swift/libswiftFoundation.dylib

- (id)__swift_objectForKeyedSubscript:(id)arg1;
- (void)__swift_setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
