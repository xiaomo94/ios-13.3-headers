/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMusicRecommendationsRequest : NSObject {
    NSData * _cachedData;
    bool  _useCachedDataOnly;
}

@property (nonatomic, retain) NSData *cachedData;
@property (nonatomic) bool useCachedDataOnly;

- (void).cxx_destruct;
- (void)_continueToForYouRequestWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_continueToLibraryImportWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_continueToLookupWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_continueToProcessResultsWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_finishWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_performForYouRequestWithCompletion:(id /* block */)arg1;
- (void)_performLibraryImportChangeRequestWithModelObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)_performLookupRequestWithModelObjects:(id)arg1 completion:(id /* block */)arg2;
- (id)cachedData;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (void)setCachedData:(id)arg1;
- (void)setUseCachedDataOnly:(bool)arg1;
- (bool)useCachedDataOnly;

@end
