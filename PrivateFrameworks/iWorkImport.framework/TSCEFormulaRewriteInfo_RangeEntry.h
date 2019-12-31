/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaRewriteInfo_RangeEntry : NSObject {
    unsigned int  _offset;
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { 
        struct UUIDData<TSP::UUIDData> {} *__begin_; 
        struct UUIDData<TSP::UUIDData> {} *__end_; 
        struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { 
            struct UUIDData<TSP::UUIDData> {} *__value_; 
        } __end_cap_; 
    }  _orderedUuids;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property unsigned int offset;
@property (readonly) const /* Warning: unhandled struct encoding: '{vector<TSU::UUIDData<TSP::UUIDData>' */ struct *orderedUuids; /* unknown property attribute:  std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >=^{UUIDData<TSP::UUIDData>}}} */
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initFromMessage:(const struct RewriteRangeEntryArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::UUID> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned int x6; unsigned int x7; unsigned int x8; }*)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 orderedUuids:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg2 offset:(unsigned int)arg3;
- (unsigned int)offset;
- (const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)orderedUuids;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)saveToMessage:(struct RewriteRangeEntryArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::UUID> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned int x6; unsigned int x7; unsigned int x8; }*)arg1;
- (void)setOffset:(unsigned int)arg1;

@end
