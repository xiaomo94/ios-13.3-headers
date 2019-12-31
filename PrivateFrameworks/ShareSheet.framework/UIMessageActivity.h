/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface UIMessageActivity : UIActivity <UIManagedConfigurationRestrictableActivity> {
    bool  _isContentManaged;
    LPLinkMetadata * _linkMetadata;
    MFMessageComposeViewController * _messageComposeViewController;
    NSString * _sourceApplicationBundleID;
}

@property (nonatomic) bool isContentManaged;
@property (nonatomic, retain) LPLinkMetadata *linkMetadata;
@property (nonatomic, retain) MFMessageComposeViewController *messageComposeViewController;
@property (nonatomic, copy) NSString *sourceApplicationBundleID;

+ (void)_preheatAsyncIfNeeded;
+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;
+ (id)applicationBundleID;

- (void).cxx_destruct;
- (id /* block */)_backgroundPreheatBlock;
- (id)_bundleIdentifierForActivityImageCreation;
- (void)_cleanup;
- (void)_prepareWithActivityItems:(id)arg1 completion:(id /* block */)arg2;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (bool)isContentManaged;
- (id)linkMetadata;
- (id)messageComposeViewController;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setIsContentManaged:(bool)arg1;
- (void)setLinkMetadata:(id)arg1;
- (void)setMessageComposeViewController:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSourceApplicationBundleID:(id)arg1;
- (id)sourceApplicationBundleID;

@end
