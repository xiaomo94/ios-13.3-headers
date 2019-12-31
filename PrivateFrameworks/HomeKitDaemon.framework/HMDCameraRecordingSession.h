/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraRecordingSession : HMFObject <HMDCameraRecordingUploaderDelegate, HMFLogging, HMICameraVideoAnalyzerDelegate> {
    bool  _active;
    NSMutableDictionary * _analysisEventsBySequenceNumber;
    HMDCameraProfile * _camera;
    NSMutableDictionary * _confidenceLevelsByEventReason;
    double  _configuredFragmentDuration;
    double  _cumulativeFragmentDuration;
    unsigned long long  _currentFragmentNumber;
    <HMDCameraRecordingSessionDelegate> * _delegate;
    bool  _didHandleFirstFragment;
    HMDCameraRecordingSessionFactory * _factory;
    NSString * _fragmentDirectoryPath;
    NSDictionary * _homePresenceByPairingIdentity;
    NSUUID * _identifier;
    bool  _noMoreFragmentsAvailable;
    unsigned long long  _pendingFragmentsCount;
    HMDCameraRecordingUploader * _recordingUploader;
    NSNumber * _remainingRecordingExtensionDuration;
    HMFActivity * _sessionActivity;
    HMDCameraRecordingSessionTimelineManager * _timelineManager;
    HMICameraVideoAnalyzer * _videoAnalyzer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (getter=isActive) bool active;
@property (readonly) NSMutableDictionary *analysisEventsBySequenceNumber;
@property (retain) HMDCameraProfile *camera;
@property (readonly) NSMutableDictionary *confidenceLevelsByEventReason;
@property (readonly) double configuredFragmentDuration;
@property double cumulativeFragmentDuration;
@property unsigned long long currentFragmentNumber;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraRecordingSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property bool didHandleFirstFragment;
@property (readonly) HMDCameraRecordingSessionFactory *factory;
@property (copy) NSString *fragmentDirectoryPath;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *homePresenceByPairingIdentity;
@property (readonly, copy) NSUUID *identifier;
@property bool noMoreFragmentsAvailable;
@property unsigned long long pendingFragmentsCount;
@property (retain) HMDCameraRecordingUploader *recordingUploader;
@property (retain) NSNumber *remainingRecordingExtensionDuration;
@property (readonly) HMFActivity *sessionActivity;
@property (readonly) Class superclass;
@property (readonly) HMDCameraRecordingSessionTimelineManager *timelineManager;
@property (retain) HMICameraVideoAnalyzer *videoAnalyzer;
@property (readonly) long long videoAnalyzerEventTypes;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_addNotificationForReason:(unsigned long long)arg1 confidenceLevel:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 heroFrameData:(id)arg4 offset:(double)arg5 recordingEventTriggers:(unsigned long long)arg6 fragmentNumber:(unsigned long long)arg7;
- (void)_endSessionWithError:(id)arg1;
- (void)_handleAnalyzedFragment:(id)arg1 withResult:(id)arg2;
- (void)_handleDidFailAnalysisForFragment:(id)arg1 withError:(id)arg2;
- (void)_handleDidFindSignificantEvent:(id)arg1 inFragment:(id)arg2;
- (bool)_isValidFirstSessionFragment:(id)arg1;
- (bool)_isValidNonFirstSessionFragment:(id)arg1;
- (bool)_shouldEndSession;
- (bool)_shouldUploadFragmentWithAnalyzerResult:(id)arg1 sequenceNumber:(unsigned long long)arg2;
- (void)_submitAnalysisEventForSequenceNumber:(long long)arg1;
- (void)_submitNotificationSuccessMetricWithRecordingEventTriggers:(unsigned long long)arg1 fragmentNumber:(unsigned long long)arg2;
- (void)_writeFragment:(id)arg1;
- (id)analysisEventsBySequenceNumber;
- (void)analyzer:(id)arg1 didAnalyzeFragment:(id)arg2 withResult:(id)arg3;
- (void)analyzer:(id)arg1 didFailAnalysisForFragment:(id)arg2 withError:(id)arg3;
- (void)analyzer:(id)arg1 didFindSignificantEvent:(id)arg2 inFragment:(id)arg3;
- (void)analyzer:(id)arg1 didNotAnalyzeFragment:(id)arg2 withResult:(id)arg3;
- (id)camera;
- (id)confidenceLevelsByEventReason;
- (double)configuredFragmentDuration;
- (double)cumulativeFragmentDuration;
- (unsigned long long)currentFragmentNumber;
- (id)delegate;
- (bool)didHandleFirstFragment;
- (id)factory;
- (id)fragmentDirectoryPath;
- (void)handleFragment:(id)arg1;
- (void)handleNoMoreFragmentsAvailable;
- (id)homePresenceByPairingIdentity;
- (id)identifier;
- (id)initWithWorkQueue:(id)arg1 camera:(id)arg2 configuredFragmentDuration:(double)arg3 timelineManager:(id)arg4 factory:(id)arg5;
- (bool)isActive;
- (id)logIdentifier;
- (bool)noMoreFragmentsAvailable;
- (unsigned long long)pendingFragmentsCount;
- (id)recordingUploader;
- (void)recordingUploader:(id)arg1 didFinishClip:(id)arg2;
- (void)recordingUploader:(id)arg1 didStartClip:(id)arg2;
- (void)recordingUploader:(id)arg1 willFinishClip:(id)arg2;
- (void)recordingUploaderIsIdle:(id)arg1;
- (id)remainingRecordingExtensionDuration;
- (id)sessionActivity;
- (void)setActive:(bool)arg1;
- (void)setCamera:(id)arg1;
- (void)setCumulativeFragmentDuration:(double)arg1;
- (void)setCurrentFragmentNumber:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidHandleFirstFragment:(bool)arg1;
- (void)setFragmentDirectoryPath:(id)arg1;
- (void)setHomePresenceByPairingIdentity:(id)arg1;
- (void)setNoMoreFragmentsAvailable:(bool)arg1;
- (void)setPendingFragmentsCount:(unsigned long long)arg1;
- (void)setRecordingUploader:(id)arg1;
- (void)setRemainingRecordingExtensionDuration:(id)arg1;
- (void)setVideoAnalyzer:(id)arg1;
- (id)timelineManager;
- (id)videoAnalyzer;
- (long long)videoAnalyzerEventTypes;
- (id)workQueue;

@end