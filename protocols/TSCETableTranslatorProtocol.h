/* Generated by RuntimeBrowser.
 */

@protocol TSCETableTranslatorProtocol <NSObject>

@required

- (struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })baseCellCoordForChromeCellCoord:(struct TSUChromeCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })baseCellCoordForViewCellCoord:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct RefTypeHolder<TSCECellRef, 0> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; })baseCellRefForViewCellRef:(const struct RefTypeHolder<TSCECellRef, 1> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (struct TSUModelColumnIndex { unsigned short x1; })baseColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex { unsigned short x1; })arg1;
- (struct TSUModelColumnIndex { unsigned short x1; })baseColumnIndexForColumnUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (struct TSUModelColumnIndex { unsigned short x1; })baseColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex { unsigned short x1; })arg1;
- (NSIndexSet *)baseColumnIndexesForUIDs:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (NSIndexSet *)baseColumnIndexesForViewColumnIndexes:(NSIndexSet *)arg1;
- (struct TSUModelRowIndex { unsigned int x1; })baseRowIndexForChromeRowIndex:(struct TSUChromeRowIndex { unsigned int x1; })arg1;
- (struct TSUModelRowIndex { unsigned int x1; })baseRowIndexForRowUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (struct TSUModelRowIndex { unsigned int x1; })baseRowIndexForViewRowIndex:(struct TSUViewRowIndex { unsigned int x1; })arg1;
- (NSIndexSet *)baseRowIndexesForUIDs:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (NSIndexSet *)baseRowIndexesForViewRowIndexes:(NSIndexSet *)arg1;
- (TSCECellTractRef *)baseTractRefForChromeTractRef:(TSCECellTractRef *)arg1;
- (TSCECellTractRef *)baseTractRefForViewTractRef:(TSCECellTractRef *)arg1;
- (struct TSUChromeCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })chromeCellCoordForBaseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct TSUChromeCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })chromeCellCoordForViewCellCoord:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct RefTypeHolder<TSCECellRef, 2> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; })chromeCellRefForBaseCellRef:(const struct RefTypeHolder<TSCECellRef, 0> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (struct RefTypeHolder<TSCECellRef, 2> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; })chromeCellRefForViewCellRef:(const struct RefTypeHolder<TSCECellRef, 1> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (struct TSUChromeColumnIndex { unsigned short x1; })chromeColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex { unsigned short x1; })arg1;
- (struct TSUChromeColumnIndex { unsigned short x1; })chromeColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex { unsigned short x1; })arg1;
- (NSIndexSet *)chromeColumnIndexesForViewColumnIndexes:(NSIndexSet *)arg1;
- (struct TSUChromeRowIndex { unsigned int x1; })chromeRowIndexForBaseRowIndex:(struct TSUModelRowIndex { unsigned int x1; })arg1;
- (struct TSUChromeRowIndex { unsigned int x1; })chromeRowIndexForViewRowIndex:(struct TSUViewRowIndex { unsigned int x1; })arg1;
- (NSIndexSet *)chromeRowIndexesForViewRowIndexes:(NSIndexSet *)arg1;
- (TSCECellTractRef *)chromeTractRefForBaseTractRef:(TSCECellTractRef *)arg1;
- (TSCECellTractRef *)chromeTractRefForViewTractRef:(TSCECellTractRef *)arg1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })columnUIDForBaseColumnIndex:(const struct TSUModelColumnIndex { unsigned short x1; }*)arg1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })columnUIDForViewColumnIndex:(const struct TSUViewColumnIndex { unsigned short x1; }*)arg1;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; })columnUIDsForBaseColumnIndexes:(NSIndexSet *)arg1;
- (NSMutableIndexSet *)mutableBaseColumnIndexesForUIDs:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (NSMutableIndexSet *)mutableBaseRowIndexesForUIDs:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })rowUIDForBaseRowIndex:(const struct TSUModelRowIndex { unsigned int x1; }*)arg1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })rowUIDForViewRowIndex:(const struct TSUViewRowIndex { unsigned int x1; }*)arg1;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; })rowUIDsForBaseRowIndexes:(NSIndexSet *)arg1;
- (struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })viewCellCoordForBaseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })viewCellCoordForChromeCellCoord:(struct TSUChromeCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })viewCellCoordForSummaryCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; })arg1;
- (struct RefTypeHolder<TSCECellRef, 1> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; })viewCellRefForBaseCellRef:(const struct RefTypeHolder<TSCECellRef, 0> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (struct RefTypeHolder<TSCECellRef, 1> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; })viewCellRefForChromeCellRef:(const struct RefTypeHolder<TSCECellRef, 2> { struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (NSMutableIndexSet *)viewColumnGridIndexesForBaseColumnGridIndexes:(NSMutableIndexSet *)arg1;
- (struct TSUViewColumnIndex { unsigned short x1; })viewColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex { unsigned short x1; })arg1;
- (struct TSUViewColumnIndex { unsigned short x1; })viewColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex { unsigned short x1; })arg1;
- (struct TSUViewColumnIndex { unsigned short x1; })viewColumnIndexForColumnUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (NSIndexSet *)viewColumnIndexesForBaseColumnIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)viewColumnIndexesForChromeColumnIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)viewColumnIndexesForUIDs:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (struct TSUViewRowIndex { unsigned int x1; })viewRowIndexForBaseRowIndex:(struct TSUModelRowIndex { unsigned int x1; })arg1;
- (struct TSUViewRowIndex { unsigned int x1; })viewRowIndexForChromeRowIndex:(struct TSUChromeRowIndex { unsigned int x1; })arg1;
- (struct TSUViewRowIndex { unsigned int x1; })viewRowIndexForRowUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (NSIndexSet *)viewRowIndexesForBaseRowIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)viewRowIndexesForChromeRowIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)viewRowIndexesForUIDs:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (TSCECellTractRef *)viewTractRefForBaseTractRef:(TSCECellTractRef *)arg1;
- (TSCECellTractRef *)viewTractRefForChromeTractRef:(TSCECellTractRef *)arg1;

@end
