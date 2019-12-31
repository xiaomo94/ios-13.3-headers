/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncZone : NSObject {
    HDCloudSyncDataUploadRequestRecord * _dataUploadRequestRecord;
    bool  _hasFutureSchemaRecord;
    HDCloudSyncMasterRecord * _masterRecord;
    long long  _purpose;
    NSMutableArray * _records;
    HDCloudSyncRepository * _repository;
    NSMutableArray * _sequenceRecords;
    HDCloudSyncStore * _store;
    HDCloudSyncStoreRecord * _storeRecord;
    bool  _validatedForSharing;
    HDCloudSyncZoneIdentifier * _zoneIdentifier;
    CKShare * _zoneShare;
    long long  _zoneType;
}

@property (nonatomic, readonly) HDCloudSyncDataUploadRequestRecord *dataUploadRequestRecord;
@property (nonatomic) bool hasFutureSchemaRecord;
@property (nonatomic, readonly) bool hasOrphanedSequenceRecords;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) HDCloudSyncMasterRecord *masterRecord;
@property (nonatomic) long long purpose;
@property (nonatomic, readonly) long long recordCount;
@property (nonatomic, readonly, copy) NSArray *recordNames;
@property (nonatomic, readonly) HDCloudSyncRepository *repository;
@property (nonatomic, retain) HDCloudSyncStore *store;
@property (nonatomic, readonly, copy) NSUUID *storeIdentifier;
@property (nonatomic, readonly) HDCloudSyncStoreRecord *storeRecord;
@property (nonatomic) bool validatedForSharing;
@property (nonatomic, readonly, copy) HDCloudSyncZoneIdentifier *zoneIdentifier;
@property (nonatomic, retain) CKShare *zoneShare;
@property (nonatomic, readonly) long long zoneType;

- (void).cxx_destruct;
- (bool)_addSubscriptionRecord:(id)arg1 error:(id*)arg2;
- (bool)addRecord:(id)arg1 error:(id*)arg2;
- (id)dataUploadRequestRecord;
- (id)description;
- (bool)hasFutureSchemaRecord;
- (bool)hasOrphanedSequenceRecords;
- (id)initForZoneIdentifier:(id)arg1 repository:(id)arg2 type:(long long)arg3;
- (bool)isEmpty;
- (id)masterRecord;
- (long long)purpose;
- (long long)recordCount;
- (id)recordNames;
- (id)repository;
- (void)setHasFutureSchemaRecord:(bool)arg1;
- (void)setPurpose:(long long)arg1;
- (void)setStore:(id)arg1;
- (void)setValidatedForSharing:(bool)arg1;
- (void)setZoneShare:(id)arg1;
- (id)store;
- (id)storeIdentifier;
- (id)storeRecord;
- (bool)validatedForSharing;
- (id)zoneIdentifier;
- (id)zoneShare;
- (long long)zoneType;

@end
