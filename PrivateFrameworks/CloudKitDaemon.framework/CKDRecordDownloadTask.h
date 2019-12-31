/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordDownloadTask : NSObject {
    NSMutableArray * _assetURLInfosToFillOut;
    NSMutableArray * _assetsToDownload;
    NSMutableArray * _assetsToDownloadInMemory;
    NSError * _error;
    NSObject<OS_dispatch_group> * _group;
    NSMutableArray * _packageIndexSets;
    CKDProgressTracker * _progressTracker;
    CKRecord * _record;
}

@property (nonatomic, retain) NSMutableArray *assetURLInfosToFillOut;
@property (nonatomic, retain) NSMutableArray *assetsToDownload;
@property (nonatomic, retain) NSMutableArray *assetsToDownloadInMemory;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;
@property (nonatomic, retain) NSMutableArray *packageIndexSets;
@property (nonatomic, retain) CKDProgressTracker *progressTracker;
@property (nonatomic, retain) CKRecord *record;

- (void).cxx_destruct;
- (id)assetURLInfosToFillOut;
- (id)assetsToDownload;
- (id)assetsToDownloadInMemory;
- (void)didCompleteTaskWithError:(id)arg1;
- (void)didDownloadAsset:(id)arg1 error:(id)arg2;
- (void)didFillOutURLInfo:(id)arg1 error:(id)arg2;
- (id)error;
- (id)group;
- (id)initWithRecord:(id)arg1 trackProgress:(bool)arg2 assetsToDownload:(id)arg3 assetsToDownloadInMemory:(id)arg4 packageIndexSets:(id)arg5 assetURLInfosToFillOut:(id)arg6;
- (id)packageIndexSets;
- (id)progressTracker;
- (id)record;
- (void)setAssetURLInfosToFillOut:(id)arg1;
- (void)setAssetsToDownload:(id)arg1;
- (void)setAssetsToDownloadInMemory:(id)arg1;
- (void)setError:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setPackageIndexSets:(id)arg1;
- (void)setProgressTracker:(id)arg1;
- (void)setRecord:(id)arg1;

@end
