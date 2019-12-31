/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMedicalIDSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_codableFromMedicalID:(id)arg1;
+ (long long)_getCurrentSyncAnchorWithProfile:(id)arg1 error:(id*)arg2;
+ (id)_medicalIDFromCodable:(id)arg1;
+ (bool)_setSyncAnchor:(long long)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)_touchSyncAnchorWithProfile:(id)arg1 shouldIncrement:(bool)arg2 error:(id*)arg3;
+ (bool)companionDidChangeForProfile:(id)arg1 error:(id*)arg2;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5;
+ (id)getSyncProvencanceOfMedicalIDForProfile:(id)arg1 error:(id*)arg2;
+ (bool)incrementSyncAnchorWithProfile:(id)arg1 error:(id*)arg2;
+ (int)nanoSyncObjectType;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)setSyncProvenance:(long long)arg1 profile:(id)arg2 error:(id*)arg3;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (bool)supportsSyncStore:(id)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;
+ (bool)touchSyncAnchorIfNecessaryWithProfile:(id)arg1 error:(id*)arg2;

@end
