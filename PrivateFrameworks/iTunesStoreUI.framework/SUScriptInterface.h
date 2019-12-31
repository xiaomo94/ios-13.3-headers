/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptInterface : SUScriptObject <SFSafariViewControllerDelegate, SUScriptModalDialogDelegate, SUScriptXMLHTTPRequestDelegate, SUScriptXMLHTTPStoreRequestDelegate> {
    SUScriptAccountManager * _accountManager;
    SUScriptKeyValueStore * _applicationLocalStorage;
    SSAuthenticationContext * _authenticationContext;
    SUScriptCarrierBundlingController * _carrierBundlingController;
    SUClientInterface * _clientInterface;
    <SUScriptInterfaceDelegate> * _delegate;
    SUScriptKeyValueStore * _deviceLocalStorage;
    NSMutableDictionary * _downloadQueues;
    WebFrame * _frame;
    struct __CFString { } * _hsaCurrentIdentifier;
    NSObject<OS_dispatch_queue> * _hsaTokenQueue;
    SUScriptMediaLibrary * _mediaLibrary;
    SUScriptMetricsController * _metricsController;
    SUScriptNavigationSimulator * _navigationSimulator;
    SUScriptNotificationObserver * _notificationObserver;
    SUScriptPreviewOverlay * _previewOverlay;
    SUScriptPurchaseManager * _purchaseManager;
    NSMutableSet * _requireCellularURLs;
    NSNumber * _safariDismissButtonStyle;
    SFSafariViewController * _safariViewController;
    NSString * _safariViewControllerIdentifier;
    SUScriptOperationDelegate * _scriptOperationDelegate;
    SUScriptStoreBagLoader * _scriptStoreBagLoader;
    SUScriptWindowContext * _scriptWindowContext;
    SUScriptSubscriptionStatusCoordinator * _subscriptionStatusCoordinator;
    id  _threadSafeDelegate;
}

@property (readonly) SUScriptFairPlayContext *accountCreationSecureContext;
@property (readonly) NSArray *accounts;
@property (readonly) NSString *actionTypeDismissSheet;
@property (readonly) NSString *actionTypeDismissWindows;
@property (readonly) NSString *actionTypeReturnToLibrary;
@property (readonly) SUScriptAppleAccountStore *appleAccountStore;
@property (getter=isApplePayAvailable, readonly) id applePayAvailable;
@property (readonly) SUScriptApplication *application;
@property (readonly) id applicationAccessibilityEnabled;
@property (readonly) SUScriptKeyValueStore *applicationLocalStorage;
@property (readonly) NSString *askToBuyPrompt;
@property (copy) SSAuthenticationContext *authenticationContext;
@property (readonly) SUScriptCarrierBundlingController *carrierBundlingController;
@property (readonly) NSString *clientIdentifier;
@property (retain) SUClientInterface *clientInterface;
@property (copy) NSString *cookie;
@property (readonly) NSString *cookieDefaultURL;
@property (readonly) NSString *cookieForDefaultURL;
@property (readonly) id creditCardReaderAvailable;
@property (readonly, copy) NSString *debugDescription;
@property <SUScriptInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) SUScriptDevice *device;
@property (readonly) SUScriptKeyValueStore *deviceLocalStorage;
@property (readonly) NSArray *deviceOffers;
@property (readonly) NSString *deviceSerialNumber;
@property (getter=isFinanceInterruption, readonly) id financeInterruption;
@property (readonly) id globalRootObject;
@property (readonly) NSString *gsToken;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *installedSoftwareApplications;
@property (readonly) id loggingEnabled;
@property (readonly) SUScriptMediaLibrary *mediaLibrary;
@property (readonly) SUScriptMetricsController *metricsController;
@property (readonly) SUScriptNavigationBar *navigationBar;
@property (readonly) SUScriptNavigationSimulator *navigationSimulator;
@property (readonly) NSNumber *orientation;
@property (readonly) SUScriptPassbookLibrary *passbookLibrary;
@property (readonly) SUScriptPreviewOverlay *previewOverlay;
@property (retain) SUScriptAccount *primaryAccount;
@property (retain) SUScriptAccount *primaryLockerAccount;
@property (readonly) SUScriptProtocol *protocol;
@property (readonly) SUScriptPurchaseManager *purchaseManager;
@property (readonly) NSString *referrerURL;
@property (readonly) NSString *referringUserAgent;
@property (copy) NSNumber *safariDismissButtonStyle;
@property (nonatomic, retain) SFSafariViewController *safariViewController;
@property (nonatomic, retain) NSString *safariViewControllerIdentifier;
@property (readonly) NSString *safariViewControllerIdentifierQueryParameterName;
@property (readonly) id screenReaderRunning;
@property (readonly) SUScriptDictionary *scriptStoreBagDictionary;
@property (retain) SUScriptWindowContext *scriptWindowContext;
@property (readonly) SUScriptSectionsController *sectionsController;
@property (readonly) NSString *storeFrontIdentifier;
@property (readonly) long long storeSheetType;
@property (readonly) long long storeSheetTypeAskToBuy;
@property (readonly) long long storeSheetTypeDefault;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SUScriptTelephony *telephony;
@property (readonly) <SUScriptInterfaceDelegate> *threadSafeDelegate;
@property (readonly) SUScriptDictionary *tidHeaders;
@property (readonly) NSString *tidState;
@property (readonly) NSString *userAgent;
@property (readonly) SUScriptViewController *viewController;
@property (getter=isWalletAvailable, readonly) id walletAvailable;
@property (retain) WebFrame *webFrame;
@property (readonly) SUScriptWindow *window;

+ (void)initialize;
+ (long long)purchaseAnimationStyleFromString:(id)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (id)DOMElementWithElement:(id)arg1;
- (void)_accessibilityPostLayoutChange;
- (id)_className;
- (void)_cleanUpSafariViewController;
- (id)_cookieForURL:(id)arg1;
- (id)_copyDialogWithMessage:(id)arg1 title:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4;
- (void)_dismissSafariViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_finishCreditCardReaderWithOutput:(id)arg1 callback:(id)arg2;
- (void)_getSoftwareApplicationWithCompletionFunction:(id)arg1 lookupBlock:(id /* block */)arg2;
- (void)_globalEventNotification:(id)arg1;
- (void)_presentSafariViewControllerWithURL:(id)arg1 safariIdentifier:(id)arg2 animated:(bool)arg3;
- (void)_scriptUserInfoDidChangeNotification:(id)arg1;
- (void)accessibilityPostLayoutChange;
- (void)accessibilityPostScreenChange;
- (id)accountCreationSecureContext;
- (id)accountDSID;
- (id)accountForDSID:(id)arg1;
- (id)accountName;
- (id)accounts;
- (void)acknowledgePrivacyLinkWithIdentifier:(id)arg1;
- (id)actionTypeDismissSheet;
- (id)actionTypeDismissWindows;
- (id)actionTypeReturnToLibrary;
- (id)activeAudioPlayers;
- (id)activeNetworkType;
- (void)addExternalDownloads:(id)arg1;
- (void)addExternalDownloads:(id)arg1 options:(id)arg2;
- (void)addExternalDownloadsFromManifestURL:(id)arg1;
- (void)addPurchaseWithInfo:(id)arg1;
- (void)addPurchaseWithInfo:(id)arg1 options:(id)arg2;
- (void)addiTunesPassWithCompletionFunction:(id)arg1;
- (id)appleAccountStore;
- (id)application;
- (id)applicationAccessibilityEnabled;
- (id)applicationLocalStorage;
- (void)approveInPerson:(id)arg1 completionFunction:(id)arg2;
- (bool)arePodcastsDisabled;
- (id)askToBuyPrompt;
- (id)attributeKeys;
- (void)authenticateAppleIdWithUsername:(id)arg1 password:(id)arg2 callback:(id)arg3;
- (void)authenticateForAccount:(id)arg1 withOptions:(id)arg2;
- (id)authenticationContext;
- (void)authorizeApplePayEnrollmentWithParameters:(id)arg1 callback:(id)arg2;
- (bool)canSendEmail;
- (id)carrierBundlingController;
- (bool)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(bool)arg2;
- (id)clientIdentifier;
- (id)clientInterface;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)composeReviewWithURL:(id)arg1 itemIdentifier:(id)arg2 type:(id)arg3;
- (id)cookie;
- (id)cookieDefaultURL;
- (id)cookieForDefaultURL;
- (struct OpaqueJSContext { }*)copyJavaScriptContext;
- (id)creditCardReaderAvailable;
- (id)currentAttestationVersion;
- (void)dealloc;
- (void)deallocAuthentication;
- (void)deallocCarrierBundlingController;
- (void)deallocMediaLibrary;
- (void)deallocMetricsController;
- (void)deallocSubscriptionStatusCoordinator;
- (id)delegate;
- (id)device;
- (id)deviceLocalStorage;
- (id)deviceOffers;
- (id)deviceSerialNumber;
- (long long)dialogDisplayCountForKey:(id)arg1;
- (id)diskSpaceAvailable;
- (void)dismissSafariViewControllerAnimated:(bool)arg1;
- (void)dismissSheet;
- (void)dismissWindowsWithOptions:(id)arg1;
- (void)dispatchGlobalEventWithName:(id)arg1 payload:(id)arg2;
- (void)dispatchXEvent:(id)arg1;
- (void)fetchAppleCardMetadata:(id)arg1 callback:(id)arg2;
- (void)fetchWalletCardData:(id)arg1;
- (void)fetchWalletCardMetadata:(id)arg1 callback:(id)arg2;
- (void)financeInterruptionResolved:(id)arg1;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (id)getAudioPlayerForURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3;
- (id)getDownloadQueueWithQueueType:(id)arg1;
- (void)getInstalledSoftwareApplicationsWithCompletionFunction:(id)arg1;
- (void)getSoftwareApplicationWithAdamID:(id)arg1 completionFunction:(id)arg2;
- (void)getSoftwareApplicationWithBundleID:(id)arg1 completionFunction:(id)arg2;
- (id)getiTunesPass;
- (id)globalRootObject;
- (void)goBack;
- (void)gotoStoreURL:(id)arg1;
- (void)gotoStoreURL:(id)arg1 ofType:(id)arg2 withAuthentication:(bool)arg3 forceAuthentication:(bool)arg4;
- (id)gsToken;
- (void)handleDialogPropertyListString:(id)arg1;
- (void)handleProtocolPropertyListString:(id)arg1;
- (void)handleRootObjectWithPropertyListString:(id)arg1;
- (void)handleTrackListWithPropertyListString:(id)arg1;
- (id)hardwareType;
- (bool)haveAccount;
- (id)init;
- (void)initAuthentication;
- (id)installedSoftwareApplications;
- (id)isApplePayAvailable;
- (bool)isExplicitContentDisabled;
- (id)isFinanceInterruption;
- (bool)isRunningTest;
- (id)isWalletAvailable;
- (bool)launchedToTest;
- (void)log:(id)arg1;
- (id)loggingEnabled;
- (id)machineGUID;
- (id)makeAccount;
- (id)makeAccountPageWithURLs:(id)arg1;
- (id)makeActivity;
- (id)makeActivityItemProviderWithMIMEType:(id)arg1;
- (id)makeActivityViewControllerWithProviders:(id)arg1 activities:(id)arg2;
- (id)makeButtonWithSystemItemString:(id)arg1 action:(id)arg2;
- (id)makeButtonWithTitle:(id)arg1 action:(id)arg2;
- (id)makeCalloutView;
- (id)makeCanvasWithWidth:(id)arg1 height:(id)arg2;
- (id)makeColorWithHue:(id)arg1 saturation:(id)arg2 brightness:(id)arg3 alpha:(id)arg4;
- (id)makeColorWithRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
- (id)makeColorWithWhite:(id)arg1 alpha:(id)arg2;
- (id)makeComposeReviewViewControllerWithReview:(id)arg1;
- (id)makeDateFormatter;
- (id)makeDialog;
- (id)makeDocumentInteractionController;
- (id)makeDonationViewControllerWithCharityIdentifier:(id)arg1;
- (id)makeFacebookRequestWithURL:(id)arg1 requestMethod:(id)arg2;
- (id)makeFacebookSessionWithAccount:(id)arg1;
- (id)makeFamilySetupViewController;
- (id)makeGiftViewController;
- (id)makeLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
- (id)makeLookupRequest;
- (id)makeMediaPlayerItemWithProperties:(id)arg1;
- (id)makeMediaPlayerViewControllerWithMediaPlayerItem:(id)arg1;
- (id)makeMenuViewController;
- (id)makeNavigationControllerWithRootViewController:(id)arg1;
- (id)makeNumberFormatterWithStyle:(id)arg1;
- (id)makePopOverWithViewController:(id)arg1;
- (id)makeRadialGradientWithX0:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6;
- (id)makeRedeemCameraViewController;
- (id)makeRedeemViewController;
- (id)makeReportAProblemViewControllerWithAdamID:(id)arg1;
- (id)makeReviewWithAdamID:(id)arg1;
- (id)makeScriptActionWithType:(id)arg1;
- (id)makeSegmentedControl;
- (id)makeSplitViewController;
- (id)makeStorePageWithURLs:(id)arg1;
- (id)makeStoreSheetViewController;
- (id)makeSubscriptionStatusRequest;
- (id)makeTextFieldWithStyle:(id)arg1 placeholder:(id)arg2 value:(id)arg3 width:(id)arg4;
- (id)makeURLRequestWithURLs:(id)arg1 timeoutInterval:(id)arg2;
- (id)makeVolumeViewController;
- (id)makeWindow;
- (id)makeXMLHTTPRequest;
- (id)makeXMLHTTPStoreRequest;
- (id)mediaLibrary;
- (id)metricsController;
- (id)minimumAttestationVersionForAction:(unsigned long long)arg1;
- (id)navigationBar;
- (id)navigationSimulator;
- (void)openCreditCardReaderWithCompletionFunction:(id)arg1;
- (void)openFamilyCircleSetupWithClientName:(id)arg1 completionFunction:(id)arg2;
- (void)openURL:(id)arg1;
- (void)openWallet;
- (id)orientation;
- (id)parentViewController;
- (id)passbookLibrary;
- (void)paymentSetupFeatureSupported:(id)arg1 callback:(id)arg2;
- (void)perfLog:(id)arg1;
- (void)performPurchaseAnimationForIdentifier:(id)arg1 style:(id)arg2;
- (void)pingURL:(id)arg1;
- (id)presentPrivacySplashWithIdentifier:(id)arg1;
- (id)presentPrivacyViewControllerWithIdentifier:(id)arg1;
- (id)presentingViewControllerForScriptModalDialog:(id)arg1;
- (id)previewOverlay;
- (id)primaryAccount;
- (id)primaryLockerAccount;
- (id)primaryiCloudAccount;
- (id)protocol;
- (id)purchaseManager;
- (id)redeemCameraAvailable;
- (void)redeemCode:(id)arg1;
- (void)redeemCodes:(id)arg1 params:(id)arg2 completion:(id)arg3;
- (void)redeemCodesReloadDownloadManager;
- (id)referrerURL;
- (id)referringUserAgent;
- (void)registerNavBarButtonWithTitle:(id)arg1 side:(id)arg2 function:(id)arg3;
- (void)reloadFooterSection:(id)arg1 withURL:(id)arg2;
- (void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2;
- (void)reportAProblemForIdentifier:(id)arg1;
- (id)requestInfo;
- (void)requireCellularForResourceWithURL:(id)arg1;
- (void)retryAllRestoreDownloads;
- (id)safariDismissButtonStyle;
- (id)safariViewController;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(bool)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (id)safariViewControllerDismissButtonStyle;
- (id)safariViewControllerIdentifier;
- (id)safariViewControllerIdentifierQueryParameterName;
- (id)screenReaderRunning;
- (id)scriptAttributeKeys;
- (id)scriptStoreBagDictionary;
- (id)scriptWindowContext;
- (bool)scriptXMLHTTPRequest:(id)arg1 requiresCellularForURL:(id)arg2;
- (bool)scriptXMLHTTPStoreRequest:(id)arg1 requiresCellularForURL:(id)arg2;
- (id)sectionsController;
- (void)selectSectionWithIdentifier:(id)arg1;
- (void)selectTrackListItemWithIdentifier:(id)arg1;
- (void)sendPostOfType:(id)arg1 withOptions:(id)arg2;
- (void)setAccounts:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setCarrierBundlingController:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (void)setCookie:(id)arg1;
- (void)setCookieDefaultURL:(id)arg1;
- (void)setCookieForDefaultURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setGlobalRootObject:(id)arg1;
- (void)setGsToken:(id)arg1;
- (void)setLibraryIdentifierWithType:(id)arg1 value:(id)arg2;
- (void)setLoggingEnabled:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setNavigationSimulator:(id)arg1;
- (void)setOrientation:(id)arg1;
- (void)setPrimaryAccount:(id)arg1;
- (void)setPrimaryLockerAccount:(id)arg1;
- (void)setReferrerURL:(id)arg1;
- (void)setReferringUserAgent:(id)arg1;
- (void)setSafariDismissButtonStyle:(id)arg1;
- (void)setSafariViewController:(id)arg1;
- (void)setSafariViewControllerDismissButtonStyle:(id)arg1;
- (void)setSafariViewControllerIdentifier:(id)arg1;
- (void)setScriptWindowContext:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setSubscriptionStatusCoordinator:(id)arg1;
- (void)setTidHeaders:(id)arg1;
- (void)setTidState:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setWalletAvailable:(id)arg1;
- (void)setWebFrame:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)shouldDisplayPrivacyLinkWithIdentifier:(id)arg1;
- (bool)shouldRestrictContentOfSystem:(id)arg1 level:(id)arg2;
- (bool)shouldShowAddToWalletLink:(id)arg1;
- (void)showAlertWithMessage:(id)arg1 title:(id)arg2 buttonTitle:(id)arg3;
- (bool)showConfirmWithMessage:(id)arg1 title:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;
- (void)showMediaPlayerWithURLString:(id)arg1 orientation:(id)arg2 title:(id)arg3 subtitle:(id)arg4 bookmarkID:(id)arg5 duration:(id)arg6 type:(id)arg7 imageURL:(id)arg8;
- (void)showMediaPreviewWithURLString:(id)arg1;
- (id)showPromptWithMessage:(id)arg1 initialValue:(id)arg2 title:(id)arg3 okButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5;
- (void)showSafariViewControllerWithURLString:(id)arg1 identifier:(id)arg2 animated:(bool)arg3;
- (void)signOutPrimaryAccount;
- (void)signupInWallet:(id)arg1 callback:(id)arg2;
- (id)softwareApplicationWithAdamID:(id)arg1;
- (id)softwareApplicationWithBundleID:(id)arg1;
- (void)startListeningForAuthenticationTokenWithCallback:(id)arg1;
- (void)startedTest:(id)arg1;
- (void)stopListeningForAuthenticationToken;
- (id)storeFrontIdentifier;
- (long long)storeSheetType;
- (long long)storeSheetTypeAskToBuy;
- (long long)storeSheetTypeDefault;
- (id)subscriptionStatusCoordinator;
- (id)systemItemAction;
- (id)systemItemAdd;
- (id)systemItemBookmarks;
- (id)systemItemCamera;
- (id)systemItemCancel;
- (id)systemItemCompose;
- (id)systemItemDone;
- (id)systemItemEdit;
- (id)systemItemFastForward;
- (id)systemItemFixedSpace;
- (id)systemItemFlexibleSpace;
- (id)systemItemOrganize;
- (id)systemItemPageCurl;
- (id)systemItemPause;
- (id)systemItemPlay;
- (id)systemItemRedo;
- (id)systemItemRefresh;
- (id)systemItemReplay;
- (id)systemItemRewind;
- (id)systemItemSearch;
- (id)systemItemStop;
- (id)systemItemTrash;
- (id)systemItemUndo;
- (id)systemVersion;
- (id)telephony;
- (id)threadSafeDelegate;
- (id)tidHeaders;
- (id)tidState;
- (id)userAgent;
- (id)viewController;
- (id)webFrame;
- (id)window;

@end
