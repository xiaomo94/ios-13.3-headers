/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIAssetCleanupTask : TRIExperimentBaseTask

+ (id)task;
+ (id)taskWithExperimentId:(struct NSString { Class x1; }*)arg1;

- (int)cleanupWithExperiment:(id)arg1;
- (int)cleanupWithExperimentId:(struct NSString { Class x1; }*)arg1;
- (id)nextTasksForRunStatus:(int)arg1;
- (bool)removeExperiment:(id)arg1;
- (bool)removeExperimentArtifact:(struct NSString { Class x1; }*)arg1;
- (bool)removeTreatmentPathsWithExperiment:(id)arg1;
- (int)runTask;

@end
