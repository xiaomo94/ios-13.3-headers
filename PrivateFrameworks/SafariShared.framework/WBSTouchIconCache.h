/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTouchIconCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider, WBSWebViewMetadataFetchOperationDelegate> {
    bool  _allowFetchingOverCellularNetwork;
    NSURL * _cacheDirectoryURL;
    WBSTouchIconCacheSettingsSQLiteStore * _cacheSettingsStore;
    struct atomic<bool> { 
        _Atomic bool __a_; 
    }  _didLoadSettings;
    long long  _fileMappingStyle;
    NSMutableDictionary * _hostsToRequestSets;
    NSMutableSet * _hostsWithCacheSettingEntries;
    NSObject<OS_dispatch_queue> * _hostsWithCacheSettingEntriesQueue;
    WBSSiteMetadataImageCache * _imageCache;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableArray * _pendingSaveTouchIconToDiskBlocks;
    NSMutableSet * _pendingTouchIconRequestHosts;
    long long  _protectionType;
    <WBSSiteMetadataProviderDelegate> * _providerDelegate;
    bool  _readOnly;
    NSMutableDictionary * _requestsToDelayedResponses;
    NSCache * _requestsToResponses;
    NSMutableDictionary * _touchIconsDataForHosts;
}

@property (nonatomic, readonly) NSURL *cacheDirectoryURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *imageDirectoryURL;
@property (nonatomic) <WBSSiteMetadataProviderDelegate> *providerDelegate;
@property (nonatomic, readonly) bool providesFavicons;
@property (getter=isReadOnly, nonatomic, readonly) bool readOnly;
@property (readonly) Class superclass;

+ (id)_generateDefaultFavoritesIcon;
+ (id)_generateFavoritesIconForRequest:(id)arg1 withBackgroundColor:(id)arg2;
+ (id)_monogramConfiguration;
+ (id)defaultBackgroundColor;
+ (id)defaultGlyphColor;
+ (id)generateFavoritesIconForTitle:(id)arg1 url:(id)arg2 backgroundColor:(id)arg3;

- (void).cxx_destruct;
- (id /* block */)_blockOperationForRequest:(id)arg1 knownImageState:(long long)arg2;
- (bool)_canFetchTouchIconForURL:(id)arg1 inUserLoadedWebpage:(bool)arg2;
- (id)_didGenerateResponse:(id)arg1 forRequest:(id)arg2;
- (void)_didLoadTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2;
- (void)_ensureCacheDirectory;
- (void)_enumerateRequestsForHost:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_imageCacheSettingsDatabaseURL;
- (double)_maximumScreenScale;
- (void)_notifyImageWasLoaded:(id)arg1 forHost:(id)arg2;
- (void)_openCacheSettingsDatabaseIfNeeded;
- (id)_operationWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeTouchIconsDataForHost:(id)arg1;
- (id)_resizedImage:(id)arg1 forHost:(id)arg2;
- (id)_responseForRequest:(id)arg1 withTouchIcon:(id)arg2;
- (id)_responseForTouchIconRequestWithNoHost:(id)arg1;
- (void)_saveTouchIconToDisk:(id)arg1 forHost:(id)arg2 requestDidSucceed:(bool)arg3 isUserLoadedWebpageRequest:(bool)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg5;
- (void)_saveTouchIconToDiskWithResult:(id)arg1 forRequest:(id)arg2 knownImageState:(long long)arg3;
- (void)_setUpAndReturnDelayedResponseForRequest:(id)arg1;
- (void)_setUpAndReturnPreparedResponseForRequest:(id)arg1 withImage:(id)arg2 imageState:(long long)arg3 didReceiveNewData:(bool)arg4;
- (void)_setUpImageCacheSettingsSQLiteStore;
- (bool)_shouldGenerateTouchIconFromTouchIcon:(id)arg1 forRequest:(id)arg2;
- (bool)_shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(bool)arg2 initiatedFromBookmarkInteraction:(bool)arg3;
- (bool)_shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(bool)arg2 initiatedFromBookmarkInteraction:(bool)arg3 knownImageState:(long long)arg4;
- (bool)_shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(bool)arg2 initiatedFromBookmarkInteraction:(bool)arg3 shouldCheckImageState:(bool*)arg4;
- (bool)_shouldRequestTouchIconWithTimeoutForURL:(id)arg1 inUserLoadedWebpage:(bool)arg2 initiatedFromBookmarkInteraction:(bool)arg3;
- (id)_touchIconForURL:(id)arg1 getImageState:(long long*)arg2;
- (void)_updateTouchIconsDataForHost:(id)arg1 image:(id)arg2 requestDidSucceed:(bool)arg3 isUserLoadedWebpageRequest:(bool)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg5 UUIDString:(id)arg6;
- (void)_willSaveTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2;
- (id)cacheDirectoryURL;
- (void)cacheFirstAvailableTouchIcon:(id)arg1 forURL:(id)arg2;
- (bool)canHandleRequest:(id)arg1;
- (void)dealloc;
- (void)emptyCaches;
- (bool)hasDeterminedIconAvailabilityForURL:(id)arg1;
- (id)imageDirectoryURL;
- (id)init;
- (id)initWithCacheDirectoryURL:(id)arg1;
- (id)initWithCacheDirectoryURL:(id)arg1 isReadOnly:(bool)arg2;
- (id)initWithCacheDirectoryURL:(id)arg1 isReadOnly:(bool)arg2 protectionType:(long long)arg3 allowFetchingOverCellularNetwork:(bool)arg4 fileMappingStyle:(long long)arg5;
- (bool)isReadOnly;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(bool)arg2;
- (id)providerDelegate;
- (void)purgeUnneededCacheEntries;
- (void)releaseTouchIconForHost:(id)arg1;
- (void)releaseTouchIconForURLString:(id)arg1;
- (void)releaseTouchIconsForHosts:(id)arg1;
- (void)removeTouchIconMetadataForHosts:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(bool*)arg2;
- (void)retainTouchIconForHost:(id)arg1;
- (void)retainTouchIconForURLString:(id)arg1;
- (void)retainTouchIconsForHosts:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)setProviderDelegate:(id)arg1;
- (bool)shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(bool)arg2;
- (bool)shouldRequestTouchIconForWebPageNavigationFromBookmarkInteractionForURL:(id)arg1;
- (id)siteMetadataImageCache:(id)arg1 customFileNameForKeyString:(id)arg2;
- (void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3;
- (void)siteMetadataImageCache:(id)arg1 didRemoveImageFromCacheForKeyString:(id)arg2;
- (void)siteMetadataImageCacheDidEmptyCache:(id)arg1;
- (void)siteMetadataImageCacheDidFinishLoadingSettings:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (id)uuidStringToHost;
- (void)webViewMetadataFetchOperation:(id)arg1 didFinishUsingWebView:(id)arg2;
- (void)webViewMetadataFetchOperation:(id)arg1 getWebViewOfSize:(struct CGSize { double x1; double x2; })arg2 withConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;

@end
