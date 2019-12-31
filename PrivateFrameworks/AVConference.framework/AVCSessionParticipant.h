/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCSessionParticipant : NSObject <AVCSessionParticipantControlProtocol> {
    bool  _audioEnabled;
    bool  _audioMuted;
    bool  _audioPaused;
    float  _audioPosition;
    bool  _configurationInProgress;
    VCXPCClientShared * _connection;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateNotificationQueue;
    NSData * _frequencyLevels;
    bool  _hasPendingChanges;
    unsigned long long  _idsParticipantID;
    NSMutableDictionary * _participantConfig;
    NSData * _participantData;
    NSString * _participantID;
    unsigned int  _prominenceIndex;
    unsigned long long  _spatialAudioSourceID;
    NSObject<OS_dispatch_queue> * _stateQueue;
    bool  _videoEnabled;
    bool  _videoPaused;
    unsigned char  _videoQuality;
    long long  _videoToken;
    unsigned int  _visibilityIndex;
    float  _volume;
    unsigned long long  spatialAudioSourceID;
}

@property (getter=isAudioEnabled, nonatomic) bool audioEnabled;
@property (getter=isAudioMuted, nonatomic) bool audioMuted;
@property (getter=isAudioPaused, nonatomic) bool audioPaused;
@property (nonatomic) float audioPosition;
@property (nonatomic, readonly) NSDictionary *config;
@property (nonatomic) bool configurationInProgress;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVCSessionParticipantDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateNotificationQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *frequencyLevels;
@property (nonatomic) bool hasPendingChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *negotiationData;
@property (nonatomic, readonly) unsigned long long participantID;
@property (nonatomic) unsigned int prominenceIndex;
@property (nonatomic, retain) VCXPCClientShared *sharedXPCConnection;
@property (nonatomic) unsigned long long spatialAudioSourceID;
@property (nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;
@property (getter=isVideoPaused, nonatomic) bool videoPaused;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) long long videoToken;
@property (nonatomic) unsigned int visibilityIndex;
@property (nonatomic) float volume;

- (float)audioPosition;
- (id)config;
- (bool)configurationInProgress;
- (void)dealloc;
- (id)delegate;
- (id)delegateNotificationQueue;
- (void)deregisterFromNotifications;
- (id)description;
- (id)frequencyLevels;
- (bool)hasPendingChanges;
- (id)initWithParticipantID:(unsigned long long)arg1 data:(id)arg2 delegate:(id)arg3 queue:(id)arg4;
- (bool)isAudioEnabled;
- (bool)isAudioMuted;
- (bool)isAudioPaused;
- (bool)isConnectedToSession;
- (bool)isVideoEnabled;
- (bool)isVideoPaused;
- (id)negotiationData;
- (id)newNSErrorWithErrorDictionary:(id)arg1;
- (unsigned long long)participantID;
- (unsigned int)prominenceIndex;
- (void)registerBlocksForNotifications;
- (void)setAudioEnabled:(bool)arg1;
- (void)setAudioMuted:(bool)arg1;
- (void)setAudioPaused:(bool)arg1;
- (void)setAudioPosition:(float)arg1;
- (void)setConfigurationInProgress:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasPendingChanges:(bool)arg1;
- (void)setProminenceIndex:(unsigned int)arg1;
- (void)setSharedXPCConnection:(id)arg1;
- (void)setSpatialAudioSourceID:(unsigned long long)arg1;
- (void)setStateAudioEnabled:(bool)arg1;
- (void)setStateAudioPaused:(bool)arg1;
- (void)setStateQueue:(id)arg1;
- (void)setStateVideoEnabled:(bool)arg1;
- (void)setStateVideoPaused:(bool)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (void)setVideoPaused:(bool)arg1;
- (void)setVideoQuality:(unsigned char)arg1;
- (void)setVideoToken:(long long)arg1;
- (void)setVisibilityIndex:(unsigned int)arg1;
- (void)setVolume:(float)arg1;
- (void)setupConfig;
- (void)setupNotificationQueue:(id)arg1;
- (id)sharedXPCConnection;
- (unsigned long long)spatialAudioSourceID;
- (id)stateQueue;
- (id)uuid;
- (unsigned char)videoQuality;
- (long long)videoToken;
- (unsigned int)visibilityIndex;
- (float)volume;

@end
