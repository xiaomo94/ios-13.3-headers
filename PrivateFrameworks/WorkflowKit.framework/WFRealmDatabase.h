/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFRealmDatabase : NSObject <WFDatabaseBackingStore> {
    RLMRealmConfiguration * _configuration;
    RLMRealm * _inMemoryRealm;
    bool  _mainThreadOnly;
    NSObject<OS_dispatch_queue> * _notificationQueue;
}

@property (nonatomic, readonly, copy) RLMRealmConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RLMRealm *inMemoryRealm;
@property (nonatomic, readonly) bool mainThreadOnly;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly) Class superclass;

+ (void)cleanOrphanedObjectsFromRealm:(id)arg1;
+ (id)visibleWorkflowsInRealm:(id)arg1;
+ (bool)wf_createDataVaultAndMigrateToItIfNeeded;

- (void).cxx_destruct;
- (id)accessResourceStatesForReference:(id)arg1;
- (void)accessStorageForDescriptor:(id)arg1 usingBlock:(id /* block */)arg2 withError:(id*)arg3;
- (id)allConfiguredTriggers;
- (void)clearTombstonesAndSyncState;
- (id)collectionForResult:(id)arg1 inRealm:(id)arg2;
- (id)configuration;
- (id)conflictingReferenceForReference:(id)arg1;
- (id)createTriggerWithRecord:(id)arg1 workflow:(id)arg2 error:(id*)arg3;
- (id)createWorkflowWithOptions:(id)arg1 error:(id*)arg2;
- (id)currentPerWorkflowStateDataForAccessResourceWithIdentifier:(id)arg1 forReference:(id)arg2;
- (void)deleteAllAccessResourceStateDataForReference:(id)arg1;
- (bool)deleteReference:(id)arg1 tombstone:(bool)arg2 error:(id*)arg3;
- (id)deletedWorkflows;
- (id)descriptorsForResult:(id)arg1 error:(id*)arg2;
- (id)duplicateReference:(id)arg1 newName:(id)arg2 error:(id*)arg3;
- (id)fileURL;
- (id)inMemoryRealm;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)initWithConfiguration:(id)arg1 mainThreadOnly:(bool)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isReference:(id)arg1 allowedToRunOnDomain:(id)arg2;
- (id)latestRunEvent;
- (id)logRunOfWorkflow:(id)arg1 withSource:(id)arg2 triggerID:(id)arg3;
- (bool)mainThreadOnly;
- (bool)migrateToCoreData:(id)arg1 error:(id*)arg2;
- (void)moveReferenceFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)notificationQueue;
- (id)objectForDescriptor:(id)arg1 inRealm:(id)arg2;
- (void)performAsynchronousOperation:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)performOperation:(id /* block */)arg1;
- (id)performOperation:(id /* block */)arg1 withError:(id*)arg2;
- (id)performRealmOperationWithBlock:(id /* block */)arg1;
- (id)performRealmOperationWithBlock:(id /* block */)arg1 withError:(id*)arg2;
- (id)performRealmTransactionWithBlock:(id /* block */)arg1 withError:(id*)arg2;
- (void)performTransactionWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (id)realmWithError:(id*)arg1;
- (id)referencesForWorkflowName:(id)arg1;
- (void)refresh;
- (void)setConflictingReference:(id)arg1 forReference:(id)arg2;
- (void)setInMemoryRealm:(id)arg1;
- (void)setOutcome:(long long)arg1 forRunEvent:(id)arg2;
- (void)setPerWorkflowStateData:(id)arg1 forAccessResourceWithIdentifier:(id)arg2 forReference:(id)arg3;
- (void)setSyncToken:(id)arg1;
- (void)setTrustedToRunScripts:(bool)arg1 forReference:(id)arg2 onDomain:(id)arg3;
- (void)setWorkflowOrdering:(id)arg1;
- (id)sortedRunEventsForTriggerID:(id)arg1;
- (id)sortedRunEventsWithSource:(id)arg1;
- (id)sortedVisibleWorkflows;
- (id)sortedVisibleWorkflowsByName;
- (id)sortedVisibleWorkflowsWithAssociatedAppBundleIdentifier:(id)arg1;
- (id)sortedVisibleWorkflowsWithType:(id)arg1;
- (id)sortedWorkflowsIncludingTombstonesAndConflicts;
- (bool)startObservingChangesForResult:(id)arg1;
- (long long)suggestedSortOrderingInRealm:(id)arg1;
- (id)syncToken;
- (id)workflowReferenceWithName:(id)arg1;

@end
