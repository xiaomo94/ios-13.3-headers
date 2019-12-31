/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutServer : HDSubserver <HDWorkoutServerInterface> {
    NSUUID * _fitnessMachineConnectionUUID;
    HDFitnessMachineManager * _fitnessMachineManager;
    HDWorkoutManager * _workoutManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_completionHandlerForReplaceWithOriginalWorkout:(id)arg1 newWorkout:(id)arg2 completion:(id /* block */)arg3;
- (id)diagnosticDescription;
- (id)initWithParentServer:(id)arg1;
- (void)invalidate;
- (void)remote_addSamples:(id)arg1 toWorkout:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
- (void)remote_endFitnessMachineConnectionWithUUID:(id)arg1;
- (void)remote_finishAllWorkoutsWithCompletion:(id /* block */)arg1;
- (void)remote_forbidConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
- (void)remote_generatePauseOrResumeRequestWithCompletion:(id /* block */)arg1;
- (void)remote_markClientReadyWithConnectionUUID:(id)arg1;
- (void)remote_permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(id)arg3;
- (void)remote_recoverActiveWorkoutSessionWithCompletion:(id /* block */)arg1;
- (void)remote_registerClient:(id)arg1 withConnectionUUID:(id)arg2;
- (void)remote_registerConnectionInitiatorClient:(id)arg1 withConnectionUUID:(id)arg2;
- (void)remote_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_simulateAccept;
- (void)remote_simulateDisconnect;
- (void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)remote_startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(id /* block */)arg2;

@end
