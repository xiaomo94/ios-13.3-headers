/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTOperatorNode : TSTExpressionNode {
    unsigned short  _operatorChar;
}

@property (nonatomic) unsigned short operatorChar;

- (struct TSCEFunctionArgSpec { int x1; int x2; unsigned char x3; int x4; struct unordered_set<TSCEArgumentType, std::__1::hash<TSCEArgumentType>, std::__1::equal_to<TSCEArgumentType>, std::__1::allocator<TSCEArgumentType> > { struct __hash_table<TSCEArgumentType, std::__1::hash<TSCEArgumentType>, std::__1::equal_to<TSCEArgumentType>, std::__1::allocator<TSCEArgumentType> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *>, std::__1::allocator<std::__1::__hash_node<TSCEArgumentType, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> { struct __hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_5_1_1; } x5; }*)argumentSpec;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned long long x2; unsigned long long x3; id x4; bool x5; }*)arg1 hostCell:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2 symbolTable:(struct TSCESymbolTable { id x1; unsigned int x2; struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct __hash_table<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, std::__1::__unordered_map_hasher<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringHash, true>, std::__1::__unordered_map_equal<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; }*)arg3;
- (bool)forceReferenceInterpretationOfChildren;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2;
- (id)initWithContext:(id)arg1 operatorChar:(unsigned short)arg2 children:(id)arg3 firstIndex:(unsigned long long)arg4 lastIndex:(unsigned long long)arg5;
- (bool)isEqualToExpressionNode:(id)arg1;
- (void)loadFromArchive:(const struct OperatorNodeArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ExpressionNodeArchive {} *x5; unsigned int x6; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (unsigned short)operatorChar;
- (struct TSTCSENodeData { unsigned long long x1; unsigned long long x2; })recordHashesForSubexpressions:(id)arg1;
- (void)saveToArchive:(struct OperatorNodeArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ExpressionNodeArchive {} *x5; unsigned int x6; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setOperatorChar:(unsigned short)arg1;
- (id)string;
- (int)tokenType;

@end
