/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageWriter : NSObject <TSPPackageDataWriter> {
    NSURL * _URL;
    <TSPComponentWriteChannel> * _componentWriteChannel;
    NSURL * _documentTargetURL;
    SFUCryptoKey * _encryptionKey;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _errorQueue;
    bool  _isOpened;
    TSPPackage * _originalDocumentPackage;
    TSPPackage * _originalSupportPackage;
    NSProgress * _progress;
    NSURL * _relativeURLForExternalData;
    long long  _updateType;
    TSPPackage * _writtenPackage;
    TSUZipFileWriter * _zipArchiveWriter;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) bool canLinkData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *documentTargetURL;
@property (nonatomic, readonly) SFUCryptoKey *encryptionKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSPPackage *originalPackage;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) NSURL *relativeURLForExternalData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long updateType;
@property (nonatomic, readonly) TSUZipFileWriter *zipArchiveWriter;

+ (id)newPackageWriterWithPackageType:(long long)arg1 URL:(id)arg2 documentTargetURL:(id)arg3 relativeURLForExternalData:(id)arg4 packageIdentifier:(unsigned char)arg5 documentProperties:(id)arg6 fileFormatVersion:(unsigned long long)arg7 updateType:(long long)arg8 apfsMode:(bool)arg9 encryptionKey:(id)arg10 originalDocumentPackage:(id)arg11 originalSuppportPackage:(id)arg12 fileCoordinatorDelegate:(id)arg13 progress:(id)arg14 error:(id*)arg15;

- (void).cxx_destruct;
- (id)URL;
- (bool)addData:(id)arg1 infoMessage:(struct DataInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_10_1_1; } x10; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_11_1_1; } x11; }*)arg2 saveOperationState:(id)arg3 error:(id*)arg4;
- (bool)canLinkData;
- (bool)closeAndReturnError:(id*)arg1;
- (void)closeCurrentChannel;
- (void)closeWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)componentZipArchiveWriter;
- (void)copyComponent:(id)arg1 locator:(id)arg2 completion:(id /* block */)arg3;
- (id)copyData:(id)arg1 withReadChannel:(id)arg2 decryptionInfo:(id)arg3 size:(unsigned long long)arg4 preferredFilename:(id)arg5 error:(id*)arg6;
- (id)dataForZipEntry:(id)arg1 inDataToWrite:(id)arg2;
- (void)dealloc;
- (id)documentTargetURL;
- (id)encryptionKey;
- (id)filenameForData:(id)arg1 preferredFilename:(id)arg2;
- (void)finalizeComponentAndDataSectionWithCompletionHandler:(id /* block */)arg1;
- (bool)flushPendingWritesReturningError:(id*)arg1;
- (id)init;
- (id)initWithURL:(id)arg1 documentTargetURL:(id)arg2 relativeURLForExternalData:(id)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 fileFormatVersion:(unsigned long long)arg6 updateType:(long long)arg7 apfsMode:(bool)arg8 encryptionKey:(id)arg9 originalDocumentPackage:(id)arg10 originalSuppportPackage:(id)arg11 fileCoordinatorDelegate:(id)arg12 progress:(id)arg13 error:(id*)arg14;
- (id)linkOrCopyData:(id)arg1 fromURL:(id)arg2 fromTemporaryLocation:(bool)arg3 decryptionInfo:(id)arg4 preferredFilename:(id)arg5 error:(id*)arg6;
- (struct CGDataConsumer { }*)newCGDataConsumerAtRelativePath:(id)arg1;
- (id)newComponentWriteChannelWithPackageLocator:(id)arg1 compressionAlgorithm:(long long)arg2 storeOutsideObjectArchive:(bool)arg3;
- (id)newCompressionComponentWriteChannelWithComponentWriteChannel:(id)arg1 compressionAlgorithm:(long long)arg2;
- (id)newPackageWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5;
- (id)newRawComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(bool)arg2;
- (id)newRawDataWriteChannelForRelativePath:(id)arg1 originalLastModificationDate:(id)arg2 originalSize:(unsigned long long)arg3 originalCRC:(unsigned int)arg4 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(bool)arg5;
- (id)originalPackage;
- (id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(bool)arg2 packageURL:(id)arg3;
- (id)progress;
- (id)relativeURLForExternalData;
- (void)setError:(id)arg1;
- (long long)updateType;
- (void)willWriteData:(id)arg1;
- (bool)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(bool)arg3 error:(id*)arg4;
- (id)writtenPackageWithURL:(id)arg1;
- (id)zipArchiveWriter;

@end
