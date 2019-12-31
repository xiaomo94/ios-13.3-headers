/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSStunCandidatePair : NSObject {
    double  _allocateTime;
    long long  _allocateType;
    NSObject<OS_dispatch_source> * _allocbindFailoverTimer;
    NSString * _appName;
    unsigned long long  _capabilityFlags;
    unsigned short  _channelNumber;
    NSData * _decKey;
    NSUUID * _defaultLocalDeviceCBUUID;
    NSUUID * _defaultRemoteDeviceCBUUID;
    <IDSStunCandidatePairDelegate> * _delegate;
    bool  _enableSKE;
    NSData * _encKey;
    NSString * _groupID;
    unsigned short  _hbCounter;
    bool  _hbStarted;
    NSData * _hmacKey;
    bool  _isAcceptedRelaySession;
    bool  _isActive;
    bool  _isDisconnecting;
    bool  _isInitiator;
    bool  _isNominated;
    bool  _isRealloc;
    double  _lastIncomingPacketTime;
    double  _lastOutgoingPacketTime;
    BOOL  _linkID;
    NSUUID * _linkUUID;
    IDSStunCandidate * _local;
    NSObject<OS_dispatch_source> * _noSessionStateTimer;
    long long  _participantID;
    NSDictionary * _participantIDMap;
    bool  _pendingNoSessionStateAllocbind;
    bool  _pendingRealloc;
    NSMutableArray * _pendingStunRequests;
    unsigned char  _protocolVersion;
    NSObject<OS_dispatch_source> * _reallocTimer;
    bool  _recvDisconnected;
    bool  _recvDisconnectedAck;
    bool  _recvSKEData;
    unsigned short  _relayLinkID;
    long long  _relayProviderType;
    IDSStunCandidate * _relayRemote;
    IDSQuickRelaySessionInfo * _relaySessionInfo;
    NSData * _relaySessionKey;
    NSData * _relaySessionToken;
    IDSStunCandidate * _remote;
    NSMutableArray * _repliedStunRequests;
    NSMutableDictionary * _requestIDToQueryLinkIDs;
    NSMutableDictionary * _requestIDToSessionInfoReqType;
    double  _selfAllocateStartTime;
    id /* block */  _sendMsgBlock;
    bool  _sentSKEData;
    bool  _serverIsDegraded;
    double  _serverLatency;
    id /* block */  _sessionConnectedTimeoutBlock;
    NSObject<OS_dispatch_source> * _sessionConnectedTimer;
    id /* block */  _sessionConvergenceBlock;
    NSObject<OS_dispatch_source> * _sessionConvergenceTimer;
    id /* block */  _sessionGoAwayBlock;
    NSObject<OS_dispatch_source> * _sessionGoAwayTimer;
    NSString * _sessionID;
    NSDictionary * _sessionInfoDict;
    unsigned int  _sessionInfoReqCount;
    NSData * _skeData;
    NSData * _softwareData;
    unsigned long long  _state;
    unsigned char  _statsIntervalInSeconds;
    NSMutableDictionary * _stunSentBytesToRequestID;
    unsigned int  _testOptions;
    double  _testStartTime;
    unsigned int  _totalPacketsReceivedOnLink;
    unsigned int  _totalPacketsSentOnLink;
    double  _triggeredCheckTime;
}

@property (nonatomic) double allocateTime;
@property (nonatomic) long long allocateType;
@property (retain) NSObject<OS_dispatch_source> *allocbindFailoverTimer;
@property (readonly) NSString *appName;
@property (nonatomic, readonly) unsigned long long capabilityFlags;
@property (nonatomic) unsigned short channelNumber;
@property (readonly) NSData *decKey;
@property (copy) NSUUID *defaultLocalDeviceCBUUID;
@property (copy) NSUUID *defaultRemoteDeviceCBUUID;
@property (nonatomic, readonly) bool enableSKE;
@property (readonly) NSData *encKey;
@property (copy) NSString *groupID;
@property (nonatomic, readonly) unsigned short hbCounter;
@property (nonatomic) bool hbStarted;
@property (readonly) NSData *hmacKey;
@property (nonatomic) bool isAcceptedRelaySession;
@property (nonatomic) bool isActive;
@property (nonatomic) bool isDisconnecting;
@property (nonatomic, readonly) bool isInitiator;
@property (nonatomic) bool isNominated;
@property (nonatomic) bool isRealloc;
@property (nonatomic) double lastIncomingPacketTime;
@property (nonatomic) double lastOutgoingPacketTime;
@property (nonatomic) BOOL linkID;
@property (copy) NSUUID *linkUUID;
@property (readonly) IDSStunCandidate *local;
@property (nonatomic) long long participantID;
@property (readonly) NSDictionary *participantIDMap;
@property (nonatomic) bool pendingNoSessionStateAllocbind;
@property (nonatomic) bool pendingRealloc;
@property (readonly) NSMutableArray *pendingStunRequests;
@property (nonatomic, readonly) unsigned char protocolVersion;
@property (nonatomic) bool recvDisconnected;
@property (nonatomic) bool recvDisconnectedAck;
@property (nonatomic) bool recvSKEData;
@property (nonatomic, readonly) unsigned short relayLinkID;
@property (nonatomic) long long relayProviderType;
@property (retain) IDSStunCandidate *relayRemote;
@property (readonly) IDSQuickRelaySessionInfo *relaySessionInfo;
@property (readonly) NSData *relaySessionKey;
@property (readonly) NSData *relaySessionToken;
@property (readonly) IDSStunCandidate *remote;
@property (readonly) NSMutableArray *repliedStunRequests;
@property (nonatomic) double selfAllocateStartTime;
@property (nonatomic) bool sentSKEData;
@property (nonatomic, readonly) bool serverIsDegraded;
@property (nonatomic) double serverLatency;
@property (readonly) NSString *sessionID;
@property (readonly) NSDictionary *sessionInfoDict;
@property (nonatomic, readonly) unsigned int sessionInfoReqCount;
@property (copy) NSData *skeData;
@property (readonly) NSData *softwareData;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) unsigned char statsIntervalInSeconds;
@property (nonatomic, readonly) unsigned int testOptions;
@property (nonatomic, readonly) double testStartTime;
@property (nonatomic) unsigned int totalPacketsReceivedOnLink;
@property (nonatomic) unsigned int totalPacketsSentOnLink;
@property (nonatomic) double triggeredCheckTime;

+ (id)candidatePairWithLocalCandidate:(id)arg1 remoteCandidate:(id)arg2 sessionID:(id)arg3 delegate:(id)arg4 sendMsgBlock:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)_handleNoSessionStateTimer;
- (void)_handleReallocTimer;
- (void)_handleSessionConnectedtTimer;
- (void)_handleSessionConvergenceTimer;
- (void)_handleSessionGoAwayTimer;
- (void)_notifyQREventAdded:(id)arg1;
- (void)_notifySessionStreamInfoReceived:(id)arg1 withParticipants:(id)arg2 sentBytes:(unsigned long long)arg3 receivedBytes:(unsigned long long)arg4 offlineRequest:(bool)arg5 streamInfoRequest:(bool)arg6 success:(bool)arg7;
- (bool)_optionallyCheckEncMarker:(id)arg1;
- (void)_startNoSessionStateTimer;
- (void)_startReallocTimer;
- (void)_stopNoSessionStateTimer;
- (void)_stopReallocTimer;
- (void)addStunRequest:(id)arg1;
- (double)allocateTime;
- (long long)allocateType;
- (id)allocbindFailoverTimer;
- (id)appName;
- (id)candidatePairToken;
- (unsigned long long)capabilityFlags;
- (unsigned short)channelNumber;
- (void)dealloc;
- (id)decKey;
- (id)defaultLocalDeviceCBUUID;
- (id)defaultRemoteDeviceCBUUID;
- (void)deriveAES128CTRKeys:(id)arg1;
- (id)description;
- (bool)enableSKE;
- (id)encKey;
- (unsigned long long)getParticipantIDHash:(id)arg1;
- (unsigned long long)getStunSentBytes:(id)arg1;
- (id)groupID;
- (bool)hasValidCapabilityFlags;
- (unsigned short)hbCounter;
- (bool)hbStarted;
- (id)hmacKey;
- (void)initParticipantIDMap;
- (id)initWithLocalCandidate:(id)arg1 remoteCandidate:(id)arg2 sessionID:(id)arg3 delegate:(id)arg4 sendMsgBlock:(id /* block */)arg5;
- (void)invalidate;
- (bool)isAcceptedRelaySession;
- (bool)isActive;
- (bool)isDisconnecting;
- (bool)isEqual:(id)arg1;
- (bool)isInitiator;
- (bool)isNominated;
- (bool)isRealloc;
- (bool)isRelayStunCandidatePair;
- (bool)isSelfQRSession;
- (bool)isSharedQRSession;
- (bool)isValidRelayStunCandidatePair;
- (double)lastIncomingPacketTime;
- (double)lastOutgoingPacketTime;
- (BOOL)linkID;
- (id)linkUUID;
- (id)local;
- (unsigned int)nextSessionInfoReqID;
- (long long)participantID;
- (id)participantIDMap;
- (bool)pendingNoSessionStateAllocbind;
- (bool)pendingRealloc;
- (id)pendingStunRequests;
- (bool)processDataMessageErrorIndication:(id)arg1;
- (bool)processInfoIndication:(id)arg1 arrivalTime:(double)arg2;
- (bool)processInfoResponse:(id)arg1 packetBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; double x21; unsigned long long x22; unsigned char x23[0]; }*)arg2 headerOverhead:(unsigned long long)arg3;
- (id)processParticipantsData:(char *)arg1 dataLen:(int)arg2;
- (bool)processSessionInfoIndication:(id)arg1 arrivalTime:(double)arg2;
- (void)processSessionInfoRequestTimeout:(id)arg1;
- (bool)processSessionInfoResponse:(id)arg1 packetBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; double x21; unsigned long long x22; unsigned char x23[0]; }*)arg2 headerOverhead:(unsigned long long)arg3;
- (bool)processStatsResponse:(id)arg1 arrivalTime:(double)arg2;
- (bool)processStunErrorResponse:(id)arg1 packetBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; double x21; unsigned long long x22; unsigned char x23[0]; }*)arg2 headerOverhead:(unsigned long long)arg3;
- (bool)processTestResponse:(id)arg1 arrivalTime:(double)arg2;
- (unsigned char)protocolVersion;
- (bool)recvDisconnected;
- (bool)recvDisconnectedAck;
- (bool)recvSKEData;
- (unsigned short)relayLinkID;
- (long long)relayProviderType;
- (id)relayRemote;
- (id)relaySessionInfo;
- (id)relaySessionKey;
- (id)relaySessionToken;
- (id)remote;
- (void)removeStunRequest:(id)arg1;
- (id)repliedStunRequests;
- (double)selfAllocateStartTime;
- (void)sendInfoRequest:(id)arg1;
- (void)sendSessionInfoRequest:(id)arg1 options:(id)arg2;
- (void)sendStatsRequest:(id)arg1 options:(id)arg2;
- (void)sendTestRequest:(id)arg1;
- (bool)sentSKEData;
- (bool)serverIsDegraded;
- (double)serverLatency;
- (id)sessionID;
- (id)sessionInfoDict;
- (unsigned int)sessionInfoReqCount;
- (void)setAllocateTime:(double)arg1;
- (void)setAllocateType:(long long)arg1;
- (void)setAllocbindFailoverTimer:(id)arg1;
- (void)setChannelNumber:(unsigned short)arg1;
- (void)setChannelSettings:(unsigned int)arg1;
- (void)setDefaultLocalDeviceCBUUID:(id)arg1;
- (void)setDefaultRemoteDeviceCBUUID:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setHbStarted:(bool)arg1;
- (void)setIsAcceptedRelaySession:(bool)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setIsDisconnecting:(bool)arg1;
- (void)setIsNominated:(bool)arg1;
- (void)setIsRealloc:(bool)arg1;
- (void)setLastIncomingPacketTime:(double)arg1;
- (void)setLastOutgoingPacketTime:(double)arg1;
- (void)setLinkID:(BOOL)arg1;
- (void)setLinkUUID:(id)arg1;
- (void)setParticipantID:(long long)arg1;
- (void)setPendingNoSessionState:(bool)arg1;
- (void)setPendingNoSessionStateAllocbind:(bool)arg1;
- (void)setPendingRealloc:(bool)arg1;
- (void)setPropertiesWithReallocCandidatePair:(id)arg1 reallocToken:(id)arg2;
- (void)setPropertiesWithRelaySessionInfo:(id)arg1 sessionInfoDict:(id)arg2 enableSKE:(bool)arg3;
- (void)setProtocolVersion:(unsigned char)arg1 isInitiator:(bool)arg2 enableSKE:(bool)arg3;
- (void)setRecvDisconnected:(bool)arg1;
- (void)setRecvDisconnectedAck:(bool)arg1;
- (void)setRecvSKEData:(bool)arg1;
- (void)setRelayLinkID:(unsigned short)arg1;
- (void)setRelayProviderType:(long long)arg1;
- (void)setRelayRemote:(id)arg1;
- (void)setSelfAllocateStartTime:(double)arg1;
- (void)setSentSKEData:(bool)arg1;
- (void)setServerLatency:(double)arg1;
- (void)setSkeData:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTestOptionsFromUserDefaults;
- (void)setTotalPacketsReceivedOnLink:(unsigned int)arg1;
- (void)setTotalPacketsSentOnLink:(unsigned int)arg1;
- (void)setTriggeredCheckTime:(double)arg1;
- (bool)shouldProcessStunResponse:(id)arg1;
- (bool)shouldRexmitStunRequest:(id)arg1;
- (id)skeData;
- (id)softwareData;
- (void)startSessionConnectedTimer:(int)arg1 block:(id /* block */)arg2;
- (void)startSessionConvergenceTimer:(int)arg1 block:(id /* block */)arg2;
- (void)startSessionGoAwayTimer:(int)arg1 block:(id /* block */)arg2;
- (unsigned long long)state;
- (unsigned char)statsIntervalInSeconds;
- (void)stopSessionConnectedTimer;
- (void)stopSessionConvergenceTimer;
- (void)stopSessionGoAwayTimer;
- (void)synthesizeNat64WithPrefix;
- (unsigned int)testOptions;
- (double)testStartTime;
- (unsigned int)totalPacketsReceivedOnLink;
- (unsigned int)totalPacketsSentOnLink;
- (double)triggeredCheckTime;
- (void)updateParticipantIDMap:(id)arg1;
- (void)updateStunSentBytes:(long long)arg1 requestID:(id)arg2;

@end
