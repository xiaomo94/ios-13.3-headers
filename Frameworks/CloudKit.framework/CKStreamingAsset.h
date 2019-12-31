/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKStreamingAsset : NSObject <CKRecordValue, HMBModelObjectStorage, NSCopying, NSSecureCoding> {
    NSURL * _downloadURL;
    NSDate * _downloadURLExpirationDate;
    unsigned long long  _expectedSizeBytes;
    NSData * _fileSignature;
    bool  _hasSize;
    NSString * _owner;
    NSData * _referenceSignature;
    C2RequestOptions * _requestOptions;
    unsigned long long  _reservedSize;
    unsigned long long  _size;
    NSString * _uploadReceipt;
    NSURL * _uploadURL;
    NSDate * _uploadURLExpirationDate;
}

@property (nonatomic, readonly) unsigned long long bytesUploaded;
@property (nonatomic, readonly) unsigned long long bytesUpperBound;
@property (nonatomic, readonly, copy) NSURL *contentDownloadURL;
@property (nonatomic, readonly, copy) NSDate *contentDownloadURLExpirationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *downloadURL;
@property (nonatomic, copy) NSDate *downloadURLExpirationDate;
@property (nonatomic) unsigned long long expectedSizeBytes;
@property (nonatomic, copy) NSData *fileSignature;
@property (nonatomic) bool hasSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *owner;
@property (nonatomic, copy) NSData *referenceSignature;
@property (nonatomic, copy) C2RequestOptions *requestOptions;
@property (nonatomic) unsigned long long reservedSize;
@property (nonatomic) unsigned long long size;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uploadReceipt;
@property (nonatomic, copy) NSURL *uploadURL;
@property (nonatomic, copy) NSDate *uploadURLExpirationDate;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)_initBare;
- (unsigned long long)bytesUploaded;
- (unsigned long long)bytesUpperBound;
- (id)contentDownloadURL;
- (id)contentDownloadURLExpirationDate;
- (void)copyServerFieldsFromStreamingAsset:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)downloadURL;
- (id)downloadURLExpirationDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)expectedSizeBytes;
- (id)fileSignature;
- (bool)hasSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpectedSizeBytes:(unsigned long long)arg1;
- (id)owner;
- (id)referenceSignature;
- (id)requestOptions;
- (unsigned long long)reservedSize;
- (void)setDownloadURL:(id)arg1;
- (void)setDownloadURLExpirationDate:(id)arg1;
- (void)setExpectedSizeBytes:(unsigned long long)arg1;
- (void)setFileSignature:(id)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setOwner:(id)arg1;
- (void)setReferenceSignature:(id)arg1;
- (void)setRequestOptions:(id)arg1;
- (void)setReservedSize:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setUploadReceipt:(id)arg1;
- (void)setUploadURL:(id)arg1;
- (void)setUploadURLExpirationDate:(id)arg1;
- (unsigned long long)size;
- (id)uploadReceipt;
- (id)uploadURL;
- (id)uploadURLExpirationDate;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;

- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;

@end
