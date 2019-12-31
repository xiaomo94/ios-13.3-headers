/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMNicknameController : NSObject {
    NSSet * _blacklistedHandlesForSharing;
    NSMutableArray * _fetchPersonalNicknameCompletionBlocks;
    NSDictionary * _handledNicknames;
    bool  _isInitialLoad;
    NSDictionary * _pendingNicknameUpdates;
    IMNickname * _personalNickname;
    NSMutableDictionary * _responseHandlers;
    NSMutableSet * _scrutinyNicknameHandles;
    NSSet * _whitelistedHandlesForSharing;
}

@property (nonatomic, retain) NSSet *blacklistedHandlesForSharing;
@property (nonatomic, retain) NSMutableArray *fetchPersonalNicknameCompletionBlocks;
@property (nonatomic, retain) NSDictionary *handledNicknames;
@property (nonatomic) bool isInitialLoad;
@property (nonatomic, retain) NSDictionary *pendingNicknameUpdates;
@property (nonatomic, retain) IMNickname *personalNickname;
@property (nonatomic, retain) NSMutableDictionary *responseHandlers;
@property (nonatomic, retain) NSMutableSet *scrutinyNicknameHandles;
@property (nonatomic, retain) NSSet *whitelistedHandlesForSharing;

+ (bool)accountsMatchUpToUseNicknames;
+ (bool)multiplePhoneNumbersTiedToAppleID;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)IMSharedHelperMD5Helper:(id)arg1;
- (void)_broadcastNicknamePreferencesDidChange:(id)arg1;
- (bool)_canUpdatePersonalNickname;
- (id)_handleIDsForHandle:(id)arg1;
- (void)_meCardDidChange:(id)arg1;
- (bool)_nicknameFeatureEnabled;
- (void)_updateLocalNicknameStore;
- (void)_updatePersonalNicknameWithMeCardIfNecessary;
- (void)blacklistHandlesForNicknameSharing:(id)arg1;
- (id)blacklistedHandlesForSharing;
- (void)clearHandleFromScrutiny:(id)arg1;
- (void)clearPendingNicknameUpdatesForHandle:(id)arg1;
- (id)contactStore;
- (id)daemonController;
- (id)fetchPersonalNicknameCompletionBlocks;
- (void)fetchPersonalNicknameWithCompletion:(id /* block */)arg1;
- (id)getNicknameHandlesUnderScrutiny;
- (bool)handleIsBlacklistedForSharing:(id)arg1;
- (bool)handleIsWhitelistedForSharing:(id)arg1;
- (void)handleSharingListsDidChange;
- (id)handledNicknames;
- (id)handlesForNicknamesUnderScrutiny;
- (void)ignorePendingNicknameUpdatesForHandle:(id)arg1;
- (id)init;
- (bool)isInitialLoad;
- (void)markHandleUnderScrutiny:(id)arg1;
- (id)meCardSharingState;
- (bool)meCardSyncEnabled;
- (id)nicknameForHandle:(id)arg1;
- (void)nicknameStoreDidChange;
- (unsigned long long)nicknameUpdateForHandle:(id)arg1 nicknameIfAvailable:(id*)arg2;
- (id)pendingNicknameUpdates;
- (id)personalNickname;
- (id)responseHandlers;
- (id)scrutinyNicknameHandles;
- (void)setBlacklistedHandlesForSharing:(id)arg1;
- (void)setFetchPersonalNicknameCompletionBlocks:(id)arg1;
- (void)setHandledNicknames:(id)arg1;
- (void)setIsInitialLoad:(bool)arg1;
- (void)setNicknameHandlesUnderScrutiny;
- (void)setPendingNicknameUpdates:(id)arg1;
- (void)setPersonalNickname:(id)arg1;
- (void)setPersonalNicknameFromOnboardingResult:(id)arg1;
- (void)setResponseHandlers:(id)arg1;
- (void)setScrutinyNicknameHandles:(id)arg1;
- (void)setWhitelistedHandlesForSharing:(id)arg1;
- (bool)shouldOfferNicknameSharingForChat:(id)arg1;
- (id)truncateNameIfNeeded:(id)arg1;
- (void)updatePendingNicknames:(id)arg1 handledNicknames:(id)arg2;
- (void)updatePersonalNickname:(id)arg1;
- (void)updatePersonalNicknameIfNecessaryWithMeCardSharingResult:(id)arg1;
- (void)updateSharingWhitelist:(id)arg1 blacklist:(id)arg2;
- (void)whitelistHandlesForNicknameSharing:(id)arg1 forChat:(id)arg2;
- (id)whitelistedHandlesForSharing;

@end