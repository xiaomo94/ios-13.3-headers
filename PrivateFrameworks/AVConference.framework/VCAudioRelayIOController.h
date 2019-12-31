/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioRelayIOController : NSObject <VCAudioIOControllerControl> {
    NSMutableArray * _allClients;
    VCAudioRelayIOControllerSettings * _currentSettings;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    VCAudioRelay * _relay;
    unsigned int  _relayIOType;
    unsigned int  _relayType;
    struct _VCAudioIOControllerIOState { 
        bool timestampInitialized; 
        double lastHostTime; 
        unsigned int lastInputTimestamp; 
        unsigned int lastInputSampleCount; 
        double lastBlockSize; 
        unsigned long long lastTimestamp; 
        struct _VCSingleLinkedList { 
            struct _VCSingleLinkedListEntry {} *head; 
            bool initialized; 
            int (*compare)(); 
        } clientIOList; 
        struct opaqueCMSimpleQueue {} *eventQueue; 
        struct opaqueVCAudioLimiter {} *audioLimiter; 
        struct opaqueVCAudioBufferList {} *secondarySampleBuffer; 
    }  _sinkData;
    struct _VCAudioIOControllerIOState { 
        bool timestampInitialized; 
        double lastHostTime; 
        unsigned int lastInputTimestamp; 
        unsigned int lastInputSampleCount; 
        double lastBlockSize; 
        unsigned long long lastTimestamp; 
        struct _VCSingleLinkedList { 
            struct _VCSingleLinkedListEntry {} *head; 
            bool initialized; 
            int (*compare)(); 
        } clientIOList; 
        struct opaqueCMSimpleQueue {} *eventQueue; 
        struct opaqueVCAudioLimiter {} *audioLimiter; 
        struct opaqueVCAudioBufferList {} *secondarySampleBuffer; 
    }  _sourceData;
    NSMutableArray * _startingIOClients;
    unsigned int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initializeStateStrings;
+ (id)sharedInstanceClientFacing;
+ (id)sharedInstanceRemoteFacing;
+ (id)sharedInstanceSafeViewClientFacing;
+ (id)sharedInstanceSafeViewRemoteFacing;

- (void)_cleanupDeadClients;
- (bool)addClient:(id)arg1;
- (void)addStartingClient:(id)arg1 controllerSettings:(id)arg2;
- (void)dealloc;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)arg1;
- (void)flushEventQueue:(struct opaqueCMSimpleQueue { }*)arg1;
- (bool)handleTransitionPrepareToStarting;
- (id)initWithRelayType:(unsigned int)arg1 relayIOType:(unsigned int)arg2;
- (void)loadRelay;
- (id)newControllerSettingsWithNewClient:(id)arg1;
- (id)newRelayIOWithCompletionHandler:(id /* block */)arg1;
- (void)processEventQueue:(struct AudioEventQueue_t { }*)arg1 clientList:(id)arg2;
- (void)registerClientIO:(struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; }*)arg1 controllerIO:(struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; }*)arg2;
- (void)removeAllClientsForIO:(struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; }*)arg1;
- (bool)removeClient:(id)arg1;
- (void)resetAudioTimestamps;
- (struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; }*)sinkIO;
- (struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; }*)sourceIO;
- (void)startClient:(id)arg1;
- (bool)startRelayIO:(id)arg1;
- (bool)stateIdleWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int*)arg3;
- (bool)statePrepareWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int*)arg3;
- (bool)stateRunningWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int*)arg3;
- (bool)stateStartingWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int*)arg3;
- (void)stopClient:(id)arg1;
- (void)unloadRelay;
- (void)unregisterClientIO:(struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; }*)arg1 controllerIO:(struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; }*)arg2;
- (void)updateClient:(id)arg1;
- (bool)updateStateWithClient:(id)arg1;

@end
