/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIAppScriptDownloadManager : NSObject {
    NSMutableDictionary * _appScriptDict;
    NSMutableDictionary * _completionBlocksDict;
    NSURL * _currentURL;
    NSURLSession * _session;
    NSURLSessionDataTask * _task;
}

@property (nonatomic, retain) NSMutableDictionary *appScriptDict;
@property (nonatomic, retain) NSURL *currentURL;
@property (nonatomic, retain) NSURLSessionDataTask *task;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)appScriptDict;
- (id)currentURL;
- (void)fetchAppJavascript:(id)arg1 cachePolicy:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setAppScriptDict:(id)arg1;
- (void)setCurrentURL:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
