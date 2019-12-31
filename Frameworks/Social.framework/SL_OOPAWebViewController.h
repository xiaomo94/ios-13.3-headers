/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SL_OOPAWebViewController : UIViewController <UIWebViewDelegate, UIWebViewPrivateDelegate, WKNavigationDelegate> {
    NSObject<SL_OOPAuthFlowDelegate> * _authFlowDelegate;
    NSURL * _authURL;
    <SL_OOPAWebViewControllerDelegate> * _delegate;
    bool  _didFinish;
    bool  _didLoadWebView;
    bool  _hidingWebView;
    SL_OOPASpinnerTitle * _spinnerTitleView;
    struct __CFURLStorageSession { } * _storageSession;
    UIWebView * _uiWebView;
    NSString * _username;
    WKWebView * _wkWebView;
}

@property (nonatomic, retain) NSObject<SL_OOPAuthFlowDelegate> *authFlowDelegate;
@property (nonatomic, copy) NSURL *authURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SL_OOPAWebViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *navBarTitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_didFinishWithSuccess:(bool)arg1 response:(id)arg2 error:(id)arg3;
- (void)_evaluateDocumentTitleForUIWebView:(id)arg1 retryCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_evaluateDocumentTitleForWebView:(id)arg1 retryCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_loadWebView;
- (void)_loadWebViewIfReady;
- (void)_updateNavigationPromptWithActiveURL:(id)arg1;
- (id)authFlowDelegate;
- (id)authURL;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)navBarTitle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAuthFlowDelegate:(id)arg1;
- (void)setAuthURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavBarTitle:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

@end
