/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenConfiguration : NSObject {
    NSArray * _keychainItems;
    TKTokenConfigurationProxy * _proxy;
    TKTokenID * _tokenID;
}

@property (nonatomic, copy) NSData *configurationData;
@property (nonatomic, readonly) NSString *instanceID;
@property (nonatomic, copy) NSArray *keychainItems;
@property (nonatomic, readonly) TKTokenID *tokenID;

+ (id)interfaceForProtocol;

- (void).cxx_destruct;
- (id)beginTransaction;
- (id)certificateForObjectID:(id)arg1 error:(id*)arg2;
- (id)configurationData;
- (id)initWithTokenID:(id)arg1 proxy:(id)arg2;
- (id)instanceID;
- (id)keyForObjectID:(id)arg1 error:(id*)arg2;
- (id)keychainItems;
- (void)setConfigurationData:(id)arg1;
- (void)setKeychainItems:(id)arg1;
- (id)tokenID;

@end
