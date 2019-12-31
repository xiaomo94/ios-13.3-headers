/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAInviteFamilyMemberRequest : AAFamilyRequest {
    NSString * _inviteeCompositeName;
    NSString * _inviteeEmail;
    NSString * _inviteeShortName;
}

@property (nonatomic, copy) NSString *inviteeCompositeName;
@property (nonatomic, copy) NSString *inviteeEmail;
@property (nonatomic, copy) NSString *inviteeShortName;

- (void).cxx_destruct;
- (id)inviteeCompositeName;
- (id)inviteeEmail;
- (id)inviteeShortName;
- (bool)isUserInitiated;
- (void)setInviteeCompositeName:(id)arg1;
- (void)setInviteeEmail:(id)arg1;
- (void)setInviteeShortName:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end
