/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraRecordingSettingsControl : HMFObject <HMFLogging> {
    HMDHAPAccessory * _accessory;
    bool  _canConfigureCameraForRecording;
    NSMutableDictionary * _characteristicByType;
    NSString * _clientIdentifier;
    bool  _configureCameraInProgress;
    NSDate * _configureStartDate;
    HMDCameraRecordingSelectedConfiguration * _currentSelectedConfiguration;
    <HMDCameraRecordingSettingsControlDelegate> * _delegate;
    bool  _didTriggerABCForConfigure;
    NSDictionary * _recordingConfigurationOverrides;
    HMDService * _recordingService;
    HMDCameraRecordingSupportedAudioConfiguration * _supportedAudioConfiguration;
    HMDCameraRecordingGeneralConfiguration * _supportedRecordingConfiguration;
    HMDCameraRecordingSupportedVideoConfiguration * _supportedVideoConfiguration;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDHAPAccessory *accessory;
@property (getter=isCameraConfiguredForRecording, readonly) bool cameraConfiguredForRecording;
@property bool canConfigureCameraForRecording;
@property (readonly) NSMutableDictionary *characteristicByType;
@property (readonly, copy) NSString *clientIdentifier;
@property bool configureCameraInProgress;
@property (retain) NSDate *configureStartDate;
@property (readonly, copy) NSNumber *configuredBitRate;
@property (readonly) double configuredFragmentDuration;
@property (readonly, copy) NSNumber *configuredIFrameInterval;
@property (readonly, copy) NSNumber *configuredImageHeight;
@property (readonly, copy) NSNumber *configuredImageWidth;
@property (readonly) double configuredPrebufferDuration;
@property (retain) HMDCameraRecordingSelectedConfiguration *currentSelectedConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraRecordingSettingsControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property bool didTriggerABCForConfigure;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *recordingConfigurationOverrides;
@property (readonly) HMDService *recordingService;
@property (readonly) Class superclass;
@property (retain) HMDCameraRecordingSupportedAudioConfiguration *supportedAudioConfiguration;
@property (retain) HMDCameraRecordingGeneralConfiguration *supportedRecordingConfiguration;
@property (retain) HMDCameraRecordingSupportedVideoConfiguration *supportedVideoConfiguration;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)audioBitRateForCodecConfiguration:(id)arg1;
+ (id)audioCodecForCodecConfiguration:(id)arg1;
+ (id)audioConfigurationsByPreferenceOrder;
+ (id)h264ProfileForCodecConfiguration:(id)arg1;
+ (bool)isSupportedAudioCodec:(id)arg1;
+ (bool)isSupportedH264Profile:(id)arg1;
+ (bool)isSupportedVideoCodec:(id)arg1;
+ (id)logCategory;
+ (id)videoCodecForCodecConfiguration:(id)arg1;
+ (id)videoConfigurationsByPreferenceOrder;

- (void).cxx_destruct;
- (void)_configureCameraRecordingSettings;
- (void)_handleSelectedCameraRecordingConfigurationReadResponse:(id)arg1;
- (void)_handleSupportedConfigurationCharacteristicsReadResponse:(id)arg1;
- (id)_parseResponse:(id)arg1 forCharacteristicType:(id)arg2;
- (id)_parseSelectedRecordingConfiguration:(id)arg1;
- (id)_parseSupportedAudioConfiguration:(id)arg1;
- (id)_parseSupportedRecordingConfiguration:(id)arg1;
- (id)_parseSupportedVideoConfiguration:(id)arg1;
- (id)_preferredAudioConfigurationOverride;
- (id)_preferredVideoConfigurationOverride;
- (void)_readCameraRecordingSettings;
- (void)_readSelectedCameraRecordingConfiguration;
- (void)_readSupportedCameraRecordingConfiguration;
- (id)_recordingAudioConfiguration;
- (id)_recordingGeneralConfiguration;
- (id)_recordingVideoConfiguration;
- (void)_selectedConfigurationDidUpdateTo:(id)arg1;
- (void)_setSelectedRecordingConfiguration:(id)arg1;
- (id)accessory;
- (bool)canConfigureCameraForRecording;
- (id)characteristicByType;
- (id)clientIdentifier;
- (bool)configureCameraInProgress;
- (void)configureCameraRecordingSettings;
- (id)configureStartDate;
- (id)configuredBitRate;
- (double)configuredFragmentDuration;
- (id)configuredIFrameInterval;
- (id)configuredImageHeight;
- (id)configuredImageWidth;
- (double)configuredPrebufferDuration;
- (id)currentSelectedConfiguration;
- (void)dealloc;
- (id)delegate;
- (bool)didTriggerABCForConfigure;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)handleAccessoryIsNotConfiguredError;
- (void)handleAccessoryUnreachable:(id)arg1;
- (void)handleCameraProfileSettingsDidWriteToAccessory:(id)arg1;
- (void)handleCharacteristicValueUpdated:(id)arg1;
- (void)handleCharacteristicsUpdated:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 recordingManagementService:(id)arg3;
- (bool)isCameraConfiguredForRecording;
- (id)logIdentifier;
- (id)recordingConfigurationOverrides;
- (id)recordingService;
- (void)setCanConfigureCameraForRecording:(bool)arg1;
- (void)setConfigureCameraInProgress:(bool)arg1;
- (void)setConfigureStartDate:(id)arg1;
- (void)setCurrentSelectedConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidTriggerABCForConfigure:(bool)arg1;
- (void)setRecordingConfigurationOverrides:(id)arg1;
- (void)setSupportedAudioConfiguration:(id)arg1;
- (void)setSupportedRecordingConfiguration:(id)arg1;
- (void)setSupportedVideoConfiguration:(id)arg1;
- (void)start;
- (id)supportedAudioConfiguration;
- (id)supportedRecordingConfiguration;
- (id)supportedVideoConfiguration;
- (void)triggerABCForConfigure;
- (void)updateCanConfigureCameraForRecording;
- (id)workQueue;

@end