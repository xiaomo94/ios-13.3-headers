/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUObjectIdentifier : NSObject {
    unsigned long long  _cfBooleanFalseAddress;
    unsigned long long  _cfBooleanTrueAddress;
    unsigned long long  _cfClassCount;
    VMUClassInfoMap * _cfTypeIDToClassInfo;
    unsigned long long  _coreFoundationCFTypeIsa;
    bool  _debugSwiftRemoteMirror;
    unsigned long long  _foundationCFTypeIsa;
    bool  _fragileNonPointerIsas;
    NSMapTable * _isaToObjectLabelHandlerMap;
    id /* block */  _isaTranslator;
    NSMapTable * _itemCountToLabelStringUniquingMap;
    id * _labelStringUniquingMaps;
    VMUClassInfo * _lastCPlusPlusClassInfo;
    unsigned long long  _lastCPlusPlusIsa;
    NSMutableDictionary * _libSwiftRemoteMirrors;
    id /* block */  _memoryReader;
    bool  _needToValidateAddressRange;
    NSHashTable * _nonObjectIsaHash;
    NSMutableDictionary * _nonobjectClassInfosDict;
    unsigned long long  _objCClassCount;
    NSMutableArray * _objCClassStructureClassInfoIndexes;
    unsigned int  _objcABI;
    unsigned int  _osDispatchMachOffsetInOSXPCConnection;
    NSMutableDictionary * _pidToProcessNameDict;
    VMUClassInfoMap * _realizedIsaToClassInfo;
    VMUTaskMemoryScanner * _scanner;
    id * _stringTypeDescriptions;
    NSMutableSet * _stringUniquingSet;
    unsigned long long  _swiftClassCount;
    struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionInteropContext {} *x1; unsigned long long x2; } * _swiftMirror;
    VMUSwiftRuntimeInfo * _swiftRuntimeInfoPreABI;
    VMUSwiftRuntimeInfo * _swiftRuntimeInfoStableABI;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _symbolicator;
    unsigned long long  _taggedPointerMask;
    unsigned long long  _taggedPointerObfuscator;
    bool  _targetProcessContainsMallocStackLoggingLiteZone;
    VMUNonOverlappingRangeArray * _targetProcessVMranges;
    unsigned int  _task;
    VMUClassInfoMap * _unrealizedClassInfos;
}

@property (readonly) bool hasSwiftContent;
@property (readonly) bool hasSwiftReflection;
@property (nonatomic, readonly) id /* block */ memoryReader;
@property (readonly) bool needToValidateAddressRange;
@property (readonly) unsigned int objcABI;
@property (nonatomic, readonly) VMUClassInfoMap *realizedClasses;
@property (nonatomic, readonly) struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionInteropContext {} *x1; unsigned long long x2; }*swiftMirror;
@property (nonatomic, readonly) VMUSwiftRuntimeInfo *swiftRuntimeInfoPreABI;
@property (nonatomic, readonly) VMUSwiftRuntimeInfo *swiftRuntimeInfoStableABI;
@property (nonatomic, readonly) struct _CSTypeRef { unsigned long long x1; unsigned long long x2; } symbolicator;
@property (nonatomic, readonly) unsigned long long taggedPointerMask;

- (void).cxx_destruct;
- (unsigned long long)CFTypeCount;
- (unsigned long long)ObjCclassCount;
- (unsigned long long)SwiftClassCount;
- (id)_classInfoWithNonobjectType:(id)arg1 binaryPath:(id)arg2;
- (id)_classInfoWithPthreadType:(id)arg1;
- (bool)_dlopenLibSwiftRemoteMirrorFromDir:(id)arg1;
- (bool)_dlopenLibSwiftRemoteMirrorNearExecutable;
- (bool)_dlopenLibSwiftRemoteMirrorNearLibSwiftCoreWithSymbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 avoidSystem:(bool)arg2;
- (bool)_dlopenLibSwiftRemoteMirrorWithSymbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_faultClass:(unsigned long long)arg1 ofType:(unsigned int)arg2;
- (void)_findObjCAndSwiftClassesFromClass:(unsigned long long)arg1 recursionDepth:(unsigned int)arg2;
- (void)_findOffsetsInOSXPCConnection:(void*)arg1 length:(unsigned long long)arg2;
- (void)_generateClassInfosForObjCClassStructurePointerTypes;
- (bool)_isValidInstanceLength:(unsigned long long)arg1 expectedLength:(unsigned long long)arg2;
- (void)_populateSwiftABIVariables;
- (int)_populateSwiftReflectionInfo:(struct SwiftReflectionInteropContext { }*)arg1;
- (id)_returnFaultedClass:(unsigned long long)arg1 ofType:(unsigned int)arg2;
- (id)_scanner;
- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })_symbolicator;
- (unsigned long long)addressOfSymbol:(const char *)arg1 inLibrary:(const char *)arg2;
- (void)buildIsaToObjectLabelHandlerMap;
- (id)classInfoForMemory:(void*)arg1 length:(unsigned long long)arg2;
- (id)classInfoForMemory:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)classInfoForNonobjectMemory:(void*)arg1 length:(unsigned long long)arg2;
- (id)classInfoForObjectWithRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned int)classInfoIndexForObjCClassStructurePointerType:(unsigned int)arg1;
- (id)classNameForTaggedPointer:(void*)arg1;
- (void)dealloc;
- (void)enumerateAllClassInfosWithBlock:(id /* block */)arg1;
- (void)enumerateRealizedClassInfosWithBlock:(id /* block */)arg1;
- (void)findCFTypes;
- (void)findObjCAndSwiftClasses;
- (bool)hasSwiftContent;
- (bool)hasSwiftReflection;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2 scanner:(id)arg3;
- (id)labelForCFBundle:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForClassDataExtRW:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForClassDataRO:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForClassDataRW:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForClassStructure:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForItemCount:(long long)arg1;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 usingHandlerBlock:(id /* block */)arg2;
- (id)labelForMemory:(void*)arg1 length:(unsigned long long)arg2;
- (id)labelForMemory:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForMemory:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 classInfo:(id)arg4;
- (id)labelForMemory:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 classInfo:(id)arg4 usingHandlerBlock:(id /* block */)arg5;
- (id)labelForNSArray:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSBundle:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSCFDictionary:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSCFSet:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSCFStringAtRemoteAddress:(unsigned long long)arg1 printDetail:(bool)arg2;
- (id)labelForNSConcreteAttributedString:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSConcreteData:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSConcreteHashTable:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSConcreteMutableData:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSData:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSDate:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSDictionary:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSInlineData:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSNumber:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSPathStore2:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSSet:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSString:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSString:(void*)arg1 mappedSize:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 printDetail:(bool)arg4;
- (id)labelForNSURL:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSXPCConnection:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSXPCInterface:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSDispatchMach:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSDispatchQueue:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSLog:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSTransaction:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSXPCActivity:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSXPCConnection:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSXPCObject:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForObjectOfClass:(id)arg1 atOffset:(unsigned int)arg2 ofObject:(void*)arg3;
- (id)labelForProtocol:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForTaggedPointer:(void*)arg1;
- (id)labelFor_NSActivityAssertion:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelFor__NSMallocBlock__:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (void)loadSwiftReflectionLibraries;
- (id /* block */)memoryReader;
- (bool)needToValidateAddressRange;
- (id)noLabelForOSXPCObject:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (unsigned int)objcABI;
- (id)objectLabelHandlerForRemoteIsa:(unsigned long long)arg1;
- (id)osMajorMinorVersionString;
- (id)realizedClasses;
- (void)setupIsaTranslator;
- (struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionInteropContext {} *x1; unsigned long long x2; }*)swiftMirror;
- (id)swiftRuntimeInfoPreABI;
- (id)swiftRuntimeInfoStableABI;
- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })symbolForAddress:(unsigned long long)arg1;
- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })symbolicator;
- (unsigned long long)taggedPointerMask;
- (unsigned long long)translateIsaPointer:(unsigned long long)arg1;
- (id)uniquifyStringLabel:(id)arg1 stringType:(int)arg2 printDetail:(bool)arg3;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })vmRegionRangeForAddress:(unsigned long long)arg1;

@end
