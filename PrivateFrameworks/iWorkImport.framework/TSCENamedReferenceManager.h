/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCENamedReferenceManager : TSPObject <TSCEReferenceTrackerDelegate> {
    TSCECalculationEngine * _calcEngine;
    bool  _markIndirectsDirtyInWritePhase;
    TSCENamedReferenceTrie * _names;
    NSObject<OS_dispatch_queue> * _nrmQueue;
    TSCEReferenceTracker * _referenceTracker;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *> > > { 
        struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, std::__1::hash<TSUUUID>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSUPointerKeyDictionary *>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _stringsByTrackedReferenceByTable;
    TSCEReferenceTracker * _weakReferenceTracker;
}

@property TSCECalculationEngine *calcEngine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)beginTrackingNameInCell:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1 ofResolver:(struct TSCETableResolver { int (**x1)(); }*)arg2 addingTrackedReferencesTo:(id)arg3;
- (void)beginTrackingNamesInRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct TSUCellCoord { unsigned int x_2_1_1; unsigned short x_2_1_2; bool x_2_1_3; bool x_2_1_4; } x2; })arg1 ofResolver:(struct TSCETableResolver { int (**x1)(); }*)arg2 addingTrackedReferencesTo:(id)arg3;
- (id)beginTrackingNamesInTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 limitedToRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct TSUCellCoord { unsigned int x_2_1_1; unsigned short x_2_1_2; bool x_2_1_3; bool x_2_1_4; } x2; })arg2;
- (id)calcEngine;
- (id)cellRangeWasInserted:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (void)commonInit;
- (id)description;
- (void)endOfEvaluationWritePhase;
- (void)endTrackingNamesInTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })formulaOwnerUID;
- (void)headerCellContentWasModified:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })rangeForTrackedReference:(id)arg1 gettingTrackedCell:(struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg2;
- (id)referenceForTrackedReference:(id)arg1 sticky:(bool)arg2;
- (bool)referenceNameIsUnique:(id)arg1 forReference:(const struct RefTypeHolder<TSCERangeRef, 2> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_3_1; unsigned short x_1_3_2; bool x_1_3_3; bool x_1_3_4; } x_1_2_1; struct TSUCellCoord { unsigned int x_2_3_1; unsigned short x_2_3_2; bool x_2_3_3; bool x_2_3_4; } x_1_2_2; } x_1_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg2 contextTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg3;
- (id)referenceTracker;
- (void)referenceTrackerDidUpdateReferences:(id)arg1;
- (void)referencedCellWasModified:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setCalcEngine:(id)arg1;
- (void)setCalculationEngine:(id)arg1;
- (bool)shouldRewriteOnCellMerge;
- (bool)shouldRewriteOnRangeMove;
- (bool)shouldRewriteOnSort;
- (bool)shouldRewriteOnTableIDReassignment;
- (bool)shouldRewriteOnTectonicShift;
- (bool)shouldRewriteOnTranspose;
- (id)stringForTrackedReference:(id)arg1 inTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (void)trackedReferenceWasDeleted:(id)arg1 fromOwnerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (id)trackedReferencesExactlyMatchingString:(id)arg1 scopedToTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (bool)trackedReferencesExistForTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (id)trackedReferencesMatchingPrefix:(id)arg1;
- (id)trackedReferencesMatchingPrefix:(id)arg1 scopedToTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (void)updateTrackedHeaders:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (void)willClose;

@end