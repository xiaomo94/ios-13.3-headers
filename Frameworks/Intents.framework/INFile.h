/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INFile : NSObject <INEnumerable, INJSONSerializable, WFCodableAttributeContentConvertible> {
    NSData * _data;
    bool  _deletesFileOnDeallocationIfNeeded;
    NSURL * _fileURL;
    NSString * _filename;
    NSData * _memoryMappedFileData;
    NSString * _typeIdentifier;
}

@property (setter=_setDeletesFileOnDeallocationIfNeeded:, nonatomic) bool _deletesFileOnDeallocationIfNeeded;
@property (nonatomic, readonly) bool _hasAssociatedAuditToken;
@property (nonatomic, readonly) bool _isFileURLBased;
@property (getter=_isMarkedForDeletionOnDeallocation, setter=_setMarkedForDeletionOnDeallocation:, nonatomic) bool _markedForDeletionOnDeallocation;
@property (nonatomic, readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, copy) NSString *filename;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (id)fileWithData:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3;
+ (id)fileWithFileURL:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_associatedAuditTokenIsEqualToAuditToken:(struct { unsigned int x1[8]; })arg1;
- (bool)_deletesFileOnDeallocationIfNeeded;
- (id)_dictionaryRepresentation;
- (bool)_hasAssociatedAuditToken;
- (id)_initWithData:(id)arg1 filename:(id)arg2 fileURL:(id)arg3 typeIdentifier:(id)arg4;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(id /* block */)arg2;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (bool)_isFileURLBased;
- (bool)_isMarkedForDeletionOnDeallocation;
- (void)_setAssociatedAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)_setDeletesFileOnDeallocationIfNeeded:(bool)arg1;
- (void)_setMarkedForDeletionOnDeallocation:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)filename;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setFilename:(id)arg1;
- (id)typeIdentifier;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (Class)wf_contentItemClass;
+ (id)wf_fileWithFileRepresentation:(id)arg1;

- (id)wf_contentItemWithCodableAttribute:(id)arg1;
- (id)wf_fileRepresentation;
- (void)wf_transformUsingCodableAttribute:(id)arg1 completionHandler:(id /* block */)arg2;

@end
