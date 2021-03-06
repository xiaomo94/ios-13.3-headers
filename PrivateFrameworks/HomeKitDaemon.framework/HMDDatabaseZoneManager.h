/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDatabaseZoneManager : HMFObject <HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDelegate, HMDDatabaseDelegate, HMFLogging> {
    HMBCloudZone * _cloudZone;
    HMBCloudZoneConfiguration * _cloudZoneConfiguration;
    <HMDDatabase> * _database;
    <HMDDatabaseZoneManagerDelegate> * _delegate;
    NSSet * _externalRecordTypesForSubscriptions;
    HMDHome * _home;
    HMBLocalZone * _localZone;
    HMDCloudShareParticipantsManager * _participantsManager;
    <HMDCloudShareParticipantsManagerDataSource> * _participantsManagerDataSource;
    id /* block */  _participantsManagerFactory;
    HMDCloudShareMessenger * _shareMessenger;
    long long  _state;
    NSObject<OS_dispatch_queue> * _workQueue;
    <HMBLocalZoneDelegate><HMBCloudZoneDelegate> * _zoneDelegate;
    NSString * _zoneName;
}

@property (retain) HMBCloudZone *cloudZone;
@property (copy) HMBCloudZoneConfiguration *cloudZoneConfiguration;
@property (readonly, copy) NSString *containerIdentifier;
@property (readonly) <HMDDatabase> *database;
@property (readonly, copy) NSString *debugDescription;
@property <HMDDatabaseZoneManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy) NSSet *externalRecordTypesForSubscriptions;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (retain) HMBLocalZone *localZone;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (getter=isOwnerUser, readonly) bool ownerUser;
@property (retain) HMDCloudShareParticipantsManager *participantsManager;
@property <HMDCloudShareParticipantsManagerDataSource> *participantsManagerDataSource;
@property (copy) id /* block */ participantsManagerFactory;
@property (readonly) HMDCloudShareMessenger *shareMessenger;
@property long long state;
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) <HMBLocalZoneDelegate><HMBCloudZoneDelegate> *zoneDelegate;
@property (readonly, copy) NSString *zoneName;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_tearDownState;
- (id)cloudZone;
- (id)cloudZoneConfiguration;
- (void)configure;
- (id)containerIdentifier;
- (id)database;
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2;
- (void)database:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2;
- (id)delegate;
- (id)externalRecordTypesForSubscriptions;
- (id)home;
- (id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 messageTargetUUID:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6;
- (id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 shareMessenger:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6;
- (bool)isOwnerUser;
- (id)localZone;
- (id)logIdentifier;
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;
- (id)messageTargetUUID;
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(id /* block */)arg3;
- (void)messengerDidReceiveInvitationRequest:(id)arg1;
- (id)participantsManager;
- (id)participantsManagerDataSource;
- (id /* block */)participantsManagerFactory;
- (id)remove;
- (void)setCloudZone:(id)arg1;
- (void)setCloudZoneConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExternalRecordTypesForSubscriptions:(id)arg1;
- (void)setLocalZone:(id)arg1;
- (void)setParticipantsManager:(id)arg1;
- (void)setParticipantsManagerDataSource:(id)arg1;
- (void)setParticipantsManagerFactory:(id /* block */)arg1;
- (void)setState:(long long)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)shareMessenger;
- (void)start;
- (long long)state;
- (void)updateShareParticipants;
- (id)workQueue;
- (id)zoneDelegate;
- (id)zoneName;

@end
