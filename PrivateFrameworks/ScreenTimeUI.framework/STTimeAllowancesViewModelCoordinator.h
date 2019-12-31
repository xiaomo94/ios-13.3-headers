/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STTimeAllowancesViewModelCoordinator : NSObject <STGroupFetchedResultsControllerDelegate, STTimeAllowancesViewModelCoordinator> {
    STAskForTimeClient * _askForTimeClient;
    STGroupFetchedResultsController * _groupFetchResultsController;
    NSString * _organizationIdentifier;
    <STPersistenceControllerProtocol> * _persistenceController;
    NSNumber * _userDSID;
    NSManagedObjectID * _userObjectID;
    STTimeAllowancesViewModel * _viewModel;
}

@property (nonatomic, readonly) STAskForTimeClient *askForTimeClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) STGroupFetchedResultsController *groupFetchResultsController;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, readonly) <STPersistenceControllerProtocol> *persistenceController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *userDSID;
@property (nonatomic, copy) NSManagedObjectID *userObjectID;
@property (readonly) STTimeAllowancesViewModel *viewModel;

+ (bool)saveAllowance:(id)arg1 forUser:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_iCloudAccountPredicate;
- (void)_registerForPersistentStoreNotifications;
- (id)askForTimeClient;
- (void)deleteAllowance:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)groupFetchResultsController;
- (void)groupResultsController:(id)arg1 didChangeResultsForRequest:(id)arg2 objectID:(id)arg3 changeType:(unsigned long long)arg4;
- (id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3;
- (void)loadViewModelWithCompletionHandler:(id /* block */)arg1;
- (id)organizationIdentifier;
- (id)persistenceController;
- (void)respondToAskForTime:(id)arg1 withApproval:(bool)arg2 timeApproved:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)saveAllAllowancesEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)saveAllowance:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveAlwaysAllowList:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveDefaultAlwaysAllowListWithCompletionHandler:(id /* block */)arg1;
- (void)saveDeviceBedtime:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setOrganizationIdentifier:(id)arg1;
- (void)setUserDSID:(id)arg1;
- (void)setUserObjectID:(id)arg1;
- (id)userDSID;
- (id)userObjectID;
- (id)viewModel;

@end
