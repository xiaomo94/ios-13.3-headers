/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessagesSceneDelegate : CKSceneDelegate <CKAlertSuppressionContextsProviding, CKMessagesControllerDelegate> {
    bool  _locked;
    CKRegistrationViewController * _madridRegistrationController;
    CKMessagesController * _messagesController;
    bool  _shouldShowRegistrationOverride;
    CKSceneDelegateState * _storedState;
    bool  _suspended;
}

@property (nonatomic, readonly) NSSet *alertSuppressionContexts;
@property (getter=isLocked, nonatomic) bool locked;
@property (nonatomic, retain) CKRegistrationViewController *madridRegistrationController;
@property (nonatomic, readonly) CKMessagesController *messagesController;
@property (nonatomic) bool shouldShowRegistrationOverride;
@property (nonatomic, retain) CKSceneDelegateState *storedState;
@property (getter=isSuspended, nonatomic) bool suspended;

- (void).cxx_destruct;
- (void)__showMadridRegistrationViewIfNecessary;
- (void)__updateAppSnapshot;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_clearOldInputContextIdentifiersIfNeeded;
- (void)_conversationFilteringStateChangedNotification:(id)arg1;
- (void)_createMadridRegistrationViewIfNecessary;
- (void)_destroyMadridRegistrationView;
- (void)_handleAccountsChanged:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (bool)_messageFilteringEnabled;
- (id)_oldInputContextIdentifiers;
- (void)_prepareForResume:(bool)arg1;
- (void)_prepareForSuspend;
- (bool)_restoreState:(id)arg1;
- (void)_scheduleDeferredSetup;
- (bool)_shouldShowInboxView;
- (bool)_shouldShowMadridRegistrationView;
- (void)_showMadridRegistrationViewIfNecessary;
- (void)_showPeerPaymentUIForPerson:(id)arg1 amount:(id)arg2;
- (void)_updateAppSnapshot;
- (void)_updateMadridRegistrationViewAnimated:(bool)arg1;
- (void)_updateStoredState;
- (id)alertSuppressionContexts;
- (id)canActivatePredicate;
- (void)dealloc;
- (bool)hasBusinessRecipientWithRecipientIDs:(id)arg1;
- (id)init;
- (bool)isLocked;
- (bool)isSuspended;
- (void)loadConversationWithMessageGUID:(id)arg1;
- (id)madridRegistrationController;
- (id)messagesController;
- (void)messagesController:(id)arg1 didUpdateCurrentConversation:(id)arg2;
- (void)openSMSURL:(id)arg1;
- (void)openSURFURL:(id)arg1;
- (void)openURL:(id)arg1 sourceApplication:(id)arg2;
- (id)prefersToActivatePredicate;
- (bool)restoreStateFromUserActivity:(id)arg1;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)setLocked:(bool)arg1;
- (void)setMadridRegistrationController:(id)arg1;
- (void)setShouldShowRegistrationOverride:(bool)arg1;
- (void)setStoredState:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (id)sharedConversationList;
- (bool)shouldRestoreToConversationListForState:(id)arg1;
- (bool)shouldShowRegistrationOverride;
- (id)stateRestorationActivityForScene:(id)arg1;
- (id)storedState;
- (long long)type;
- (id)validIntentDictionaryWithURLParameters:(id)arg1;
- (void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(id /* block */)arg3;

@end
