/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StarBoardServices.framework/StarBoardServices
 */

@interface SRSSessionService : SRSService <SRSSessionClientToServiceInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SRSSessionServiceOwner> *owner;
@property (readonly) Class superclass;

+ (Class)_serviceSpecification;

- (void)_activeConnectionsDidChange;
- (id)_requiredBooleanEntitlements;
- (oneway void)currentHMEStateWithCompletion:(id /* block */)arg1;
- (id)initWithOwner:(id)arg1;
- (void)notifyClientsOfHMEStateChange;

@end
