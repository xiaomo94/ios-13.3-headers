/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBiometricsSignatureRequest : NSObject {
    ACAccount * _account;
    NSString * _challenge;
    AMSProcessInfo * _clientInfo;
    AMSKeychainOptions * _keychainOptions;
    struct __SecAccessControl { } * _localAuthAccessControlRef;
    LAContext * _localAuthContext;
    NSDictionary * _localAuthOptions;
}

@property (nonatomic, readonly, copy) ACAccount *account;
@property (nonatomic, readonly, copy) NSString *challenge;
@property (nonatomic, readonly, copy) AMSProcessInfo *clientInfo;
@property (nonatomic, readonly) AMSKeychainOptions *keychainOptions;
@property (nonatomic, readonly) struct __SecAccessControl { }*localAuthAccessControlRef;
@property (nonatomic, readonly) LAContext *localAuthContext;
@property (nonatomic, readonly) NSDictionary *localAuthOptions;

- (void).cxx_destruct;
- (id)_localAuthOptions;
- (id)account;
- (id)challenge;
- (id)clientInfo;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 clientInfo:(id)arg2 challenge:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)keychainOptions;
- (struct __SecAccessControl { }*)localAuthAccessControlRef;
- (id)localAuthContext;
- (id)localAuthOptions;
- (void)setLocalAuthAccessControlRef:(struct __SecAccessControl { }*)arg1;

@end
