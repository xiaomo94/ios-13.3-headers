/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYService : NSObject <SYStateLoggable, SYSyncEngineResponder> {
    NSArray * _aggdKeys;
    SYSession * _currentSession;
    NSDictionary * _customIDSOptions;
    double  _defaultMessageTimeout;
    struct NSDictionary { Class x1; } * _defaultOptions;
    long long  _defaultPriority;
    <SYServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    long long  _engineType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _flagLock;
    struct { 
        unsigned int isMaster : 1; 
        unsigned int hasChanges : 1; 
        unsigned int needsReset : 1; 
        unsigned int hasPairingStore : 1; 
        unsigned int isRunning : 1; 
        unsigned int registeredForPairingNotifications : 1; 
        unsigned int remoteProtocolVersion : 3; 
        unsigned int remoteDeviceIsWatch : 1; 
        unsigned int isObservingRemoteDeviceProperties : 1; 
        unsigned int requestedEngineType : 3; 
        unsigned int assignedEngineType : 3; 
        unsigned int suspendedForQWS : 1; 
    }  _flags;
    NSString * _generationID;
    NSString * _inFlightSyncRequestIdentifier;
    NSObject<OS_dispatch_queue> * _incomingIOQueue;
    NSMutableArray * _onSessionEnd;
    NSString * _peerID;
    SYPersistentStore * _persistentStore;
    NSObject<OS_dispatch_source> * _processSignalSource;
    NSObject<OS_dispatch_queue> * _queue;
    _SYQueuedStartSession * _queuedStartSession;
    NSMutableSet * _rejectingV1SyncSessions;
    long long  _sendingBufferCap;
    NSObject<OS_os_activity> * _serviceActivity;
    NSString * _serviceName;
    _SYMultiSuspendableQueue * _sessionQueue;
    double  _sessionStalenessInterval;
    unsigned long long  _stateHandle;
    SYSyncEngine * _syncEngine;
    SYDevice * _targetedDevice;
    SYVectorClock * _vectorClock;
}

@property (nonatomic, readonly, copy) NSArray *aggdKeys;
@property (readonly) SYSession *currentSession;
@property (nonatomic, copy) NSDictionary *customIDSOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultMessageTimeout;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long engineType;
@property (nonatomic, readonly) NSDictionary *extraTransportOptions;
@property (nonatomic, readonly) NSString *generationID;
@property (nonatomic, readonly) bool hasPairingStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMasterStore;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic, readonly) NSString *peerID;
@property (nonatomic, readonly) SYPersistentStore *persistentStore;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long sendingBufferCap;
@property (nonatomic, readonly) NSObject<OS_os_activity> *serviceActivity;
@property (nonatomic, readonly) _SYMultiSuspendableQueue *sessionQueue;
@property (nonatomic) double sessionStalenessInterval;
@property (nonatomic, readonly) PBCodable *stateForLogging;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SYSyncEngine *syncEngine;
@property (nonatomic, readonly) bool targetIsConnected;
@property (nonatomic, readonly) bool targetIsInProximity;

- (void).cxx_destruct;
- (id)_chooseBetweenCollidingSessions:(id)arg1 :(id)arg2;
- (id)_claimOwnershipOfFileAtURL:(id)arg1 error:(id*)arg2;
- (void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1;
- (void)_dealWithPotentiallyStallingCurrentSession;
- (void)_deviceOSInfoChanged:(id)arg1;
- (void)_deviceRemoved:(id)arg1;
- (void)_deviceTargetabilityChanged:(id)arg1;
- (void)_downgradeEngineForVersion:(int)arg1;
- (void)_enqueueIncomingStartSessionRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleEndSession:(id)arg1 completion:(id /* block */)arg2;
- (bool)_handleEndSessionResponse:(id)arg1 error:(id*)arg2;
- (void)_handleError:(id)arg1;
- (void)_handleResetRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)_handleResetResponse:(id)arg1 error:(id*)arg2;
- (void)_handleRestartSession:(id)arg1 completion:(id /* block */)arg2;
- (bool)_handleRestartSessionResponse:(id)arg1 error:(id*)arg2;
- (void)_handleStartSession:(id)arg1 completion:(id /* block */)arg2;
- (bool)_handleStartSessionResponse:(id)arg1 error:(id*)arg2;
- (void)_handleSyncBatch:(id)arg1 completion:(id /* block */)arg2;
- (bool)_handleSyncBatchResponse:(id)arg1 error:(id*)arg2;
- (void)_ifDelegateImplements:(SEL)arg1 do:(id /* block */)arg2 then:(id /* block */)arg3;
- (bool)_initializeMessaging:(id*)arg1;
- (bool)_initializeServiceDB:(id*)arg1;
- (id)_makeSessionForDeltaSync:(bool)arg1;
- (id)_makeSyncEngineOfType:(long long)arg1;
- (id)_newMessageHeader;
- (id)_pathForDataStore;
- (void)_peerRejectedVersion:(id)arg1 completion:(id /* block */)arg2;
- (void)_postVersionRejectionMessageForMessageWithID:(id)arg1;
- (void)_processPendingChanges;
- (bool)_protocolVersion:(int)arg1 supportsEngineType:(long long)arg2;
- (void)_removePairingStoreDevice;
- (bool)_request:(id)arg1 hasValidSessionIDForSession:(id)arg2 response:(id)arg3 completion:(id /* block */)arg4;
- (void)_sendResetRequest;
- (id)_sessionFromIncomingStartRequest:(id)arg1;
- (void)_setProtocolVersionForRemoteOSVersion:(id)arg1 build:(id)arg2 remoteIsWatch:(bool)arg3 switchingEngines:(bool)arg4;
- (void)_setupPairingNotifications;
- (void)_setupPairingStoreWithDevice:(id)arg1;
- (bool)_shouldSession:(id)arg1 fromPeer:(id)arg2 supercedeSession:(id)arg3 ofAge:(double)arg4 collisionDetected:(bool*)arg5;
- (void)_signalPairingStoreAvailable;
- (void)_signalPairingStoreUnavailable;
- (void)_suspend;
- (void)_swapEngineTo:(long long)arg1;
- (void)_swapSessionForVersionChange;
- (void)_switchToNewTargetedDevice:(id)arg1;
- (void)_updateMetaProtocolInfoForDevice:(id)arg1;
- (void)_upgradeEngineTo:(long long)arg1;
- (bool)_v1_handleBatchChunkAck:(id)arg1 error:(id*)arg2;
- (bool)_v1_handleBatchEndResponse:(id)arg1 error:(id*)arg2;
- (void)_v1_handleBatchSyncChunk:(id)arg1 completion:(id /* block */)arg2;
- (void)_v1_handleBatchSyncEnd:(id)arg1 completion:(id /* block */)arg2;
- (void)_v1_handleBatchSyncStart:(id)arg1 completion:(id /* block */)arg2;
- (void)_v1_handleChangeMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)_v1_handleFullSyncRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)_v1_handleFullSyncRequestAck:(id)arg1 error:(id*)arg2;
- (void)_v1_handleSyncAllObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)_vectorClockUpdated;
- (void)_whenSessionEnds:(id /* block */)arg1;
- (void)_wrapUpCurrentSession:(id)arg1;
- (id)aggdKeys;
- (void)currentDeviceConnectionChanged:(bool)arg1;
- (void)currentDeviceProximityChanged:(bool)arg1;
- (id)currentSession;
- (id)customIDSOptions;
- (void)dataStreamWithMetadata:(id)arg1 options:(struct NSDictionary { Class x1; }*)arg2 completion:(id /* block */)arg3;
- (id)dataStreamWithMetadata:(id)arg1 options:(struct NSDictionary { Class x1; }*)arg2 identifier:(id*)arg3 error:(id*)arg4;
- (void)dealloc;
- (double)defaultMessageTimeout;
- (void)deliveredMessageWithID:(id)arg1 context:(id)arg2;
- (long long)engineType;
- (void)enqueuedMessageWithID:(id)arg1 context:(id)arg2;
- (id)extraTransportOptions;
- (id)generationID;
- (void)handleFileTransfer:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (void)handleOutOfBandData:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSyncError:(id)arg1 forMessageWithIdentifier:(id)arg2;
- (void)handleSyncRequest:(id)arg1 ofType:(unsigned short)arg2 response:(id /* block */)arg3;
- (void)handleSyncResponse:(id)arg1 ofType:(unsigned short)arg2 completion:(id /* block */)arg3;
- (bool)hasPairingStore;
- (id)init;
- (id)initWithService:(id)arg1 priority:(long long)arg2 asMasterStore:(bool)arg3 options:(struct NSDictionary { Class x1; }*)arg4;
- (id)initWithService:(id)arg1 priority:(long long)arg2 qos:(unsigned int)arg3 asMasterStore:(bool)arg4 options:(struct NSDictionary { Class x1; }*)arg5;
- (bool)isMasterStore;
- (id)name;
- (id)options;
- (id)peerID;
- (id)persistentStore;
- (long long)priority;
- (id)queue;
- (bool)resume:(id*)arg1;
- (void)sendData:(id)arg1 options:(struct NSDictionary { Class x1; }*)arg2 completion:(id /* block */)arg3;
- (bool)sendData:(id)arg1 options:(struct NSDictionary { Class x1; }*)arg2 identifier:(id*)arg3 error:(id*)arg4;
- (long long)sendingBufferCap;
- (void)sentMessageWithID:(id)arg1 context:(id)arg2;
- (void)serializeForIncomingSession:(id /* block */)arg1;
- (id)serviceActivity;
- (void)sessionDidEnd:(id)arg1 withError:(id)arg2;
- (void)sessionFailedToCancelMessageUUIDs:(id)arg1;
- (id)sessionQueue;
- (double)sessionStalenessInterval;
- (void)setCustomIDSOptions:(id)arg1;
- (void)setDefaultMessageTimeout:(double)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setEngineType:(long long)arg1;
- (void)setHasChangesAvailable;
- (void)setNeedsResetSync;
- (void)setOptions:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSendingBufferCap:(long long)arg1;
- (void)setSessionStalenessInterval:(double)arg1;
- (id)stateForLogging;
- (void)suspend;
- (id)syncEngine;
- (bool)targetIsConnected;
- (bool)targetIsInProximity;
- (bool)willAcceptMessageWithHeader:(id)arg1 messageID:(id)arg2;

@end
