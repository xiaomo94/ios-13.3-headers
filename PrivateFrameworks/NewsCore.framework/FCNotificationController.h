/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNotificationController : NSObject <FCUserInfoObserving> {
    bool  _appleNewsNotificationsAllowed;
    FCCommandQueue * _commandQueue;
    <FCCoreConfigurationManager> * _configurationManager;
    NSString * _deviceToken;
    NSString * _notificationsUserID;
    bool  _publisherNotificationsAllowed;
    FCUserInfo * _userInfo;
}

@property (nonatomic) bool appleNewsNotificationsAllowed;
@property (nonatomic, retain) FCCommandQueue *commandQueue;
@property (nonatomic, retain) <FCCoreConfigurationManager> *configurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *notificationsUserID;
@property (nonatomic) bool publisherNotificationsAllowed;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCUserInfo *userInfo;

- (void).cxx_destruct;
- (void)_registerDeviceToken:(id)arg1;
- (id)appendBreakingNewsIfNeededToChannelIDs:(id)arg1;
- (bool)appleNewsNotificationsAllowed;
- (id)commandQueue;
- (id)configurationManager;
- (void)dealloc;
- (id)deviceToken;
- (id)init;
- (id)initWithUserInfo:(id)arg1 commandQueue:(id)arg2 configurationManager:(id)arg3 publisherNotificationsAllowed:(bool)arg4 appleNewsNotificationsAllowed:(bool)arg5;
- (id)notificationsUserID;
- (bool)publisherNotificationsAllowed;
- (bool)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2;
- (void)refreshNotificationsFromAppleNews;
- (void)registerDeviceToken:(id)arg1;
- (bool)registerNotificationsForTagID:(id)arg1 isPaid:(bool)arg2;
- (void)setAppleNewsNotificationsAllowed:(bool)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setConfigurationManager:(id)arg1;
- (void)setDeviceToken:(id)arg1;
- (bool)setMarketingNotificationsEnabled:(bool)arg1 error:(id*)arg2;
- (void)setNewIssueNotificationsEnabled:(bool)arg1;
- (void)setNotificationsUserID:(id)arg1;
- (void)setPublisherNotificationsAllowed:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)unregisterNotificationsForTagID:(id)arg1;
- (id)userInfo;
- (void)userInfoDidChangeNotificationsUserID:(id)arg1;

@end
