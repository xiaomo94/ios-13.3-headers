/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STManagementState : NSObject {
    bool  _cachedIsRestrictionsPasscodeSet;
    bool  _cachedShouldRequestMoreTime;
    NSXPCConnection * _connection;
}

@property bool cachedIsRestrictionsPasscodeSet;
@property bool cachedShouldRequestMoreTime;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, readonly) bool isRestrictionsPasscodeSet;
@property (readonly) bool needsToSetRestrictionsPasscode;
@property (nonatomic, readonly) bool shouldRequestMoreTime;

- (void).cxx_destruct;
- (bool)cachedIsRestrictionsPasscodeSet;
- (bool)cachedShouldRequestMoreTime;
- (bool)clearRestrictionsPasscodeWithError:(id*)arg1;
- (void)communicationPoliciesForDSID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)communicationPoliciesWithCompletionHandler:(id /* block */)arg1;
- (id)communicationPoliciesWithError:(id*)arg1;
- (id)connection;
- (void)contactManagementStateForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (bool)enableScreenTimeForDSID:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)isExplicitContentRestricted:(id /* block */)arg1;
- (bool)isRestrictionsPasscodeSet;
- (void)isRestrictionsPasscodeSet:(id /* block */)arg1;
- (bool)needsToSetRestrictionsPasscode;
- (bool)performMigrationFromMCXSettings:(id)arg1 error:(id*)arg2;
- (bool)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 error:(id*)arg3;
- (id)primaryiCloudCardDAVAccountIdentifierWithError:(id*)arg1;
- (void)requestToManageContactsForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)screenTimeStateWithCompletionHandler:(id /* block */)arg1;
- (void)screenTimeSyncStateWithCompletionHandler:(id /* block */)arg1;
- (void)setCachedIsRestrictionsPasscodeSet:(bool)arg1;
- (void)setCachedShouldRequestMoreTime:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setManageContactsEnabled:(bool)arg1 forDSID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setScreenTimeEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)setScreenTimeEnabled:(bool)arg1 error:(id*)arg2;
- (void)setScreenTimeSyncingEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)arg1 error:(id*)arg2;
- (id)shouldAllowOneMoreMinuteForWebsiteURL:(id)arg1 error:(id*)arg2;
- (bool)shouldRequestMoreTime;
- (void)shouldRequestMoreTime:(id /* block */)arg1;

@end
