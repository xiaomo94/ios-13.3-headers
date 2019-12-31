/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellSpec : NSObject <TSSPropertyCommandSerializing, TSTCellDiffing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasTSCEFormula;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int interactionType;
@property (nonatomic, readonly) bool isControl;
@property (readonly) Class superclass;

+ (id)cellDiffProperties;
+ (id)cellSpecFromTSKFormat:(id)arg1;
+ (id)defaultCellSpec;
+ (id)instanceWithArchive:(const struct CellSpecArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct FormulaArchive {} *x5; struct Reference {} *x6; double x7; double x8; double x9; unsigned int x10; bool x11; bool x12; }*)arg1 unarchiver:(id)arg2;
+ (int)interactionTypeForShimControlFormatType:(int)arg1;
+ (bool)interactionTypeIsControl:(int)arg1;
+ (bool)isShimControlFormatType:(int)arg1;
+ (int)shimControlFormatTypeForInteractionType:(int)arg1;

- (id)asChooserControlSpec;
- (id)asFormulaSpec;
- (id)asRangeControlSpec;
- (id)asToggleControlSpec;
- (id)description;
- (bool)hasTSCEFormula;
- (unsigned long long)hash;
- (id)init;
- (id)initFromPropertyCommandMessage:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;
- (id)initWithArchive:(const struct CellSpecArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct FormulaArchive {} *x5; struct Reference {} *x6; double x7; double x8; double x9; unsigned int x10; bool x11; bool x12; }*)arg1 unarchiver:(id)arg2;
- (int)interactionType;
- (bool)isControl;
- (bool)isEqual:(id)arg1;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (id)propertiesMatchingThoseInMap:(id)arg1;
- (void)saveToArchive:(struct CellSpecArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct FormulaArchive {} *x5; struct Reference {} *x6; double x7; double x8; double x9; unsigned int x10; bool x11; bool x12; }*)arg1 archiver:(id)arg2;
- (void)saveToPropertyCommandMessage:(struct Message { int (**x1)(); }*)arg1 archiver:(id)arg2;
- (bool)validateFormatAndValue:(id)arg1;

@end
