/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioTransmitterConfig : NSObject {
    struct tagHANDLE { int x1; } * _afrcHandle;
    bool  _allowAudioSwitching;
    bool  _alwaysOnAudioRedundancyEnabled;
    NSMutableArray * _audioPayloads;
    int  _bundlingScheme;
    bool  _cellularAllowRedLowBitratesEnabled;
    VCAudioPayload * _chosenAudioPayload;
    VCAudioPayload * _chosenDTXPayload;
    int  _chosenRedPayloadType;
    void * _controlInfoGenerator;
    bool  _currentDTXEnable;
    bool  _ignoreSilence;
    bool  _includeRedSequenceOffset;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _inputFormat;
    bool  _isUseCaseWatchContinuity;
    unsigned int  _maxIDSStreamIdCount;
    unsigned char  _mediaControlInfoVersion;
    struct tagHANDLE { int x1; } * _mediaQueue;
    bool  _needsPacketThread;
    int  _operatingMode;
    unsigned char  _packetsPerBundle;
    bool  _redEnabled;
    unsigned int  _redMaxDelay20ms;
    unsigned int  _redNumPayloads;
    struct opaqueRTCReporting { } * _reportingAgent;
    int  _reportingParentID;
    struct tagHANDLE { int x1; } * _rtpHandle;
    struct tagHANDLE { int x1; } * _rtpVideo;
    bool  _sendActiveVoiceOnly;
    AVCStatisticsCollector * _statisticsCollector;
    NSArray * _streamIDs;
    NSArray * _supportedNumRedundantPayload;
    bool  _supportsAdaptation;
    unsigned int  _tierNetworkBitrate;
    bool  _transmitROC;
    VCTransportSession * _transportSession;
    bool  _useRateControl;
    bool  _wifiAllowRedLowBitratesEnabled;
}

@property (nonatomic) struct tagHANDLE { int x1; }*afrcHandle;
@property (nonatomic) bool allowAudioSwitching;
@property (nonatomic) bool alwaysOnAudioRedundancyEnabled;
@property (nonatomic, retain) NSMutableArray *audioPayloads;
@property (nonatomic) int bundlingScheme;
@property (nonatomic) bool cellularAllowRedLowBitratesEnabled;
@property (nonatomic, retain) VCAudioPayload *chosenAudioPayload;
@property (nonatomic, retain) VCAudioPayload *chosenDTXPayload;
@property (nonatomic) int chosenRedPayloadType;
@property (nonatomic) void*controlInfoGenerator;
@property (getter=isCurrentDTXEnabled, nonatomic) bool currentDTXEnable;
@property (nonatomic) bool ignoreSilence;
@property (nonatomic) bool includeRedSequenceOffset;
@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } inputFormat;
@property (nonatomic) bool isUseCaseWatchContinuity;
@property (nonatomic) unsigned int maxIDSStreamIdCount;
@property (nonatomic) unsigned char mediaControlInfoVersion;
@property (nonatomic) struct tagHANDLE { int x1; }*mediaQueue;
@property (nonatomic) bool needsPacketThread;
@property (nonatomic) int operatingMode;
@property (nonatomic) unsigned char packetsPerBundle;
@property (getter=isRedEnabled, nonatomic) bool redEnabled;
@property (nonatomic) unsigned int redMaxDelay20ms;
@property (nonatomic) unsigned int redNumPayloads;
@property (nonatomic) struct opaqueRTCReporting { }*reportingAgent;
@property (nonatomic) int reportingParentID;
@property (nonatomic) struct tagHANDLE { int x1; }*rtpHandle;
@property (nonatomic) struct tagHANDLE { int x1; }*rtpVideo;
@property (nonatomic) bool sendActiveVoiceOnly;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic, retain) NSArray *streamIDs;
@property (nonatomic, retain) NSArray *supportedNumRedundantPayload;
@property (nonatomic) bool supportsAdaptation;
@property (nonatomic) unsigned int tierNetworkBitrate;
@property (nonatomic) bool transmitROC;
@property (nonatomic, retain) VCTransportSession *transportSession;
@property (nonatomic) bool useRateControl;
@property (nonatomic) bool wifiAllowRedLowBitratesEnabled;

- (struct tagHANDLE { int x1; }*)afrcHandle;
- (bool)allowAudioSwitching;
- (bool)alwaysOnAudioRedundancyEnabled;
- (id)audioPayloads;
- (int)bundlingScheme;
- (bool)cellularAllowRedLowBitratesEnabled;
- (id)chosenAudioPayload;
- (id)chosenDTXPayload;
- (int)chosenRedPayloadType;
- (void*)controlInfoGenerator;
- (void)dealloc;
- (id)description;
- (bool)ignoreSilence;
- (bool)includeRedSequenceOffset;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })inputFormat;
- (bool)isCurrentDTXEnabled;
- (bool)isRedEnabled;
- (bool)isUseCaseWatchContinuity;
- (unsigned int)maxIDSStreamIdCount;
- (unsigned char)mediaControlInfoVersion;
- (struct tagHANDLE { int x1; }*)mediaQueue;
- (bool)needsPacketThread;
- (int)operatingMode;
- (unsigned char)packetsPerBundle;
- (unsigned int)redMaxDelay20ms;
- (unsigned int)redNumPayloads;
- (struct opaqueRTCReporting { }*)reportingAgent;
- (int)reportingParentID;
- (struct tagHANDLE { int x1; }*)rtpHandle;
- (struct tagHANDLE { int x1; }*)rtpVideo;
- (bool)sendActiveVoiceOnly;
- (void)setAfrcHandle:(struct tagHANDLE { int x1; }*)arg1;
- (void)setAllowAudioSwitching:(bool)arg1;
- (void)setAlwaysOnAudioRedundancyEnabled:(bool)arg1;
- (void)setAudioPayloads:(id)arg1;
- (void)setBundlingScheme:(int)arg1;
- (void)setCellularAllowRedLowBitratesEnabled:(bool)arg1;
- (void)setChosenAudioPayload:(id)arg1;
- (void)setChosenDTXPayload:(id)arg1;
- (void)setChosenRedPayloadType:(int)arg1;
- (void)setControlInfoGenerator:(void*)arg1;
- (void)setCurrentDTXEnable:(bool)arg1;
- (void)setIgnoreSilence:(bool)arg1;
- (void)setIncludeRedSequenceOffset:(bool)arg1;
- (void)setInputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setIsUseCaseWatchContinuity:(bool)arg1;
- (void)setMaxIDSStreamIdCount:(unsigned int)arg1;
- (void)setMediaControlInfoVersion:(unsigned char)arg1;
- (void)setMediaQueue:(struct tagHANDLE { int x1; }*)arg1;
- (void)setNeedsPacketThread:(bool)arg1;
- (void)setOperatingMode:(int)arg1;
- (void)setPacketsPerBundle:(unsigned char)arg1;
- (void)setRedEnabled:(bool)arg1;
- (void)setRedMaxDelay20ms:(unsigned int)arg1;
- (void)setRedNumPayloads:(unsigned int)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (void)setReportingParentID:(int)arg1;
- (void)setRtpHandle:(struct tagHANDLE { int x1; }*)arg1;
- (void)setRtpVideo:(struct tagHANDLE { int x1; }*)arg1;
- (void)setSendActiveVoiceOnly:(bool)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (void)setStreamIDs:(id)arg1;
- (void)setSupportedNumRedundantPayload:(id)arg1;
- (void)setSupportsAdaptation:(bool)arg1;
- (void)setTierNetworkBitrate:(unsigned int)arg1;
- (void)setTransmitROC:(bool)arg1;
- (void)setTransportSession:(id)arg1;
- (void)setUseRateControl:(bool)arg1;
- (void)setWifiAllowRedLowBitratesEnabled:(bool)arg1;
- (id)statisticsCollector;
- (id)streamIDs;
- (id)supportedNumRedundantPayload;
- (bool)supportsAdaptation;
- (unsigned int)tierNetworkBitrate;
- (bool)transmitROC;
- (id)transportSession;
- (bool)useRateControl;
- (bool)wifiAllowRedLowBitratesEnabled;

@end
