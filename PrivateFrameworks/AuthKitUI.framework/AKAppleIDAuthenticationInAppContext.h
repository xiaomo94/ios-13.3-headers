/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKAppleIDAuthenticationInAppContext : AKAppleIDAuthenticationContext <AKAppleIDAuthenticationUIProvider, AKBasicLoginAlertControllerDelegate, RemoteUIControllerDelegate> {
    <AKAppleIDAuthenticationInAppContextPasswordDelegate> * __passwordDelegate;
    <AKAppleIDAuthenticationInAppContextAlertDelegate> * _alertDelegate;
    AKBasicLoginAlertController * _basicLoginViewController;
    <CDPStateUIProvider> * _cdpUiProvider;
    RUIObjectModel * _currentRemoteOM;
    NSHTTPURLResponse * _deferredResponse;
    <AKAppleIDAuthenticationInAppContextDelegate> * _delegate;
    bool  _forceInlinePresentation;
    UINavigationController * _modalRemoteUINavController;
    AKNativeAccountRecoveryController * _nativeRecoveryController;
    UINavigationController * _navController;
    bool  _overrideFirstActionSignal;
    bool  _presentingServerUI;
    UIViewController * _presentingViewController;
    RemoteUIController * _remoteUIController;
    AKAppleIDServerUIContextController * _serverUIContextController;
    AAUICDPStingrayRemoteUIController * _stingrayController;
    UIViewController * _topViewControllerOnLoadStart;
}

@property (setter=_setPasswordDelegate:, nonatomic) <AKAppleIDAuthenticationInAppContextPasswordDelegate> *_passwordDelegate;
@property (nonatomic) <AKAppleIDAuthenticationInAppContextAlertDelegate> *alertDelegate;
@property (setter=_setCdpUiProvider:, nonatomic, retain) <CDPStateUIProvider> *cdpUiProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKAppleIDAuthenticationInAppContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceInlinePresentation;
@property (readonly) unsigned long long hash;
@property (getter=isPresentingServerUI, nonatomic) bool presentingServerUI;
@property (nonatomic) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assertValidPresentingViewController;
- (void)_cleanUpBasicLoginWithCompletion:(id /* block */)arg1;
- (void)_contextDidDismissLoginAlertController;
- (void)_contextDidEndPresentingSecondaryUI;
- (void)_contextDidPresentLoginController;
- (void)_contextWillBeginPresentingSecondaryUI;
- (void)_contextWillDismissLoginAlertController;
- (void)_dismissServerProvidedUIWithCompletion:(id /* block */)arg1;
- (void)_handleBackButtonTap:(id)arg1;
- (bool)_isDeferrableFinalResponseHarvested;
- (bool)_isSatisfyingPasswordRequirements;
- (id)_navController;
- (id)_passwordDelegate;
- (void)_presentBasicLoginUIAlertWithCompletion:(id /* block */)arg1;
- (void)_presentIDPProvidedUIWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 waitForInteraction:(bool)arg4 completion:(id /* block */)arg5;
- (void)_presentServerProvidedUIWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)_remoteUIController;
- (void)_setCdpUiProvider:(id)arg1;
- (void)_setPasswordDelegate:(id)arg1;
- (id)alertDelegate;
- (void)basicLoginAlertControllerDidDismiss:(id)arg1;
- (void)basicLoginAlertControllerDidPresent:(id)arg1;
- (void)basicLoginAlertControllerWillDismiss:(id)arg1;
- (id)cdpUiProvider;
- (void)completeWithError:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)dismissKeepUsingUIWithCompletion:(id /* block */)arg1;
- (void)dismissNativeRecoveryUIWithCompletion:(id /* block */)arg1;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)arg1;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)arg1;
- (bool)forceInlinePresentation;
- (bool)isPresentingServerUI;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(id /* block */)arg2;
- (void)presentKeepUsingUIForAppleID:(id)arg1 completion:(id /* block */)arg2;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentNativeRecoveryUIWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)arg1;
- (void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)presentingViewController;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (id)remoteUIStyle;
- (id)serverDataHarvester;
- (void)setAlertDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceInlinePresentation:(bool)arg1;
- (void)setPresentingServerUI:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)willPresentModalNavigationController:(id)arg1;

@end
