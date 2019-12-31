/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDRecordZoneManager : NSObject <APSConnectionDelegate> {
    CKRecordZone * _analyticRecordZone;
    CKRecordZoneID * _analyticRecordZoneID;
    CKRecordZone * _attachmentRecordZone;
    CKRecordZoneID * _attachmentRecordZoneID;
    CKRecordZone * _chatRecordZone;
    CKRecordZoneID * _chatRecordZoneID;
    IMDCKDatabaseManager * _dataBaseManager;
    CKRecordZone * _deDupeSaltRecordZone;
    CKRecordZoneID * _deDupeSaltZoneID;
    CKRecordZone * _messageRecordZone;
    CKRecordZoneID * _messageRecordZoneID;
    CKRecordZoneID * _metricZoneID;
    APSConnection * _pushConnection;
}

@property (nonatomic, readonly) CKRecordZone *analyticRecordZone;
@property (nonatomic, readonly) CKRecordZoneID *analyticRecordZoneID;
@property (nonatomic, readonly) CKRecordZone *attachmentRecordZone;
@property (nonatomic, readonly) CKRecordZoneID *attachmentRecordZoneID;
@property (nonatomic, readonly) CKRecordZone *chatRecordZone;
@property (nonatomic, readonly) CKRecordZoneID *chatRecordZoneID;
@property (nonatomic, retain) IMDCKDatabaseManager *dataBaseManager;
@property (nonatomic, readonly) CKRecordZone *deDupeSaltRecordZone;
@property (nonatomic, readonly) CKRecordZoneID *deDupeSaltZoneID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecordZone *messageRecordZone;
@property (nonatomic, readonly) CKRecordZoneID *messageRecordZoneID;
@property (nonatomic, readonly) CKRecordZoneID *metricZoneID;
@property (nonatomic, retain) APSConnection *pushConnection;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)_checkRecordZoneExists:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_createRecordZone:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_createRecordZoneIfNeeded:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_createSubscriptionForZoneID:(id)arg1 subscriptionID:(id)arg2 recordType:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_createSubscriptionIfNeededForZoneID:(id)arg1 subscriptionID:(id)arg2 recordType:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_deleteAllZonesForDatabase:(id)arg1;
- (void)_deleteZone:(id)arg1;
- (void)_deleteZone:(id)arg1 forDatabase:(id)arg2;
- (void)_handleNotificationForZoneID:(id)arg1 subscriptionID:(id)arg2;
- (void)_setUpPushConnection;
- (id)analyticRecordZone;
- (id)analyticRecordZoneID;
- (id)attachmentRecordZone;
- (id)attachmentRecordZoneID;
- (id)chatRecordZone;
- (id)chatRecordZoneID;
- (id)ckUtilities;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)createAnalyticZoneIfNeededWithCompletionBlock:(id /* block */)arg1;
- (void)createAttachmentZoneIfNeededWithCompletionBlock:(id /* block */)arg1;
- (void)createChatZoneIfNeededWithCompletionBlock:(id /* block */)arg1;
- (void)createDeDupeSaltZoneIfNeededWithCompletionBlock:(id /* block */)arg1;
- (void)createMessageZoneIfNeededWithCompletionBlock:(id /* block */)arg1;
- (void)createSubscriptionIfNeededOnDeDupeZoneForSubscription:(id)arg1 recordType:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)dataBaseManager;
- (id)deDupeSaltRecordZone;
- (id)deDupeSaltZoneID;
- (void)dealloc;
- (void)deleteAllZones;
- (void)deleteAnalyticZone;
- (void)deleteAttachmentZone;
- (void)deleteChatZone;
- (void)deleteDeDupeSaltZone;
- (void)deleteMessageZone;
- (long long)derivedQualityOfService;
- (void)fetchChatZoneToCheckManateeStatus:(id /* block */)arg1;
- (id)init;
- (id)messageRecordZone;
- (id)messageRecordZoneID;
- (id)metricZoneID;
- (id)pushConnection;
- (void)setDataBaseManager:(id)arg1;
- (void)setPushConnection:(id)arg1;

@end
