/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNAuthorizationContext : NSObject {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    Class  _entitlementVerifierClass;
    bool  _hasAuditToken;
    NSNumber * _number_isFirstParty;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly) Class entitlementVerifierClass;
@property (nonatomic, readonly) bool hasAuditToken;
@property (nonatomic, readonly) bool isValidatingFirstPartyClient;

- (void).cxx_destruct;
- (struct NSNumber { Class x1; }*)_isFirstParty;
- (struct { unsigned int x1[8]; })auditToken;
- (Class)entitlementVerifierClass;
- (bool)hasAuditToken;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithEntitlementVerifier:(Class)arg1 isFirstParty:(bool)arg2;
- (bool)isValidatingFirstPartyClient;

@end
