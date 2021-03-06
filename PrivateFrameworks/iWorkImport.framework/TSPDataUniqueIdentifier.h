/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataUniqueIdentifier : NSObject <NSCopying> {
    TSPDigest * _digest;
}

@property (nonatomic, readonly) TSPDigest *digest;
@property (nonatomic, readonly) NSString *digestString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)digest;
- (id)digestString;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDigest:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
