/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker {
    PAImageConversionServiceClient * _imageConversionServiceClient;
    PAVideoConversionServiceClient * _videoConversionServiceClient;
}

+ (id)workerWithLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)_predicateToFetchDeferredAdjustmentNeededAssets;
- (void)dealloc;
- (bool)hasPendingJobs;
- (id)managedObjectIDsNeedingProcessing;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(id /* block */)arg2;

@end
