/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectUUIDMap : NSObject {
    NSMutableSet * _UUIDsWithSuppressedAssertions;
    NSObject<OS_dispatch_queue> * _accessQueue;
    _Atomic int  _assertOnReadCount;
    TSPObjectContext * _context;
    NSMutableDictionary * _inMemoryUUIDDictionary;
    TSPPersistedObjectUUIDMap * _persistedUUIDMap;
}

- (void).cxx_destruct;
- (void)beginAssertOnRead;
- (void)endAssertOnRead;
- (bool)hasObjectUUID:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)object:(id)arg1 didChangeUUIDToValue:(id)arg2 fromValue:(id)arg3;
- (bool)objectUUIDIsInDocument:(id)arg1;
- (void)objectWasAddedToDocument:(id)arg1 options:(unsigned long long)arg2;
- (void)objectWillBeRemovedFromDocument:(id)arg1;
- (id)objectWithUUID:(id)arg1 onlyIfLoaded:(bool)arg2 validateNewObjects:(bool)arg3 identifier:(long long*)arg4;
- (void)setPersistedUUIDMap:(id)arg1;
- (bool)shouldSuppressAssertionForObjectUUID:(id)arg1;

@end
