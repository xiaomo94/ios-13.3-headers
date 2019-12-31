/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

@interface BluetoothDevice : NSObject {
    NSString * _address;
    unsigned int  _connectingServiceMask;
    struct BTDeviceImpl { } * _device;
    NSString * _name;
}

@property (getter=sb_siriBluetoothDeviceSource, setter=sb_setSiriBluetoothDeviceSource:, nonatomic, retain) SiriBluetoothDeviceSource *sb_siriBluetoothDeviceSource;

// Image: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager

- (unsigned int)SendSetupCommand:(unsigned char)arg1;
- (void)_clearName;
- (bool)_isNameCached;
- (void)acceptSSP:(long long)arg1;
- (int)accessorySettingFeatureBitMask;
- (id)aclUID;
- (id)address;
- (int)batteryLevel;
- (unsigned int)clickHoldMode:(int*)arg1 rightAction:(int*)arg2;
- (bool)cloudPaired;
- (long long)compare:(id)arg1;
- (void)connect;
- (void)connectWithServices:(unsigned int)arg1;
- (bool)connected;
- (unsigned long long)connectedServices;
- (unsigned long long)connectedServicesCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct BTDeviceImpl { }*)device;
- (void)disconnect;
- (int)doubleClickMode;
- (unsigned int)doubleTapAction;
- (unsigned int)doubleTapActionEx:(unsigned int*)arg1 rightAction:(unsigned int*)arg2;
- (unsigned int)doubleTapCapability;
- (void)endVoiceCommand;
- (bool)featureCapability:(int)arg1;
- (unsigned int)getConnectingServiceMask;
- (int)getLowSecurityStatus;
- (id)getServiceSetting:(unsigned int)arg1 key:(id)arg2;
- (bool)inEarDetectEnabled;
- (bool)inEarStatusPrimary:(int*)arg1 secondary:(int*)arg2;
- (id)initWithDevice:(struct BTDeviceImpl { }*)arg1 address:(id)arg2;
- (bool)isAccessory;
- (bool)isAppleAudioDevice;
- (bool)isProController;
- (bool)isServiceSupported:(unsigned int)arg1;
- (bool)isTemporaryPaired;
- (unsigned int)listeningMode;
- (unsigned int)listeningModeConfigs;
- (bool)magicPaired;
- (bool)magicPairedDeviceNameUpdated;
- (unsigned int)majorClass;
- (unsigned int)micMode;
- (unsigned int)minorClass;
- (id)name;
- (bool)paired;
- (unsigned int)productId;
- (id)scoUID;
- (bool)setClickHoldMode:(int)arg1 rightMode:(int)arg2;
- (void)setConnectingServicemask:(unsigned int)arg1;
- (void)setDevice:(struct BTDeviceImpl { }*)arg1;
- (bool)setDoubleClickMode:(int)arg1;
- (bool)setDoubleTapAction:(unsigned int)arg1;
- (bool)setDoubleTapActionEx:(unsigned int)arg1 rightAction:(unsigned int)arg2;
- (bool)setInEarDetectEnabled:(bool)arg1;
- (bool)setListeningMode:(unsigned int)arg1;
- (bool)setListeningModeConfigs:(unsigned int)arg1;
- (bool)setMicMode:(unsigned int)arg1;
- (void)setPIN:(id)arg1;
- (void)setServiceSetting:(unsigned int)arg1 key:(id)arg2 value:(id)arg3;
- (bool)setSingleClickMode:(int)arg1;
- (void)setSyncGroup:(int)arg1 enabled:(bool)arg2;
- (void)setSyncSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; })arg1;
- (bool)setUserName:(id)arg1;
- (int)singleClickMode;
- (void)startVoiceCommand;
- (bool)supportsBatteryLevel;
- (bool)supportsHS;
- (id)syncGroups;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; })syncSettings;
- (int)type;
- (void)unpair;
- (unsigned int)vendorId;

// Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation

- (bool)ac_isEyesFree;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (void)sb_setSiriBluetoothDeviceSource:(id)arg1;
- (id)sb_siriBluetoothDeviceSource;

@end
