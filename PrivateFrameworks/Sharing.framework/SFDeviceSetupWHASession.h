/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceSetupWHASession : NSObject {
    bool  _activateCalled;
    bool  _cdpEnabled;
    SFDeviceOperationCDPSetup * _cdpSetupOperation;
    double  _cdpSetupSecs;
    int  _cdpState;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    int  _finishState;
    bool  _homeKitDoFullSetup;
    SFDeviceOperationHomeKitSetup * _homeKitSetup;
    int  _homeKitState;
    int  _infoExchangeState;
    bool  _invalidateCalled;
    int  _pairSetupState;
    int  _pairVerifyState;
    SFDevice * _peerDevice;
    unsigned long long  _peerFeatureFlags;
    unsigned long long  _peerProblemsFlags;
    UIViewController * _presentingViewController;
    id /* block */  _progressHandler;
    id /* block */  _promptForHomeHandler;
    id /* block */  _promptForPINHandler;
    id /* block */  _promptForRoomHandler;
    bool  _sessionSecured;
    SFSession * _sfSession;
    int  _sfSessionState;
    bool  _trAuthenticationEnabled;
    int  _trAuthenticationState;
    TROperationQueue * _trOperationQueue;
    NSMutableArray * _trOperations;
    TRSession * _trSession;
    int  _trSessionState;
    bool  _trSetupConfigurationEnabled;
    int  _trSetupConfigurationState;
    NSSet * _trUnauthServices;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, copy) id /* block */ promptForHomeHandler;
@property (nonatomic, copy) id /* block */ promptForPINHandler;
@property (nonatomic, copy) id /* block */ promptForRoomHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_reportError:(id)arg1;
- (void)_run;
- (int)_runCDPSetup;
- (int)_runFinish;
- (int)_runHomeKitSetup;
- (int)_runInfoExchange;
- (void)_runInfoExchangeRequest;
- (void)_runInfoExchangeResponse:(id)arg1 error:(id)arg2;
- (int)_runPairSetup;
- (int)_runPairVerify;
- (int)_runSFSessionStart;
- (int)_runTRAuthentication;
- (int)_runTRSessionStart;
- (int)_runTRSetupConfiguration;
- (bool)_verifyiCloudMatch:(unsigned long long)arg1 error:(id*)arg2;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (void)homeKitSelectHome:(id)arg1;
- (void)homeKitSelectRoom:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)pairSetupTryPIN:(id)arg1;
- (id)peerDevice;
- (id)presentingViewController;
- (id /* block */)progressHandler;
- (id /* block */)promptForHomeHandler;
- (id /* block */)promptForPINHandler;
- (id /* block */)promptForRoomHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setPromptForHomeHandler:(id /* block */)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;
- (void)setPromptForRoomHandler:(id /* block */)arg1;

@end
