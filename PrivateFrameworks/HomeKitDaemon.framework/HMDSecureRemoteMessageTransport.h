/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSecureRemoteMessageTransport : HMFMessageTransport <HMDSecureRemoteSessionDelegate, HMFDumpState, HMFLogging, HMFMessageTransportDelegate> {
    NSMutableDictionary * _currentHomeConfigurations;
    HMDRemoteDeviceMonitor * _deviceMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _secureRemoteSessions;
    HMDRemoteMessageNotifications * _sessionNotifications;
    NSArray * _transports;
}

@property (nonatomic, retain) NSMutableDictionary *currentHomeConfigurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDRemoteDeviceMonitor *deviceMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *secureRemoteSessions;
@property (nonatomic, retain) HMDRemoteMessageNotifications *sessionNotifications;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *transports;

+ (id)defaultTransport;
+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_electDeviceForAccountDestination:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleElectDeviceForIDSSession:(id)arg1;
- (void)_handleElectDeviceForUserResponse:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleNotificationMessage:(id)arg1;
- (void)_handleNotificationResponseForMessage:(id)arg1 responsePayload:(id)arg2 responseError:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)_handlePingMessage:(id)arg1;
- (bool)_handleReceivedMessage:(id)arg1 transport:(id)arg2;
- (void)_handleSecureMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;
- (bool)_haveAllCapabilities:(id)arg1;
- (id)_openSecureSessionToDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_pingDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_preferredTransportForMessage:(id)arg1;
- (id)_secureRemoteSessionForDevice:(id)arg1;
- (void)_sendPingToDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3 responseHandler:(id /* block */)arg4;
- (void)_sendSecureMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateDeviceInformationFromMessage:(id)arg1;
- (id)accountRegistry;
- (id)currentHomeConfigurations;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)deviceMonitor;
- (id)dumpState;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (id)initWithTransports:(id)arg1;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)openSecureSessionToDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)pingDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)prepareAnswerForRequestedCapabilities:(id)arg1;
- (void)removeHome:(id)arg1;
- (void)reset;
- (void)secureRemoteSession:(id)arg1 didCloseWithError:(id)arg2;
- (void)secureRemoteSession:(id)arg1 receivedRequestToSendMessage:(id)arg2;
- (id)secureRemoteSessions;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)sessionNotifications;
- (void)setCurrentHomeConfigurations:(id)arg1;
- (void)setSessionNotifications:(id)arg1;
- (id)shortDescription;
- (void)start;
- (id)transports;
- (void)updateHome:(id)arg1 configurationVersion:(long long)arg2;

@end
