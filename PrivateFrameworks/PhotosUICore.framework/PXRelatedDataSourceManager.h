/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRelatedDataSourceManager : PXSectionedDataSourceManager {
    bool  __canceled;
    PHFetchResult * __collectionListFetchResult;
    PXPhotosDetailsContext * __context;
    unsigned long long  __initialBatchSize;
    unsigned long long  __loadBatchSize;
    PHFetchResult * __preparedRelatedCollections;
    PHFetchResult * __relatedCollections;
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    bool  _didLoadInitialDataSource;
    bool  _didStartLoading;
    unsigned long long  _fetchLimit;
    unsigned long long  _initialBatchSize;
    unsigned long long  _loadBatchSize;
    NSDate * _loadStartDate;
    PXRelatedSettings * _settings;
    bool  _shouldCancelLoading;
    bool  _useItemIndexPaths;
}

@property (getter=_isCanceled, setter=_setCanceled:, nonatomic) bool _canceled;
@property (nonatomic, readonly) PHFetchResult *_collectionListFetchResult;
@property (nonatomic, readonly) PXPhotosDetailsContext *_context;
@property (setter=_setPreparedRelatedCollections:, nonatomic, retain) PHFetchResult *_preparedRelatedCollections;
@property (setter=_setRelatedCollections:, nonatomic, retain) PHFetchResult *_relatedCollections;
@property (nonatomic, readonly) PXRelatedDataSource *dataSource;
@property (nonatomic) unsigned long long initialBatchSize;
@property (nonatomic) unsigned long long loadBatchSize;
@property (nonatomic, readonly) bool useItemIndexPaths;

- (void).cxx_destruct;
- (id)_collectionListFetchResult;
- (id)_collectionListRelatedToObject:(id)arg1;
- (id)_collectionsRelatedToReferenceObject:(id)arg1;
- (id)_context;
- (void)_continueBackgroundLoadWithReferenceObject:(id)arg1 attemptIndex:(long long)arg2;
- (void)_continueBackgroundLoadWithReferenceObject:(id)arg1 relatedCollections:(id)arg2;
- (bool)_isCanceled;
- (id)_keyAssetFetchResultForRelatedCollection:(id)arg1 referenceAsset:(id)arg2;
- (id)_preparedRelatedCollections;
- (id)_referenceAssetForReferenceObject:(id)arg1;
- (id)_referenceObject;
- (id)_referenceObjectFromCollectionListFetchResult:(id)arg1;
- (id)_relatedCollections;
- (void)_setCanceled:(bool)arg1;
- (void)_setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)_setPreparedRelatedCollections:(id)arg1;
- (void)_setRelatedCollections:(id)arg1;
- (void)_startBackgroundLoad;
- (void)cancelLoading;
- (id)createPhotosDataSourceForRelatedEntry:(id)arg1;
- (id)init;
- (id)initWithPhotosDetailsContext:(id)arg1;
- (id)initWithPhotosDetailsContext:(id)arg1 useItemIndexPaths:(bool)arg2;
- (unsigned long long)initialBatchSize;
- (unsigned long long)loadBatchSize;
- (void)registerChangeObserver:(id)arg1 context:(void*)arg2;
- (void)setInitialBatchSize:(unsigned long long)arg1;
- (void)setLoadBatchSize:(unsigned long long)arg1;
- (void)startLoading;
- (void)unregisterChangeObserver:(id)arg1 context:(void*)arg2;
- (bool)useItemIndexPaths;

@end
