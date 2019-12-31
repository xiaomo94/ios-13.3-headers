/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRDistantExternalDevice : MRExternalDevice <MRAVDistantExternalDeviceClientProtocol> {
    unsigned long long  _callbacks;
    unsigned int  _connectionState;
    id /* block */  _connectionStateCallback;
    NSObject<OS_dispatch_queue> * _connectionStateCallbackQueue;
    id /* block */  _customDataCallback;
    NSObject<OS_dispatch_queue> * _customDataCallbackQueue;
    _MROriginProtobuf * _customOrigin;
    unsigned long long  _deviceNotifications;
    MRAVDistantExternalDeviceMetadata * _externalDeviceMetadata;
    bool  _hasEverAttemptedToConnect;
    NSXPCConnection * _hostedExternalDeviceConnection;
    bool  _isValid;
    id /* block */  _nameCallback;
    NSObject<OS_dispatch_queue> * _nameCallbackQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    id /* block */  _volumeCallback;
    NSObject<OS_dispatch_queue> * _volumeCallbackQueue;
}

@property (nonatomic, copy) id /* block */ connectionStateCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue;
@property (nonatomic, copy) id /* block */ customDataCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *customDataCallbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasEverAttemptedToConnect;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, copy) id /* block */ nameCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *nameCallbackQueue;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ volumeCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *volumeCallbackQueue;

+ (id)_notificationSerialQueue;
+ (id)clientInterface;
+ (id)serviceInterface;

- (void).cxx_destruct;
- (void)_handleDeviceInfoDidChange:(id)arg1;
- (id)_hostedExternalDeviceConnection;
- (void)_onSerialQueue_synchronousLoadExternalDeviceMetadataIfNecessary;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)_updateHostedDeviceDesiredCallbacks;
- (void)_updateHostedDeviceDesiredNotifications;
- (void)connectWithOptions:(unsigned int)arg1;
- (unsigned int)connectionState;
- (id /* block */)connectionStateCallback;
- (id)connectionStateCallbackQueue;
- (id /* block */)customDataCallback;
- (id)customDataCallbackQueue;
- (id)customOrigin;
- (void)dealloc;
- (id)deviceInfo;
- (void)disconnect:(id)arg1;
- (bool)hasEverAttemptedToConnect;
- (id)hostName;
- (void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)arg1 withError:(id)arg2;
- (void)hostedExternalDeviceDidReceiveCustomData:(id)arg1 withName:(id)arg2;
- (void)hostedExternalDeviceEndpointDidChange:(id)arg1;
- (void)hostedExternalDeviceNameDidChange:(id)arg1;
- (void)hostedExternalDeviceVolumeDidChange:(float)arg1 forEndpointWithIdentifier:(id)arg2 forOutputDeviceWithIdentifier:(id)arg3;
- (id)initWithExternalDeviceListenerEndpoint:(id)arg1;
- (bool)isPaired;
- (bool)isUsingSystemPairing;
- (bool)isValid;
- (id)listenerEndpoint;
- (void)modifyOutputContextOfType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 withReplyQueue:(id)arg5 completion:(id /* block */)arg6;
- (id)name;
- (id /* block */)nameCallback;
- (id)nameCallbackQueue;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)ping:(double)arg1 callback:(id /* block */)arg2 withQueue:(id)arg3;
- (long long)port;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; })arg1;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)setConnectionStateCallback:(id /* block */)arg1;
- (void)setConnectionStateCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setConnectionStateCallbackQueue:(id)arg1;
- (void)setCustomDataCallback:(id /* block */)arg1;
- (void)setCustomDataCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setCustomDataCallbackQueue:(id)arg1;
- (void)setNameCallback:(id /* block */)arg1;
- (void)setNameCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setNameCallbackQueue:(id)arg1;
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setPairingAllowedCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setPairingCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setVolumeCallback:(id /* block */)arg1;
- (void)setVolumeCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setVolumeCallbackQueue:(id)arg1;
- (void)setWantsNowPlayingNotifications:(bool)arg1;
- (void)setWantsOutputDeviceNotifications:(bool)arg1;
- (void)setWantsVolumeNotifications:(bool)arg1;
- (id)supportedMessages;
- (void)unpair;
- (id /* block */)volumeCallback;
- (id)volumeCallbackQueue;
- (bool)wantsNowPlayingNotifications;
- (bool)wantsOutputDeviceNotifications;
- (bool)wantsVolumeNotifications;

@end
