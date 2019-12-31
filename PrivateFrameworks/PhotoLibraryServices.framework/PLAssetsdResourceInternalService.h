/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetsdResourceInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceInternalServiceProtocol> {
    NSString * _trustedCallerBundleID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)asynchronousMasterThumbnailForAssetUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)batchSaveAssetJobs:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithLibraryServicesManager:(id)arg1 trustedCallerBundleID:(id)arg2;
- (void)prepareRevertToOriginalWithObjectURI:(id)arg1 reply:(id /* block */)arg2;
- (void)purgeExpiredOutboundSharingAssetsWithReply:(id /* block */)arg1;

@end
