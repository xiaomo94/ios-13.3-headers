/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDecoderDataInfo : NSObject <TSPDecoderDataInfo> {
    TSPDataMetadata * _dataMetadata;
    TSPDigest * _digest;
    NSString * _documentResourceLocator;
    NSString * _externalFilePath;
    long long  _identifier;
    NSString * _preferredFilename;
}

@property (nonatomic, retain) TSPDataMetadata *dataMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSPDigest *digest;
@property (nonatomic, readonly) NSString *documentResourceLocator;
@property (nonatomic, readonly) NSString *externalFilePath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) NSString *preferredFilename;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataMetadata;
- (id)digest;
- (id)documentResourceLocator;
- (id)externalFilePath;
- (long long)identifier;
- (id)init;
- (id)initWithIdentifier:(long long)arg1 digest:(id)arg2 preferredFilename:(id)arg3 documentResourceLocator:(id)arg4 externalFilePath:(id)arg5;
- (id)initWithMessage:(const struct DataInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_10_1_1; } x10; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_11_1_1; } x11; }*)arg1;
- (id)preferredFilename;
- (void)setDataMetadata:(id)arg1;

@end