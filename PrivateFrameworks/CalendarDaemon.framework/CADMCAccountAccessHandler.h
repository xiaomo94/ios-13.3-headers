/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADMCAccountAccessHandler : NSObject <CADAccountAccessHandler> {
    unsigned long long  _accountManagement;
    <CADACAccountsProvider> * _accountsProvider;
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    NSArray * _cachedAccounts;
    NSMutableDictionary * _cachedRestrictedStoreInfos;
    <CADCalCalendarInfoProvider> * _calCalendarInfoProvider;
    <CADCalStoreInfoProvider> * _calStoreInfoProvider;
    <CADManagedConfigurationHandler> * _managedConfigHandler;
    <CADPermissionValidator> * _permissionValidator;
}

@property (nonatomic, readonly) unsigned long long accountManagement;
@property (nonatomic, readonly) <CADACAccountsProvider> *accountsProvider;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic, retain) NSArray *cachedAccounts;
@property (nonatomic, retain) NSMutableDictionary *cachedRestrictedStoreInfos;
@property (nonatomic, readonly) <CADCalCalendarInfoProvider> *calCalendarInfoProvider;
@property (nonatomic, readonly) <CADCalStoreInfoProvider> *calStoreInfoProvider;
@property (nonatomic, readonly) <CADManagedConfigurationHandler> *managedConfigHandler;
@property (nonatomic, readonly) <CADPermissionValidator> *permissionValidator;

- (void).cxx_destruct;
- (id)_cachedAccounts;
- (bool)_existingCalStoreMapsToAccountIdentifier:(id)arg1;
- (id)_filteredAccountsForAction:(unsigned long long)arg1 withUnfilteredAccounts:(id)arg2;
- (bool)_isDisabledForAction:(unsigned long long)arg1;
- (bool)_mayShowLocalAccountsForAction:(unsigned long long)arg1;
- (id)_restrictedCalStoreInfosForAction:(unsigned long long)arg1;
- (id)_restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (void)_validateAction:(unsigned long long)arg1;
- (unsigned long long)accountManagement;
- (id)accountsProvider;
- (id)bundleIdentifier;
- (id)cacheQueue;
- (id)cachedAccounts;
- (id)cachedRestrictedStoreInfos;
- (id)calCalendarInfoProvider;
- (id)calStoreInfoProvider;
- (id)initWithCalStoreInfoProvider:(id)arg1 calendarInfoProvider:(id)arg2 accountsProvider:(id)arg3 permissionValidator:(id)arg4 managedConfigHandler:(id)arg5 accountManagement:(unsigned long long)arg6 bundleIdentifier:(id)arg7;
- (bool)isAccountManaged:(id)arg1;
- (bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;
- (id)managedConfigHandler;
- (id)permissionValidator;
- (void)reset;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (void)setCachedAccounts:(id)arg1;
- (void)setCachedRestrictedStoreInfos:(id)arg1;

@end
