/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface AppSSOUnitTester : NSObject <NSURLSessionDataDelegate, NSURLSessionTaskDelegate> {
    NSError * _completionError;
    NSURLSessionConfiguration * _config;
    bool  _doNotProvideCreds;
    bool  _receivedChallenge;
    NSHTTPURLResponse * _redirectResponse;
    NSURLResponse * _response;
    NSMutableData * _responseData;
    NSObject<OS_dispatch_semaphore> * _sema;
    NSURLSession * _session;
    bool  _takeRedirect;
}

@property (copy) NSError *completionError;
@property (nonatomic, copy) NSURLSessionConfiguration *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool doNotProvideCreds;
@property (readonly) unsigned long long hash;
@property bool receivedChallenge;
@property (copy) NSHTTPURLResponse *redirectResponse;
@property (copy) NSURLResponse *response;
@property (retain) NSMutableData *responseData;
@property (copy) NSObject<OS_dispatch_semaphore> *sema;
@property (copy) NSURLSession *session;
@property (readonly) Class superclass;
@property bool takeRedirect;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)completionError;
- (id)config;
- (bool)doNotProvideCreds;
- (bool)receivedChallenge;
- (id)redirectResponse;
- (id)response;
- (id)responseData;
- (id)sema;
- (id)session;
- (void)setCompletionError:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setDoNotProvideCreds:(bool)arg1;
- (void)setReceivedChallenge:(bool)arg1;
- (void)setRedirectResponse:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseData:(id)arg1;
- (void)setSema:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTakeRedirect:(bool)arg1;
- (void)setconfig:(id)arg1;
- (void)startTaskWithSemaphore:(id)arg1 request:(id)arg2;
- (bool)takeRedirect;

@end
