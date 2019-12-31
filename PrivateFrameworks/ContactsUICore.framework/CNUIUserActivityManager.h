/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActivityManager : NSObject {
    <CNLSApplicationWorkspace> * _applicationWorkspace;
    CNContactStore * _contactStore;
    <CNUIInteractionDonor> * _interactionDonor;
}

@property (nonatomic, readonly) <CNLSApplicationWorkspace> *applicationWorkspace;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) <CNUIInteractionDonor> *interactionDonor;

+ (id)descriptorForRequiredKeys;
+ (id)log;

- (void).cxx_destruct;
- (id)applicationWorkspace;
- (id)contactStore;
- (id)initWithApplicationWorkspace:(id)arg1;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2;
- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 interactionDonor:(id)arg3;
- (id)interactionDonor;
- (id)makeActivityAdvertisingViewingList;
- (id)makeActivityAdvertisingViewingOfContact:(id)arg1;
- (void)publishRequestToCreateContact:(id)arg1;
- (void)publishRequestToEditContact:(id)arg1;
- (void)updateUserActivityState:(id)arg1 withContentsOfContact:(id)arg2;

@end
