/* Generated by RuntimeBrowser.
 */

@protocol SUCoreMSUDelegate <NSObject>

@optional

- (void)msuAnomaly:(NSError *)arg1;
- (void)msuApplied;
- (void)msuApplyFailed:(NSError *)arg1;
- (void)msuBrainLoadFailed:(NSError *)arg1;
- (void)msuBrainLoadProgress:(SUCoreProgress *)arg1;
- (void)msuBrainLoadStalled:(SUCoreProgress *)arg1;
- (void)msuBrainLoaded:(SUCoreProgress *)arg1;
- (void)msuPrepareFailed:(NSError *)arg1;
- (void)msuPrepareProgress:(SUCoreProgress *)arg1;
- (void)msuPrepared:(SUCoreProgress *)arg1;
- (void)msuRemoveFailed:(NSError *)arg1;
- (void)msuRemoved;
- (void)msuResumeFailed:(NSError *)arg1;
- (void)msuResumed;
- (void)msuSUDownloadPreflightFailed:(NSError *)arg1;
- (void)msuSUDownloadPreflighted;
- (void)msuSuspendFailed:(NSError *)arg1;
- (void)msuSuspended;

@end