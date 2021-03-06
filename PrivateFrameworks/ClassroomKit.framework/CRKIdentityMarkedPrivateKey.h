/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKIdentityMarkedPrivateKey : NSObject <NSSecureCoding> {
    NSUUID * _keyPairMarker;
    NSData * _privateKeyData;
}

@property (nonatomic, readonly) NSUUID *keyPairMarker;
@property (nonatomic, readonly, copy) NSData *privateKeyData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPairMarker:(id)arg1 privateKeyData:(id)arg2;
- (id)keyPairMarker;
- (id)privateKeyData;

@end
