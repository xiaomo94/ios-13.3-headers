/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIAuthenticateTask : AMSAuthenticateTask {
    <AMSBagProtocol> * _bag;
    UIViewController * _presentingViewController;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (void)_handleDialogForFailedAuthenticationWithError:(id)arg1;
- (id)_updateAccountWithAuthKit:(id)arg1 error:(id*)arg2;
- (id)bag;
- (id)initWithAccount:(id)arg1 presentingViewController:(struct UIViewController { Class x1; }*)arg2 options:(id)arg3;
- (id)initWithRequest:(id)arg1 presentingViewController:(struct UIViewController { Class x1; }*)arg2;
- (id)performAuthentication;
- (id)presentingViewController;
- (void)setBag:(id)arg1;

@end
