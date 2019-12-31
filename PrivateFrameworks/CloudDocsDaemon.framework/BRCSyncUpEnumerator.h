/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncUpEnumerator : NSEnumerator {
    unsigned int  _batchSize;
    NSMutableSet * _chainedParentIDWhitelist;
    BRCClientZone * _clientZone;
    struct PQLResultSet { Class x1; } * _enumerator;
    NSMutableSet * _itemIDsLostOrThrottled;
    NSMutableSet * _itemIDsNeedingOSUpgrade;
    BRCLocalItem * _itemNeedingPCSChaining;
    NSMutableArray * _itemsNeedingUnshare;
    unsigned int  _maxDepth;
    unsigned long long  _retryAfter;
    NSMutableIndexSet * _returned;
    unsigned int  _should2PhasePCSChain;
    NSMutableArray * _stack;
    int  _stage;
    NSMutableDictionary * _tombstonesEmbargo;
    NSMutableSet * _whitelist;
}

@property (nonatomic, readonly) unsigned int batchSize;
@property (nonatomic, readonly) NSMutableSet *chainedParentIDWhitelist;
@property (nonatomic, readonly) BRCLocalItem *itemNeedingPCSChaining;
@property (nonatomic, readonly) NSMutableArray *itemsNeedingUnshare;
@property (nonatomic, readonly) unsigned long long retryAfter;

- (void).cxx_destruct;
- (void)_blackListDescendantStack:(id)arg1 parentItem:(id)arg2 andAddToSet:(id)arg3;
- (void)_blackListDescendantStack:(id)arg1 parentItem:(id)arg2 andAddToSet:(id)arg3 descendantBlock:(id /* block */)arg4;
- (bool)_blackListDescendantStackAndItemIfThrottledOrNeedsOSUpgrade:(id)arg1 now:(unsigned long long)arg2;
- (struct PQLResultSet { Class x1; }*)_documentsOrAliasesNeedingSyncUpEnumerator;
- (bool)_handleSharedItemWhichMovedToNewShare:(id)arg1 rootItem:(id)arg2;
- (struct PQLResultSet { Class x1; }*)_liveOrNewDirectoriesNeedingSyncUpEnumerator;
- (id)_nextLiveItem;
- (id)_nextTombstone;
- (struct PQLResultSet { Class x1; }*)_tombstoneLeavesNeedingSyncUpEnumerator;
- (unsigned int)batchSize;
- (id)chainedParentIDWhitelist;
- (bool)handleItemForOSUpgrade:(id)arg1 parentItemID:(id)arg2;
- (id)initWithClientZone:(id)arg1;
- (void)invalidate;
- (bool)isBlackListed:(id)arg1;
- (id)itemNeedingPCSChaining;
- (id)itemsNeedingUnshare;
- (id)nextObject;
- (unsigned long long)retryAfter;

@end
