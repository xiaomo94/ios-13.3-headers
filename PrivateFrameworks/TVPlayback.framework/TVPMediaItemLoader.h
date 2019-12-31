/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

@interface TVPMediaItemLoader : NSObject <AVAssetResourceLoaderDelegate> {
    AVURLAsset * _AVAsset;
    AVURLAsset * _AVAssetInternal;
    bool  _AVAudioSessionConfiguredAfterMediaServicesReset;
    NSObject<OS_dispatch_queue> * _assetInternalAccessQueue;
    unsigned long long  _assetLoadContext;
    NSObject<OS_dispatch_queue> * _assetLoadContextAccessQueue;
    bool  _cleanedUp;
    TVPContentKeySession * _contentKeySession;
    NSTimer * _diskSpaceMonitorTimer;
    NSError * _error;
    AVURLAsset * _existingAVAsset;
    NSObject<TVPMediaItem> * _mediaItem;
    NSString * _mediaItemLoaderGUID;
    unsigned long long  _refCount;
    id  _reportingHierarchyToken;
    NSNotification * _savedMediaServerResetUserNotification;
    NSString * _state;
    TVPStateMachine * _stateMachine;
    TVPMediaItemTimingData * _timingData;
}

@property (nonatomic, retain) AVURLAsset *AVAsset;
@property (nonatomic, retain) AVURLAsset *AVAssetInternal;
@property (nonatomic) bool AVAudioSessionConfiguredAfterMediaServicesReset;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assetInternalAccessQueue;
@property (nonatomic) unsigned long long assetLoadContext;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assetLoadContextAccessQueue;
@property (nonatomic) bool cleanedUp;
@property (nonatomic, readonly) bool containsStreamingAVAsset;
@property (nonatomic, retain) TVPContentKeySession *contentKeySession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSTimer *diskSpaceMonitorTimer;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) AVURLAsset *existingAVAsset;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<TVPMediaItem> *mediaItem;
@property (nonatomic, copy) NSString *mediaItemLoaderGUID;
@property (nonatomic) unsigned long long refCount;
@property (nonatomic, retain) id reportingHierarchyToken;
@property (nonatomic, retain) NSNotification *savedMediaServerResetUserNotification;
@property (nonatomic, retain) NSString *state;
@property (nonatomic, retain) TVPStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, retain) TVPMediaItemTimingData *timingData;

+ (void)initialize;
+ (id)loaderForMediaItem:(id)arg1;
+ (void)removeTemporaryDownloadDirectory;
+ (id)tempDirURL;

- (void).cxx_destruct;
- (id)AVAsset;
- (id)AVAssetInternal;
- (bool)AVAudioSessionConfiguredAfterMediaServicesReset;
- (id)_advisoryInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 withTotalCount:(unsigned long long)arg3;
- (id)_advisoryKeyNamesWithCount:(unsigned long long)arg1;
- (void)_avAssetMediaServicesReset:(id)arg1;
- (id)_avAssetOptions;
- (void)_avAudioSessionConfiguredAfterMediaServicesReset;
- (void)_avAudioSessionMediaServicesReset:(id)arg1;
- (void)_cellularSettingsDidChange:(id)arg1;
- (void)_cleanUp;
- (id)_contentKeyRequestParamsFromBase64String:(id)arg1;
- (void)_loadMediaItemMetadataAsynchronously;
- (void)_mediaItemPlaybackErrorDidOccur:(id)arg1;
- (void)_mediaItemStopPlayback:(id)arg1;
- (id)_metadataKeysToLoad;
- (bool)_needToLoadBlockingMetadataKeys;
- (void)_networkTypeDidChange:(id)arg1;
- (id)_numberValueForKey:(id)arg1 fromMetadata:(id)arg2 andKeyIdentifierMap:(id)arg3;
- (void)_postMediaServicesResetFailureWithNotification:(id)arg1;
- (void)_registerStateMachineHandlers;
- (id)_rollInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 forType:(unsigned long long)arg3 withTotalCount:(unsigned long long)arg4;
- (id)_rollKeyNameFromType:(unsigned long long)arg1;
- (id)_rollKeyNamesForType:(unsigned long long)arg1 withCount:(unsigned long long)arg2;
- (unsigned long long)_rollTypeFromMetadataItemKey:(id)arg1;
- (id)_skipInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 forType:(unsigned long long)arg3 withTotalCount:(unsigned long long)arg4;
- (id)_skipKeyNameFromType:(unsigned long long)arg1;
- (id)_skipKeyNamesForType:(unsigned long long)arg1 withCount:(unsigned long long)arg2;
- (unsigned long long)_skipTypeFromMetadataItemKey:(id)arg1;
- (void)_stopBackgroundCaching:(id)arg1;
- (id)_stringValueForKey:(id)arg1 fromMetadata:(id)arg2 andKeyIdentifierMap:(id)arg3;
- (id)_tomatoFreshnessFromString:(id)arg1;
- (id)assetInternalAccessQueue;
- (unsigned long long)assetLoadContext;
- (id)assetLoadContextAccessQueue;
- (bool)cleanedUp;
- (void)cleanupIfNecessary;
- (bool)containsStreamingAVAsset;
- (id)contentKeySession;
- (void)dealloc;
- (id)description;
- (id)diskSpaceMonitorTimer;
- (id)error;
- (id)existingAVAsset;
- (id)initWithMediaItem:(id)arg1;
- (void)loadIfNecessary;
- (void)loadSHA1DigestWithCompletion:(id /* block */)arg1;
- (id)mediaItem;
- (id)mediaItemLoaderGUID;
- (id)newPlayerItem;
- (void)prepareForPlaybackInitiation;
- (unsigned long long)refCount;
- (id)reportingHierarchyToken;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
- (id)savedMediaServerResetUserNotification;
- (void)setAVAsset:(id)arg1;
- (void)setAVAssetInternal:(id)arg1;
- (void)setAVAudioSessionConfiguredAfterMediaServicesReset:(bool)arg1;
- (void)setAssetInternalAccessQueue:(id)arg1;
- (void)setAssetLoadContext:(unsigned long long)arg1;
- (void)setAssetLoadContextAccessQueue:(id)arg1;
- (void)setCleanedUp:(bool)arg1;
- (void)setContentKeySession:(id)arg1;
- (void)setDiskSpaceMonitorTimer:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExistingAVAsset:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setMediaItemLoaderGUID:(id)arg1;
- (void)setRefCount:(unsigned long long)arg1;
- (void)setReportingHierarchyToken:(id)arg1;
- (void)setSavedMediaServerResetUserNotification:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setTimingData:(id)arg1;
- (id)state;
- (id)stateMachine;
- (id)timingData;

@end
