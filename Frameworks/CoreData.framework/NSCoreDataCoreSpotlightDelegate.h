/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCoreDataCoreSpotlightDelegate : NSObject {
    NSString * _bundleIdentifier;
    NSManagedObjectContext * _context__;
    NSPersistentStoreCoordinator * _coordinator;
    NSPersistentStoreDescription * _description;
    NSString * _domainIdentifier;
    bool  _enabled;
    NSString * _indexName;
    NSString * _protectionClass;
    NSString * _storeIdentifier;
    bool  _supportsPersistentHistory;
    bool  _usesPrivateIndex;
    bool  _usesSharedCoordinatorStack;
}

@property (nonatomic, readonly) NSManagedObjectContext *_context;

- (void)_asyncContextBlock:(id /* block */)arg1;
- (void)_catchUpToCurrentTransaction;
- (id)_context;
- (void)_doFullReimport;
- (void)_importObjectsUpdatedSinceTransaction:(id)arg1;
- (bool)_initialImportCompleted;
- (void)_initializePersistentStore;
- (void)_invalidate;
- (id)_lastImportedTransaction;
- (id)_processTransactionsStartingAt:(id)arg1;
- (id)_processedOidsForDictionary:(id)arg1;
- (id)_processedOidsForSaveRequest:(id)arg1;
- (void)_reindexInstancesOf:(id)arg1 inIndex:(id)arg2;
- (id)_retainedCurrentSearchableIndex;
- (id)_searchableItemForObject:(id)arg1;
- (id)_spotlightClientStateForHistoryTracking;
- (void)_updateSpotlightClientStateForHistoryTracking:(id)arg1;
- (void)_updateSpotlightIndexForObjectsWithIDs:(id)arg1;
- (void)_updateSpotlightIndexFromSaveRequest:(id)arg1;
- (id)attributeSetForObject:(id)arg1;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)domainIdentifier;
- (id)indexName;
- (void)indexSearchableItemsToCurrentHistoryToken;
- (id)initForStoreWithDescription:(id)arg1 coordinator:(id)arg2;
- (id)initForStoreWithDescription:(id)arg1 model:(id)arg2;
- (id)protectionClass;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)startSpotlightIndexing;
- (void)stopSpotlightIndexing;
- (bool)usePrivateIndex;

@end