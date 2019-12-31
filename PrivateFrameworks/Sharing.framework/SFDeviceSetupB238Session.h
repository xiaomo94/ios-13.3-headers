/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceSetupB238Session : NSObject <AVAudioPlayerDelegate> {
    bool  _activateCalled;
    NSDictionary * _additionalMetrics;
    bool  _apcEnabled;
    bool  _apcInitDone;
    APCListener * _apcListener;
    bool  _apcListening;
    bool  _apcMetricsLogged;
    NSString * _apcPasscode;
    bool  _apcPlayAgain;
    bool  _apcPlaying;
    bool  _apcSecured;
    bool  _apcSkip;
    bool  _apcStartDone;
    unsigned long long  _apcStartTicks;
    bool  _apcStartedPairSetup;
    int  _apcState;
    unsigned int  _apcTimeoutCount;
    NSObject<OS_dispatch_source> * _apcTimer;
    bool  _apcTryingPasscode;
    bool  _appleMusicEnabled;
    bool  _appleMusicForce;
    int  _appleMusicState;
    NSObject<OS_dispatch_source> * _appleMusicTimeoutTimer;
    id /* block */  _audioPlayerCompletion;
    AVAudioPlayer * _audioPlayerStart;
    AVAudioPlayer * _audioPlayerStep;
    bool  _audioProgress;
    AVAudioSession * _audioSession;
    int  _authKitTrustState;
    double  _basicConfigSecs;
    unsigned long long  _basicConfigStartTicks;
    int  _basicConfigState;
    int  _bonjourTestState;
    bool  _cdpEnabled;
    SFDeviceOperationCDPSetup * _cdpSetupOperation;
    double  _cdpSetupSecs;
    int  _cdpState;
    RPCompanionLinkClient * _companionLinkClient;
    NSString * _deviceGUID;
    NSString * _deviceSerialNumber;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _finishSecs;
    unsigned long long  _finishStartTicks;
    int  _finishState;
    bool  _hasExistingHomePod;
    bool  _hasMultipleUsers;
    NSString * _homeKitSelectedRoomName;
    SFDeviceOperationHomeKitSetup * _homeKitSetupOperation;
    double  _homeKitSetupSecs;
    int  _homeKitSetupState;
    int  _homeKitUserInputState;
    bool  _homeiCloudEnabled;
    ACAccount * _iCloudAccount;
    int  _iCloudAccountState;
    ACAccountStore * _iCloudAccountStore;
    NSString * _iCloudUserID;
    SSAccount * _iTunesAccount;
    bool  _iTunesSignInSkip;
    NSString * _iTunesUserID;
    double  _iTunesWaitSecs;
    bool  _invalidateCalled;
    bool  _liveOn;
    bool  _locationDecided;
    bool  _locationEnabled;
    bool  _lpcAligned;
    int  _lpcAlignmentState;
    bool  _lpcPlayAgain;
    bool  _lpcSkip;
    double  _mediaSystemWaitSecs;
    int  _multiUserEnableState;
    int  _multiUserEnableStepState;
    unsigned int  _pairSetupFlags;
    double  _pairSetupSecs;
    int  _pairSetupState;
    bool  _pauseAfterPreAuth;
    SFDevice * _peerDevice;
    unsigned long long  _peerFeatureFlags;
    int  _personalRequestsChoice;
    int  _personalRequestsState;
    NSArray * _potentialStereoCounterparts;
    id /* block */  _preAuthHandler;
    NSDictionary * _preAuthResponse;
    bool  _preAuthStartedProgress;
    int  _preAuthState;
    bool  _prefBonjourTest;
    bool  _prefForceSiriGreeting;
    bool  _prefLEDPasscodeEnabled;
    bool  _prefMultiUser;
    bool  _prefStereoPairEnabled;
    bool  _prefStereoWait;
    int  _preflightAppleMusicState;
    bool  _preflightEnabled;
    int  _preflightMiscState;
    int  _preflightWiFiState;
    int  _preflightiCloudState;
    int  _preflightiTunesState;
    UIViewController * _presentingViewController;
    bool  _preventAppleWiFi;
    id /* block */  _progressHandler;
    id /* block */  _promptForAppleMusicHandler;
    id /* block */  _promptForHomeHandler;
    id /* block */  _promptForHomeiCloudHandler;
    id /* block */  _promptForLocationEnableHandler;
    id /* block */  _promptForPINHandler;
    id /* block */  _promptForPersonalRequestsHandler;
    id /* block */  _promptForRoomHandler;
    id /* block */  _promptForSiriEnableHandler;
    id /* block */  _promptForSiriLanguageHandler;
    id /* block */  _promptForStereoMultipleHandler;
    id /* block */  _promptForStereoRoleHandler;
    id /* block */  _promptForTermsHandler;
    id /* block */  _promptForiTunesSignInHandler;
    id /* block */  _promptToInstallHomeAppHandler;
    id /* block */  _promptToShareSettingsHandler;
    int  _proxSetupActiveToken;
    int  _recognizeVoiceEnabled;
    int  _recognizeVoiceState;
    int  _recognizeVoiceStepState;
    SFSession * _sfSession;
    bool  _sfSessionSecured;
    int  _sfSessionState;
    bool  _shareSettingsAgreed;
    int  _shareSettingsState;
    int  _siriDataSharing;
    bool  _siriEnabled;
    unsigned int  _siriFlags;
    bool  _siriForEveryoneAnswered;
    int  _siriForEveryoneState;
    NSArray * _siriLanguageCodes;
    long long  _siriLanguageIndex;
    bool  _siriLanguagePicked;
    int  _siriLanguageState;
    bool  _siriPasscodeEnabled;
    bool  _siriPasscodeInitDone;
    bool  _siriPasscodeSecured;
    int  _siriPasscodeState;
    NSString * _siriPreferredLanguage;
    unsigned long long  _startTicks;
    HMAccessory * _stereoCounterpartAccessory;
    unsigned char  _stereoCounterpartColor;
    int  _stereoPairRole;
    int  _stereoPairUserInputState;
    bool  _termsAgreed;
    int  _termsState;
    unsigned long long  _testFlags;
    double  _totalSecs;
    bool  _touchRemoteEnabled;
    double  _trActivationSecs;
    unsigned long long  _trActivationStartTicks;
    int  _trActivationState;
    double  _trAuthenticationSecs;
    unsigned long long  _trAuthenticationStartTicks;
    int  _trAuthenticationState;
    bool  _trNeedsNetwork;
    TROperationQueue * _trOperationQueue;
    NSMutableArray * _trOperations;
    TRSession * _trSession;
    int  _trSessionState;
    double  _trSetupConfigurationSecs;
    unsigned long long  _trSetupConfigurationStartTicks;
    int  _trSetupConfigurationState;
    NSSet * _trUnauthServices;
    double  _wifiBonjourTestSecs;
    SFDeviceOperationWiFiSetup * _wifiSetupOperation;
    double  _wifiSetupSecs;
    int  _wifiSetupState;
    double  _wifiSetupStepSecs;
}

@property (nonatomic, copy) NSDictionary *additionalMetrics;
@property (nonatomic, readonly) int bonjourTestState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) bool hasMultipleUsers;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool liveOn;
@property (nonatomic) bool pauseAfterPreAuth;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic) unsigned long long peerFeatureFlags;
@property (nonatomic, copy) id /* block */ preAuthHandler;
@property (nonatomic, retain) NSDictionary *preAuthResponse;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, copy) id /* block */ promptForAppleMusicHandler;
@property (nonatomic, copy) id /* block */ promptForHomeHandler;
@property (nonatomic, copy) id /* block */ promptForHomeiCloudHandler;
@property (nonatomic, copy) id /* block */ promptForLocationEnableHandler;
@property (nonatomic, copy) id /* block */ promptForPINHandler;
@property (nonatomic, copy) id /* block */ promptForPersonalRequestsHandler;
@property (nonatomic, copy) id /* block */ promptForRoomHandler;
@property (nonatomic, copy) id /* block */ promptForSiriEnableHandler;
@property (nonatomic, copy) id /* block */ promptForSiriLanguageHandler;
@property (nonatomic, copy) id /* block */ promptForStereoMultipleHandler;
@property (nonatomic, copy) id /* block */ promptForStereoRoleHandler;
@property (nonatomic, copy) id /* block */ promptForTermsHandler;
@property (nonatomic, copy) id /* block */ promptForiTunesSignInHandler;
@property (nonatomic, copy) id /* block */ promptToInstallHomeAppHandler;
@property (nonatomic, copy) id /* block */ promptToShareSettingsHandler;
@property (nonatomic, readonly) HMHome *selectedHome;
@property (nonatomic, readonly) NSString *selectedSiriLanguage;
@property (nonatomic, readonly) bool siriDataSharingEnabled;
@property (nonatomic, readonly) unsigned char stereoCounterpartColor;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long testFlags;
@property (nonatomic) bool touchRemoteEnabled;

- (void).cxx_destruct;
- (void)_activate;
- (void)_cleanup;
- (void)_cleanupSession;
- (void)_handlePeerEvent:(id)arg1 flags:(unsigned int)arg2;
- (id)_homeKitFindSettingsWithKeyPath:(id)arg1 group:(id)arg2;
- (void)_homeKitUpdateiCloudSwitchState:(bool)arg1;
- (void)_invalidate;
- (void)_logMetrics;
- (void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2;
- (void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2 completion:(id /* block */)arg3;
- (void)_preflightAppleMusic;
- (void)_preflightAppleMusicCompleted:(int)arg1;
- (void)_promptForPINWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (bool)_recognizeVoiceAlreadyEnabled;
- (void)_reportError:(id)arg1 label:(id)arg2;
- (void)_run;
- (int)_runAppleMusic;
- (int)_runAudioPasscode;
- (void)_runAudioPasscodeCleanup:(bool)arg1;
- (void)_runAudioPasscodeHandleData:(id)arg1;
- (void)_runAudioPasscodeInitRequest;
- (void)_runAudioPasscodeInitResponse:(id)arg1 error:(id)arg2;
- (void)_runAudioPasscodeLogMetrics;
- (void)_runAudioPasscodeStartRequest;
- (void)_runAudioPasscodeStartResponse:(id)arg1 error:(id)arg2;
- (void)_runAudioPasscodeStopRequest;
- (void)_runAudioPasscodeTimeout;
- (int)_runAuthKitTrustFinish;
- (void)_runAuthKitTrustStartIfNeeded;
- (int)_runBasicConfig;
- (void)_runBasicConfigReceiveResponse:(id)arg1 error:(id)arg2;
- (void)_runBasicConfigSendRequest;
- (int)_runCDPSetup:(bool)arg1;
- (int)_runCheckAccount;
- (void)_runFinishRequest;
- (void)_runFinishResponse:(id)arg1 error:(id)arg2;
- (int)_runFinishStart;
- (int)_runHomeKitSetup;
- (int)_runHomeKitUserInput;
- (int)_runLEDPassCodeAlignment;
- (int)_runMultiUserEnable;
- (void)_runMultiUserEnableEnableSettingStart:(id)arg1 privateSettings:(bool)arg2;
- (void)_runMultiUserEnableHome;
- (int)_runPairSetup;
- (int)_runPersonalRequests;
- (int)_runPreAuth;
- (void)_runPreAuthRequest;
- (void)_runPreAuthResponse:(id)arg1 error:(id)arg2;
- (int)_runPreflightMisc;
- (int)_runPreflightWiFi;
- (int)_runPreflightiCloud;
- (int)_runPreflightiTunes;
- (int)_runRecognizeVoice;
- (void)_runRecognizeVoiceCheckLanguageResponse:(id)arg1 error:(id)arg2;
- (void)_runRecognizeVoiceCheckLanguageStart;
- (void)_runRecognizeVoiceCheckVoiceProfileResponse:(bool)arg1 error:(id)arg2;
- (void)_runRecognizeVoiceCheckVoiceProfileStart;
- (int)_runSFSessionStart;
- (int)_runShareSettings;
- (int)_runSiriForEveryone;
- (int)_runSiriLanguage;
- (int)_runSiriPasscode;
- (void)_runSiriPasscodeInitRequest;
- (void)_runSiriPasscodeInitResponse:(id)arg1 error:(id)arg2;
- (void)_runSiriPasscodeStartPairSetup;
- (int)_runStereoPairUserInput;
- (void)_runStereoPairUserInputPickColors:(bool)arg1;
- (int)_runTRActivation;
- (int)_runTRAuthentication;
- (int)_runTRSessionStart;
- (int)_runTRSetupConfiguration;
- (int)_runTerms;
- (int)_runWiFiSetup;
- (void)_setupAudio;
- (void)_speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(id /* block */)arg3;
- (void)activate;
- (id)additionalMetrics;
- (void)appleMusicNext;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (void)audioSessionInterrupted:(id)arg1;
- (int)bonjourTestState;
- (void)dealloc;
- (void)disconnect;
- (id)dispatchQueue;
- (bool)hasMultipleUsers;
- (void)homeAppInstallChoice:(bool)arg1;
- (void)homeKitReselectHome;
- (void)homeKitSelectHome:(id)arg1;
- (void)homeKitSelectRoom:(id)arg1;
- (void)homeiCloudEnable;
- (id)init;
- (void)invalidate;
- (void)ledPasscodeMatched;
- (bool)liveOn;
- (void)locationEnable:(bool)arg1;
- (void)pairSetupTryPIN:(id)arg1;
- (bool)pauseAfterPreAuth;
- (id)peerDevice;
- (unsigned long long)peerFeatureFlags;
- (void)personalRequestsEnabled:(bool)arg1;
- (void)playAudioPasscodeAgain;
- (id /* block */)preAuthHandler;
- (id)preAuthResponse;
- (void)preflight;
- (id)presentingViewController;
- (id /* block */)progressHandler;
- (id /* block */)promptForAppleMusicHandler;
- (id /* block */)promptForHomeHandler;
- (id /* block */)promptForHomeiCloudHandler;
- (id /* block */)promptForLocationEnableHandler;
- (id /* block */)promptForPINHandler;
- (id /* block */)promptForPersonalRequestsHandler;
- (id /* block */)promptForRoomHandler;
- (id /* block */)promptForSiriEnableHandler;
- (id /* block */)promptForSiriLanguageHandler;
- (id /* block */)promptForStereoMultipleHandler;
- (id /* block */)promptForStereoRoleHandler;
- (id /* block */)promptForTermsHandler;
- (id /* block */)promptForiTunesSignInHandler;
- (id /* block */)promptToInstallHomeAppHandler;
- (id /* block */)promptToShareSettingsHandler;
- (void)recognizeVoiceAnswered:(bool)arg1;
- (id)selectedHome;
- (id)selectedSiriLanguage;
- (void)setAdditionalMetrics:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setLiveOn:(bool)arg1;
- (void)setPauseAfterPreAuth:(bool)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPeerFeatureFlags:(unsigned long long)arg1;
- (void)setPreAuthHandler:(id /* block */)arg1;
- (void)setPreAuthResponse:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setPromptForAppleMusicHandler:(id /* block */)arg1;
- (void)setPromptForHomeHandler:(id /* block */)arg1;
- (void)setPromptForHomeiCloudHandler:(id /* block */)arg1;
- (void)setPromptForLocationEnableHandler:(id /* block */)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;
- (void)setPromptForPersonalRequestsHandler:(id /* block */)arg1;
- (void)setPromptForRoomHandler:(id /* block */)arg1;
- (void)setPromptForSiriEnableHandler:(id /* block */)arg1;
- (void)setPromptForSiriLanguageHandler:(id /* block */)arg1;
- (void)setPromptForStereoMultipleHandler:(id /* block */)arg1;
- (void)setPromptForStereoRoleHandler:(id /* block */)arg1;
- (void)setPromptForTermsHandler:(id /* block */)arg1;
- (void)setPromptForiTunesSignInHandler:(id /* block */)arg1;
- (void)setPromptToInstallHomeAppHandler:(id /* block */)arg1;
- (void)setPromptToShareSettingsHandler:(id /* block */)arg1;
- (void)setTestFlags:(unsigned long long)arg1;
- (void)setTouchRemoteEnabled:(bool)arg1;
- (void)shareSettingsAgreed;
- (bool)siriDataSharingEnabled;
- (void)siriEnable;
- (void)siriForEveryoneAnswered;
- (void)siriLanguagePicked:(long long)arg1;
- (void)skipAudioPasscode;
- (void)skipiTunesSignIn;
- (void)speakPasscodeWithCompletion:(id /* block */)arg1;
- (void)speakPasscodeWithInstructions:(id)arg1 completion:(id /* block */)arg2;
- (void)speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(id /* block */)arg3;
- (void)speakPasscodeWithLanguageCode:(id)arg1 completion:(id /* block */)arg2;
- (unsigned char)stereoCounterpartColor;
- (void)stereoMultiplePicked:(id)arg1;
- (void)stereoRolePicked:(int)arg1;
- (void)termsAgreed;
- (unsigned long long)testFlags;
- (bool)touchRemoteEnabled;

@end
