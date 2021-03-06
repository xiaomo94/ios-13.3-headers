/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMDAChangeTrackingHelper : NSObject {
    <REMDAAccountProviding> * _account;
    NSMutableDictionary * _cached_insertedModelObjectResultsByModelClassName;
    REMObjectID * _cached_remAccountObjectID;
    NSMutableDictionary * _cached_updatedModelObjectResultsByModelClassName;
    REMChangeSet * _changeSet;
    REMChangeTracking * _changeTracking;
    REMStore * _remStore;
    REMChangeToken * _sinceToken;
    REMChangeToken * _upToToken;
}

@property (nonatomic, readonly) <REMDAAccountProviding> *account;
@property (nonatomic, retain) NSMutableDictionary *cached_insertedModelObjectResultsByModelClassName;
@property (nonatomic, retain) REMObjectID *cached_remAccountObjectID;
@property (nonatomic, retain) NSMutableDictionary *cached_updatedModelObjectResultsByModelClassName;
@property (nonatomic, retain) REMChangeSet *changeSet;
@property (nonatomic, retain) REMChangeTracking *changeTracking;
@property (nonatomic, retain) REMStore *remStore;
@property (nonatomic, retain) REMChangeToken *sinceToken;
@property (nonatomic, retain) REMChangeToken *upToToken;

+ (bool)shouldIgnoreChangeOfModelClassProperties:(Class)arg1 withChangeObject:(id)arg2;

- (void).cxx_destruct;
- (id)_cachedModeObjectResultsForModelClass:(Class)arg1 changeType:(long long)arg2;
- (long long)_changeTypeMaskFromChangeType:(long long)arg1;
- (id)_changedModelObjectsOfClass:(Class)arg1 ofChangeTypes:(long long)arg2;
- (id)_fetchModelObjectOfClass:(Class)arg1 withObjectID:(id)arg2 includeMarkedForDelete:(bool)arg3;
- (id)_fetchModelObjectsOfClass:(Class)arg1 withObjectIDs:(id)arg2;
- (void)_handleLazyDeletionChange:(id)arg1 ofModelClass:(Class)arg2 forClientID:(id)arg3 deleteHandler:(id /* block */)arg4 undeleteHandler:(id /* block */)arg5;
- (id)_rem_accountObjectID;
- (id)_rem_changeTracking;
- (id)_rem_changeTrackingClientName;
- (void)_setCachedModeObjectResults:(id)arg1 forModelClass:(Class)arg2 changeType:(long long)arg3;
- (id)account;
- (id)cached_insertedModelObjectResultsByModelClassName;
- (id)cached_remAccountObjectID;
- (id)cached_updatedModelObjectResultsByModelClassName;
- (id)changeSet;
- (id)changeTracking;
- (id)changedIdentifiersOfModelClass:(Class)arg1 ofChangeType:(long long)arg2;
- (id)changedModelObjectsOfModelClass:(Class)arg1 ofChangeType:(long long)arg2;
- (void)clearCachedModelObjectResultsForModelClass:(Class)arg1;
- (id)fetchAndInitializeChangeTrackingStateIfNeeded;
- (id)fetchChangesSinceLastConsumed;
- (id)initWithREMDAAccount:(id)arg1 withREMStore:(id)arg2;
- (void)markChangesConsumed;
- (id)remStore;
- (void)setCached_insertedModelObjectResultsByModelClassName:(id)arg1;
- (void)setCached_remAccountObjectID:(id)arg1;
- (void)setCached_updatedModelObjectResultsByModelClassName:(id)arg1;
- (void)setChangeSet:(id)arg1;
- (void)setChangeTracking:(id)arg1;
- (void)setRemStore:(id)arg1;
- (void)setSinceToken:(id)arg1;
- (void)setUpToToken:(id)arg1;
- (id)sinceToken;
- (id)upToToken;

@end
