/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARSession : NSObject <ARDevicePerformanceMonitorDelegate, ARPresentationInternalObserver, ARSensorDelegate, ARTechniqueDelegate, ARWorldTrackingTechniqueObserver> {
    NSArray * _availableSensors;
    ARBKSAccelerometer * _bksAccelerometer;
    ARConfiguration * _configurationInternal;
    bool  _configuredForWorldTracking;
    ARPresentationThermalPolicy * _currentStarThermalPolicy;
    double  _currentTrackingStartingTimestamp;
    NSObject<OS_dispatch_semaphore> * _cyclopToCameraSemaphore;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cyclopToCameraTransform;
    double  _defaultRelocalizationDuration;
    <ARSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    ARDevicePerformanceMonitor * _deviceConditionMonitor;
    ARParentTechnique * _dontUseDirectlySecondaryTechnique;
    ARParentTechnique * _dontUseDirectlyTechnique;
    AREnvironmentTexturingTechnique * _environmentTexturingTechnique;
    long long  _featurePointAccumulationCount;
    bool  _forceEnvironmentTexturingToManualMode;
    bool  _hasCyclopToCameraTransform;
    NSUUID * _identifier;
    ARImageSensor * _imageSensor;
    ARDevicePerformanceLevel * _lastKnownDeviceCondition;
    NSObject<OS_dispatch_semaphore> * _lastPredictedFrameSemaphore;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _lastPredictedFrameTransform;
    ARFrame * _lastProcessedFrame;
    NSObject<OS_dispatch_semaphore> * _lastProcessedFrameSemaphore;
    ARDeviceOrientationData * _latestDeviceOrientationData;
    ARLocationData * _latestLocationData;
    ARLocationSensor * _locationSensor;
    ARSessionMetrics * _metrics;
    CMMotionManager * _motionManger;
    ARFrameContext * _nextFrameContext;
    NSObject<OS_dispatch_semaphore> * _nextFrameContextSemaphore;
    NSHashTable * _observers;
    NSObject<OS_dispatch_semaphore> * _observersSemaphore;
    unsigned long long  _pausedSensors;
    unsigned int  _peakPowerPressureLevel;
    int  _peakPowerPressureToken;
    unsigned long long  _powerUsage;
    NSObject<OS_dispatch_queue> * _prepareTechniquesQueue;
    ARPresentation * _presentation;
    ARVideoFormat * _primaryVideoFormat;
    ARProximitySensor * _proximitySensor;
    ARRecordingTechniquePublic * _recordingTechnique;
    bool  _relocalizationRequested;
    NSDate * _relocalizationTimeoutDate;
    bool  _relocalizing;
    ARTechnique * _renderingTechnique;
    NSObject<OS_dispatch_semaphore> * _resultDataOfSecondaryFrameContextsSemaphore;
    ARRenderSyncScheduler * _resultRequestScheduler;
    unsigned long long  _runningSensors;
    ARRenderSyncScheduler * _secondaryResultRequestScheduler;
    unsigned long long  _state;
    NSObject<OS_dispatch_queue> * _stateQueue;
    ARPresentationThermalPolicyManager * _thermalPolicyManager;
    long long  _thermalState;
    id  _thermalStateObserver;
    ARQATracer * _tracer;
    ARTrackedRaycastPostProcessor * _trackedRaycastPostProcessor;
    bool  _vioFusionEnabled;
    ARWorldTrackingTechnique * _worldTrackingTechnique;
    NSArray * resultDatasOfSecondaryFrameContexts;
}

@property (nonatomic, retain) NSArray *availableSensors;
@property (nonatomic, readonly, copy) ARConfiguration *configuration;
@property (retain) ARConfiguration *configurationInternal;
@property (nonatomic, readonly, copy) ARFrame *currentFrame;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cyclopToCameraTransform;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSessionDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSUUID *identifier;
@property (retain) ARDeviceOrientationData *latestDeviceOrientationData;
@property (retain) ARLocationData *latestLocationData;
@property (nonatomic) unsigned long long pausedSensors;
@property unsigned long long powerUsage;
@property (nonatomic, readonly) ARPresentation *presentation;
@property bool relocalizing;
@property (nonatomic) unsigned long long runningSensors;
@property (retain) ARParentTechnique *secondaryTechnique;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (retain) ARParentTechnique *technique;
@property (nonatomic, retain) ARQATracer *tracer;

+ (id)_applySessionOverrides:(id)arg1 outError:(id*)arg2;
+ (bool)_supportsConfiguration:(id)arg1;
+ (void)forceEnvironmentTexturingTechniqueToManualMode:(id)arg1;
+ (void)initialize;
+ (bool)supportsConfiguration:(id)arg1 forPresentationMode:(long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_cameraTransformForResultData:(id)arg1 previousFrame:(id)arg2;
- (void)_changePowerUsage:(unsigned long long)arg1;
- (void)_changePowerUsage:(unsigned long long)arg1 forced:(bool)arg2;
- (void)_configureInitialThermalPolicy;
- (void)_configureSensorsForRecording;
- (id)_currentFrameContext;
- (void)_endInterruption;
- (void)_enforceThermalMitigationPolicyForDeviceCondition:(id)arg1;
- (id)_getObservers;
- (id)_imageSensorForConfiguration:(id)arg1 existingSensor:(id)arg2;
- (void)_interruptSession;
- (void)_presentation:(id)arg1 didTransitionToMode:(long long)arg2;
- (void)_presentation:(id)arg1 willTransitionToMode:(long long)arg2;
- (void)_removeObserver:(id)arg1;
- (void)_replaceOrAddSensor:(id)arg1;
- (void)_sessionCameraDidChangeTrackingState:(id)arg1;
- (void)_sessionDidAddAnchors:(id)arg1;
- (void)_sessionDidFailWithError:(id)arg1;
- (void)_sessionDidOutputAudioData:(id)arg1;
- (void)_sessionDidOutputCollaborationData:(id)arg1;
- (void)_sessionDidRemoveAnchors:(id)arg1;
- (void)_sessionDidUpdateAnchors:(id)arg1;
- (void)_sessionDidUpdateFrame:(id)arg1;
- (void)_sessionShouldAttemptRelocalization;
- (void)_sessionWillRunWithConfiguration:(id)arg1;
- (void)_setPrimaryTechnique:(id)arg1;
- (void)_setPrimaryTechnique:(id)arg1 secondaryTechnique:(id)arg2;
- (bool)_shouldSkipAnchorCreationForData:(id)arg1;
- (void)_startSensorsWithDataTypes:(unsigned long long)arg1;
- (id)_stateQueue;
- (void)_stopAllSensors;
- (void)_stopSensorsWithDataTypes:(unsigned long long)arg1 keepingDataTypes:(unsigned long long)arg2;
- (void)_updateAnchorsForFrame:(id)arg1 resultDatas:(id)arg2 context:(id)arg3 addedAnchors:(id)arg4 updatedAnchors:(id)arg5 removedAnchors:(id)arg6;
- (void)_updateFeaturePointsForFrame:(id)arg1 previousFrame:(id)arg2 trackingStateChanged:(bool)arg3 context:(id)arg4;
- (void)_updateOriginTransformForFrame:(id)arg1 previousFrame:(id)arg2 modifiers:(unsigned long long)arg3 context:(id)arg4;
- (void)_updatePowerPressureLevelWithToken:(int)arg1;
- (void)_updatePowerUsage;
- (void)_updatePowerUsageForced:(bool)arg1;
- (void)_updateSensorsWithConfiguration:(id)arg1;
- (void)_updateSessionStateWithConfiguration:(id)arg1 options:(unsigned long long)arg2;
- (void)_updateSessionWithConfiguration:(id)arg1 options:(unsigned long long)arg2;
- (void)_updateTechniquesWithPerformanceLevel:(id)arg1;
- (void)_updateTechniquesWithPresentationMode:(long long)arg1;
- (void)_updateThermalState:(id)arg1;
- (void)addAnchor:(id)arg1;
- (id)annotateAnchorToRaycastResults:(id)arg1;
- (id)availableSensors;
- (id)configuration;
- (id)configurationInternal;
- (void)createReferenceObjectWithTransform:(void *)arg1 center:(void *)arg2 extent:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 2: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, id /* block */
- (id)currentFrame;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cyclopToCameraTransform;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (void)deviceConditionMonitor:(id)arg1 deviceConditionChanged:(id)arg2;
- (void)forceEnvironmentTexturingToManualMode:(bool)arg1;
- (id)frameWithCameraImage;
- (void)getCurrentWorldMapWithCompletionHandler:(id /* block */)arg1;
- (void)handleStarData:(id)arg1;
- (id)identifier;
- (id)init;
- (bool)is6DofFaceTracking;
- (bool)isPrimaryImageData:(id)arg1;
- (bool)isUserFaceTracking;
- (id)latestDeviceOrientationData;
- (id)latestLocationData;
- (double)minimumNotificationTimeWindow;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })originTransform;
- (void)pause;
- (unsigned long long)pausedSensors;
- (unsigned long long)powerUsage;
- (id)predictedAppPointFrameAtTimestamp:(double)arg1 frame:(id)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })predictedAppPointTransformAtTimestamp:(double)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })predictedDeviceTransformAtTimestamp:(double)arg1;
- (id)presentation;
- (void)presentation:(id)arg1 didTransitionToMode:(long long)arg2;
- (void)presentation:(id)arg1 willTransitionToMode:(long long)arg2;
- (id)raycast:(id)arg1;
- (bool)relocalizing;
- (void)removeAnchor:(id)arg1;
- (id)replaySensor;
- (void)runWithConfiguration:(id)arg1;
- (void)runWithConfiguration:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)runningSensors;
- (id)secondaryTechnique;
- (void)sensor:(id)arg1 didFailWithError:(id)arg2;
- (void)sensor:(id)arg1 didOutputSensorData:(id)arg2;
- (void)sensorDidPause:(id)arg1;
- (void)sensorDidRestart:(id)arg1;
- (void)setAvailableSensors:(id)arg1;
- (void)setConfigurationInternal:(id)arg1;
- (void)setCyclopToCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLatestDeviceOrientationData:(id)arg1;
- (void)setLatestLocationData:(id)arg1;
- (void)setOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setPausedSensors:(unsigned long long)arg1;
- (void)setPowerUsage:(unsigned long long)arg1;
- (void)setRelocalizing:(bool)arg1;
- (void)setRunningSensors:(unsigned long long)arg1;
- (void)setSecondaryTechnique:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTechnique:(id)arg1;
- (void)setTracer:(id)arg1;
- (void)setWorldOrigin:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setupResultRequestSyncScheduler:(id)arg1 forTechnique:(id)arg2;
- (void)setupSessionForTechniques:(id)arg1;
- (unsigned long long)state;
- (id)technique;
- (void)technique:(id)arg1 didChangeState:(long long)arg2;
- (void)technique:(id)arg1 didFailWithError:(id)arg2;
- (void)technique:(id)arg1 didOutputCollaborationData:(id)arg2;
- (void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4;
- (id)tracer;
- (id)trackedRaycast:(id)arg1 updateHandler:(id /* block */)arg2;
- (void)updateWithCollaborationData:(id)arg1;
- (bool)wantsPredictedAnchorTracking;

@end
