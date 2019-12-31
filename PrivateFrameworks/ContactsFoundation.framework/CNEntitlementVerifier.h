/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNEntitlementVerifier : NSObject <CNEntitlementVerification>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)auditToken:(struct { unsigned int x1[8]; })arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3;
+ (bool)auditToken:(struct { unsigned int x1[8]; })arg1 isFirstOrSecondPartyWithError:(id*)arg2;
+ (bool)currentProcessHasBooleanEntitlement:(id)arg1 error:(id*)arg2;
+ (bool)secTask:(struct __SecTask { }*)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3;

@end
