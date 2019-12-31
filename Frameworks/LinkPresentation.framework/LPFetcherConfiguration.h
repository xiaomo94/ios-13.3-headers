/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPFetcherConfiguration : NSObject <NSCopying> {
    long long  _maximumResponseCount;
    WKWebView * _webViewForProcessSharing;
}

@property (nonatomic) long long maximumResponseCount;
@property (nonatomic, retain) WKWebView *webViewForProcessSharing;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)maximumResponseCount;
- (void)setMaximumResponseCount:(long long)arg1;
- (void)setWebViewForProcessSharing:(id)arg1;
- (id)webViewForProcessSharing;

@end
