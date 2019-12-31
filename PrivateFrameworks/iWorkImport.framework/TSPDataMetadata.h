/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataMetadata : TSPObject {
    TSUColor * _fallbackColor;
}

@property (nonatomic, copy) TSUColor *fallbackColor;

- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)fallbackColor;
- (void)loadFromMessage:(const struct DataMetadata { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct Color {} *x5; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct DataMetadata { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct Color {} *x5; }*)arg1 archiver:(id)arg2;
- (void)setFallbackColor:(id)arg1;

@end