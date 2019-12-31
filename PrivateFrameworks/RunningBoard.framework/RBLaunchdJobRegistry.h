/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBLaunchdJobRegistry : NSObject {
    NSMutableDictionary * _identityToJobMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly, copy) NSSet *jobs;

+ (bool)_deleteJobLabel:(id)arg1 error:(out id*)arg2;
+ (void)_queryJobsWithBlock:(id /* block */)arg1;
+ (bool)_submitJob:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (id)createJobIfNecessaryForIdentity:(id)arg1 withContext:(id)arg2 error:(out id*)arg3;
- (bool)deleteJob:(id)arg1 error:(out id*)arg2;
- (id)init;
- (id)jobForIdentifier:(id)arg1;
- (id)jobForIdentity:(id)arg1;
- (id)jobs;
- (id)synchronizeJobs;

@end
