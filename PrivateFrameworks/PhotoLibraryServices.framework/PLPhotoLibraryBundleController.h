/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibraryBundleController : NSObject {
    PLBackgroundJobService * _backgroundJobService;
    long long  _bundleType;
    NSMutableDictionary * _bundlesByPath;
    Class  _libraryServicesDelegateClass;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (retain) PLBackgroundJobService *backgroundJobService;

+ (id)_realPathForLibraryURL:(id)arg1;
+ (id)sharedAssetsdClientForPhotoLibraryURL:(id)arg1;
+ (id)sharedBundleController;

- (void).cxx_destruct;
- (id)_lookupOrCreateBundleForLibraryURL:(id)arg1 replaceExisting:(bool)arg2;
- (void)_unregisterBundle:(id)arg1;
- (id)backgroundJobService;
- (bool)bindAssetsdService:(id)arg1 toBundle:(id)arg2 error:(id*)arg3;
- (id)bundleForLibraryURL:(id)arg1;
- (void)handleUnknownMergeEvent;
- (id)init;
- (id)initWithBundleType:(long long)arg1 libraryServicesManagerDelegateClass:(Class)arg2;
- (id)libraryBundlePaths;
- (id)libraryBundles;
- (id)libraryServicesStatusDescription;
- (id)lookupOrCreateBundleForLibraryURL:(id)arg1;
- (id)newPhotoLibraryBundleWithLibraryURL:(id)arg1;
- (id)openBundleAtLibraryURL:(id)arg1;
- (id)replaceBundleForRebuildAtLibraryURL:(id)arg1;
- (void)setBackgroundJobService:(id)arg1;
- (void)shutdownBundle:(id)arg1 reason:(id)arg2;

@end
