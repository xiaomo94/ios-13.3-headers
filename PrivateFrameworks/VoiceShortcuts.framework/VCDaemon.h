/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCDaemon : NSObject {
    VCCKNotificationCenter * _cloudKitNotificationCenter;
    VCCoreDuetListener * _coreDuetListener;
    VCDaemonDatabaseProvider * _databaseProvider;
    VCShareSheetWorkflowStatusUpdater * _shareSheetStatusUpdater;
    VCSpotlightSyncService * _spotlightLibrarySyncService;
    VCDaemonSyncDataEndpoint * _syncDataEndpoint;
    VCWatchSyncCoordinator * _watchSyncCoordinator;
    VCDaemonXPCEventHandler * _xpcEventHandler;
    VCXPCServer * _xpcServer;
}

@property (nonatomic, retain) VCCKNotificationCenter *cloudKitNotificationCenter;
@property (nonatomic, readonly) VCCoreDuetListener *coreDuetListener;
@property (nonatomic, readonly) VCDaemonDatabaseProvider *databaseProvider;
@property (nonatomic, retain) VCShareSheetWorkflowStatusUpdater *shareSheetStatusUpdater;
@property (nonatomic, readonly) VCSpotlightSyncService *spotlightLibrarySyncService;
@property (nonatomic, readonly) VCDaemonSyncDataEndpoint *syncDataEndpoint;
@property (nonatomic, readonly) VCWatchSyncCoordinator *watchSyncCoordinator;
@property (nonatomic, readonly) VCDaemonXPCEventHandler *xpcEventHandler;
@property (nonatomic, readonly) VCXPCServer *xpcServer;

+ (id)sharedDaemon;

- (void).cxx_destruct;
- (void)applicationWasUnregistered:(id)arg1;
- (void)assistantPreferencesDidChange;
- (id)cloudKitNotificationCenter;
- (id)coreDuetListener;
- (id)databaseProvider;
- (id)init;
- (void)setCloudKitNotificationCenter:(id)arg1;
- (void)setShareSheetStatusUpdater:(id)arg1;
- (id)shareSheetStatusUpdater;
- (id)spotlightLibrarySyncService;
- (void)start;
- (void)startEventObservation;
- (id)syncDataEndpoint;
- (id)watchSyncCoordinator;
- (id)xpcEventHandler;
- (id)xpcServer;

@end
