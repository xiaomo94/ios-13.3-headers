/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponent : NSObject <NSDiscardableContent> {
    _Atomic int  _accessCount;
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _canBeDropped;
    TSPComponentObjectUUIDMap * _componentObjectUUIDMap;
    long long  _compressionAlgorithm;
    NSMutableSet * _dataReferences;
    <TSPComponentDelegate> * _delegate;
    unsigned long long  _encodedLength;
    TSPComponentExternalReferenceMap * _externalReferenceMap;
    NSArray * _featureInfos;
    struct { 
        unsigned int usesDelayedArchiving : 1; 
        unsigned int modified : 1; 
        unsigned int persisted : 1; 
        unsigned int isStoredOutsideObjectArchive : 1; 
        unsigned int packageIdentifier : 2; 
        unsigned int discarded : 1; 
    }  _flags;
    long long  _identifier;
    NSDate * _lastModificationDate;
    NSString * _locator;
    TSPObjectReferenceMap * _objectReferenceMap;
    unsigned long long  _parseVersion;
    NSString * _preferredLocator;
    unsigned long long  _readVersion;
    unsigned long long  _requiredVersion;
    unsigned long long  _saveToken;
    TSPObject * _strongRootObject;
    TSPObject * _weakRootObject;
    unsigned long long  _writeVersion;
    NSMapTable * _writtenObjects;
}

@property (nonatomic, readonly) bool canBeDropped;
@property (nonatomic, readonly) TSPComponentObjectUUIDMap *componentObjectUUIDMap;
@property (nonatomic, readonly) long long compressionAlgorithm;
@property (nonatomic, readonly) unsigned long long encodedLength;
@property (nonatomic, readonly) NSArray *featureInfos;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) bool incompatibleVersion;
@property (nonatomic, readonly) bool isStoredOutsideObjectArchive;
@property (nonatomic, readonly) bool isTransientComponent;
@property (nonatomic, readonly) NSDate *lastModificationDate;
@property (nonatomic, readonly) NSString *locator;
@property (readonly) bool modified;
@property (readonly) bool needsArchiving;
@property (nonatomic, readonly) TSPObjectReferenceMap *objectReferenceMap;
@property (readonly) unsigned char packageIdentifier;
@property (nonatomic, readonly) unsigned long long parseVersion;
@property (readonly) bool persisted;
@property (nonatomic, readonly) NSString *preferredLocator;
@property (nonatomic, readonly) unsigned long long readVersion;
@property (nonatomic, readonly) unsigned long long requiredVersion;
@property (retain) TSPObject *rootObject;
@property (nonatomic, readonly) unsigned long long saveToken;
@property (nonatomic, readonly) unsigned long long writeVersion;

+ (id)componentsDiscardingContentOnCurrentThread;

- (void).cxx_destruct;
- (bool)addExternalReferenceToObjectOrLazyReference:(id)arg1 isWeak:(bool)arg2 externalReferenceMap:(id)arg3 delegate:(id)arg4;
- (id)additionalDescription;
- (bool)beginContentAccess;
- (bool)canBeDropped;
- (id)componentObjectUUIDMap;
- (long long)compressionAlgorithm;
- (void)continueDiscardingContentIfPossibleUsingBlock:(id /* block */)arg1;
- (id)description;
- (void)didReadObjects:(id)arg1;
- (void)discardContentIfPossible;
- (void)discardContentIfPossibleFromNSCache:(bool)arg1;
- (unsigned long long)encodedLength;
- (void)endContentAccess;
- (void)enumerateDataReferences:(id /* block */)arg1;
- (void)enumerateExternalReferences:(id /* block */)arg1;
- (struct ComponentExternalReferenceInfo { long long x1; bool x2; bool x3; })externalReferenceInfoForObjectIdentifier:(long long)arg1;
- (id)featureInfos;
- (long long)identifier;
- (bool)incompatibleVersion;
- (id)init;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4 isStoredOutsideObjectArchive:(bool)arg5 parseVersion:(unsigned long long)arg6 requiredVersion:(unsigned long long)arg7 canBeDropped:(bool)arg8 compressionAlgorithm:(long long)arg9 encodedLength:(unsigned long long)arg10 lastModificationDate:(id)arg11;
- (id)initWithDelegate:(id)arg1 message:(const struct ComponentInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; struct RepeatedField<unsigned int> { int x_7_1_1; int x_7_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_7_1_3; } x7; int x8; struct RepeatedPtrField<TSP::ComponentExternalReference> { struct Arena {} *x_9_1_1; int x_9_1_2; int x_9_1_3; struct Rep {} *x_9_1_4; } x9; struct RepeatedPtrField<TSP::ComponentDataReference> { struct Arena {} *x_10_1_1; int x_10_1_2; int x_10_1_3; struct Rep {} *x_10_1_4; } x10; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { struct Arena {} *x_11_1_1; int x_11_1_2; int x_11_1_3; struct Rep {} *x_11_1_4; } x11; struct RepeatedPtrField<TSP::FeatureInfo> { struct Arena {} *x_12_1_1; int x_12_1_2; int x_12_1_3; struct Rep {} *x_12_1_4; } x12; }*)arg2 packageIdentifier:(unsigned char)arg3 encodedLength:(unsigned long long)arg4 lastModificationDate:(id)arg5;
- (id)initWithDelegate:(id)arg1 rootObject:(id)arg2;
- (bool)isCachingEnabled;
- (bool)isContentDiscarded;
- (bool)isDiscardingContent;
- (bool)isStoredOutsideObjectArchive;
- (bool)isTransientComponent;
- (id)lastModificationDate;
- (id)locator;
- (void)markAsDiscarded;
- (bool)modified;
- (bool)needsArchiving;
- (bool)needsArchivingImpl;
- (id)newExternalReferenceMapWithStrongReferences:(id)arg1 weakReferences:(id)arg2 delegate:(id)arg3;
- (id)newUpdatedExternalReferenceMapUsingDelegate:(id)arg1;
- (id)objectReferenceMap;
- (unsigned char)packageIdentifier;
- (unsigned long long)parseVersion;
- (void)performSynchronousDiscardContentIfPossibleUsingBlock:(id /* block */)arg1;
- (bool)persisted;
- (id)preferredLocator;
- (unsigned long long)readVersion;
- (unsigned long long)requiredVersion;
- (id)rootObject;
- (void)saveToMessage:(struct ComponentInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; struct RepeatedField<unsigned int> { int x_7_1_1; int x_7_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_7_1_3; } x7; int x8; struct RepeatedPtrField<TSP::ComponentExternalReference> { struct Arena {} *x_9_1_1; int x_9_1_2; int x_9_1_3; struct Rep {} *x_9_1_4; } x9; struct RepeatedPtrField<TSP::ComponentDataReference> { struct Arena {} *x_10_1_1; int x_10_1_2; int x_10_1_3; struct Rep {} *x_10_1_4; } x10; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { struct Arena {} *x_11_1_1; int x_11_1_2; int x_11_1_3; struct Rep {} *x_11_1_4; } x11; struct RepeatedPtrField<TSP::FeatureInfo> { struct Arena {} *x_12_1_1; int x_12_1_2; int x_12_1_3; struct Rep {} *x_12_1_4; } x12; }*)arg1 saveToken:(unsigned long long)arg2 writtenComponentInfo:(const struct WrittenComponentInfo { id x1; id x2; bool x3; bool x4; bool x5; id x6; bool x7; bool x8; bool x9; id x10; id x11; bool x12; unsigned long long x13; unsigned long long x14; bool x15; long long x16; unsigned long long x17; unsigned long long x18; id x19; id x20; id x21; id x22; id x23; id x24; }*)arg3;
- (unsigned long long)saveToken;
- (void)setArchivedObjectsImpl:(id)arg1;
- (void)setComponentObjectUUIDMap:(id)arg1;
- (void)setEncodedLength:(unsigned long long)arg1 lastModificationDate:(id)arg2;
- (void)setLocator:(id)arg1;
- (void)setModified:(bool)arg1 forObject:(id)arg2;
- (void)setModified:(bool)arg1 forObject:(id)arg2 isDocumentUpgrade:(bool)arg3;
- (void)setModifiedImpl:(bool)arg1 forObject:(id)arg2;
- (void)setPackageIdentifier:(unsigned char)arg1 preferredLocator:(id)arg2 locator:(id)arg3 isStoredOutsideObjectArchive:(bool)arg4 parseVersion:(unsigned long long)arg5 requiredVersion:(unsigned long long)arg6 canBeDropped:(bool)arg7 compressionAlgorithm:(long long)arg8 rootObjectOrNil:(id)arg9 archivedObjects:(id)arg10 externalReferenceMap:(id)arg11 dataReferences:(id)arg12 readVersion:(unsigned long long)arg13 writeVersion:(unsigned long long)arg14 featureInfos:(id)arg15 componentObjectUUIDMap:(id)arg16 objectReferenceMap:(id)arg17 saveToken:(unsigned long long)arg18 encodedLength:(unsigned long long)arg19 lastModificationDate:(id)arg20 wasCopied:(bool)arg21 wasModifiedDuringWrite:(bool)arg22;
- (void)setReadVersion:(unsigned long long)arg1 writeVersion:(unsigned long long)arg2 componentObjectUUIDMap:(id)arg3;
- (void)setRootObject:(id)arg1;
- (bool)shouldForceCaching;
- (bool)shouldKeepStrongObjectImpl;
- (void)willDiscardComponent;
- (unsigned long long)writeVersion;

@end
