/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDObjectAuthorizationEntity : HDHealthEntity

+ (bool)_insertCodableObjectAuthorizations:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)_setObjectAuthorizationRecords:(id)arg1 syncProvenance:(long long)arg2 skipErrors:(bool)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)authorizationRecordsBySourceForSampleWithUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)authorizationRecordsForSamples:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)authorizationStatusForSamplesOfType:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (bool)resetAllObjectAuthorizationRecordsForProfile:(id)arg1 error:(id*)arg2;
+ (bool)resetAuthorizationForObjects:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)resetObjectAuthorizationRecordsForSource:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)setObjectAuthorizationRecords:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)uniquedColumns;

@end
