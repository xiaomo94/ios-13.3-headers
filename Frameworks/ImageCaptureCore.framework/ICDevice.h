/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

@interface ICDevice : NSObject {
    NSString * _UUIDString;
    bool  _autoOpenSession;
    NSString * _autolaunchApplicationPath;
    NSString * _bonjourServiceName;
    NSString * _bonjourServiceType;
    NSDictionary * _bonjourTXTRecord;
    bool  _canCancelSoftwareInstallation;
    bool  _closeSessionPending;
    id /* block */  _completionBlock;
    NSNumber * _connectionID;
    <ICDeviceDelegate> * _delegate;
    NSMutableSet * _deviceCapabilities;
    NSNumber * _deviceHandle;
    NSNumber * _deviceID;
    ICDeviceManager * _deviceManager;
    NSNumber * _deviceRef;
    bool  _hasOpenSession;
    struct CGImage { } * _icon;
    NSString * _iconPath;
    NSString * _internalUUID;
    NSString * _ipAddress;
    int  _ipPort;
    NSString * _locationDescription;
    int  _moduleExecutableArchitecture;
    NSString * _modulePath;
    NSString * _moduleVersion;
    NSString * _name;
    bool  _openSessionPending;
    NSString * _persistentIDString;
    bool  _preferred;
    NSString * _productKind;
    bool  _remote;
    NSString * _serialNumberString;
    double  _softwareInstallPercentDone;
    NSString * _transportType;
    unsigned long long  _type;
    int  _usbLocationID;
    int  _usbProductID;
    int  _usbVendorID;
    NSMutableDictionary * _userData;
    id  _userObject;
    NSString * _volumePath;
}

@property (nonatomic, copy) NSString *UUIDString;
@property bool autoOpenSession;
@property (nonatomic, copy) NSString *autolaunchApplicationPath;
@property (nonatomic, readonly) NSString *bonjourServiceName;
@property (nonatomic, readonly) NSString *bonjourServiceType;
@property (nonatomic, readonly) NSDictionary *bonjourTXTRecord;
@property (readonly) bool canCancelSoftwareInstallation;
@property (nonatomic, readonly) NSArray *capabilities;
@property bool closeSessionPending;
@property (copy) id /* block */ completionBlock;
@property (nonatomic, readonly) NSNumber *connectionID;
@property (nonatomic) <ICDeviceDelegate> *delegate;
@property (nonatomic, retain) NSMutableSet *deviceCapabilities;
@property (nonatomic, copy) NSNumber *deviceHandle;
@property (nonatomic, readonly) NSNumber *deviceID;
@property (nonatomic, retain) ICDeviceManager *deviceManager;
@property (nonatomic, readonly) NSNumber *deviceRef;
@property (nonatomic) bool hasOpenSession;
@property (nonatomic) struct CGImage { }*icon;
@property (nonatomic, readonly) NSString *iconPath;
@property (nonatomic, copy) NSString *internalUUID;
@property (nonatomic, readonly) NSString *ipAddress;
@property (nonatomic, readonly) int ipPort;
@property (nonatomic, readonly) bool isAppleDevice;
@property (nonatomic, readonly) NSString *locationDescription;
@property (readonly) int moduleExecutableArchitecture;
@property (nonatomic, readonly) NSString *modulePath;
@property (nonatomic, readonly) NSString *moduleVersion;
@property (nonatomic, copy) NSString *name;
@property bool openSessionPending;
@property (nonatomic, copy) NSString *persistentIDString;
@property (readonly) bool preferred;
@property (nonatomic, copy) NSString *productKind;
@property (getter=isRemote, readonly) bool remote;
@property (nonatomic, readonly) NSString *serialNumberString;
@property (readonly) double softwareInstallPercentDone;
@property (nonatomic, copy) NSString *transportType;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic) int usbLocationID;
@property (nonatomic) int usbProductID;
@property (nonatomic) int usbVendorID;
@property (nonatomic, readonly) NSMutableDictionary *userData;
@property (retain) id userObject;
@property (nonatomic, copy) NSString *volumePath;

- (id)UUIDString;
- (void)addCapability:(id)arg1;
- (bool)autoOpenSession;
- (id)autolaunchApplicationPath;
- (id)bonjourServiceName;
- (id)bonjourServiceType;
- (id)bonjourTXTRecord;
- (bool)canCancelSoftwareInstallation;
- (bool)canEject;
- (id)capabilities;
- (bool)closeSessionPending;
- (id /* block */)completionBlock;
- (id)connectionID;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)deviceCapabilities;
- (id)deviceHandle;
- (id)deviceID;
- (id)deviceManager;
- (id)deviceRef;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (bool)hasOpenSession;
- (struct CGImage { }*)icon;
- (id)iconPath;
- (id)init;
- (id)internalUUID;
- (id)ipAddress;
- (int)ipPort;
- (bool)isAppleDevice;
- (bool)isRemote;
- (id)locationDescription;
- (int)moduleExecutableArchitecture;
- (id)modulePath;
- (id)moduleVersion;
- (id)name;
- (bool)openSessionPending;
- (id)persistentIDString;
- (bool)preferred;
- (id)productKind;
- (void)removeCapability:(id)arg1;
- (void)requestCloseSession;
- (void)requestCloseSessionWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)requestEject;
- (void)requestEjectWithCompletion:(id /* block */)arg1;
- (void)requestOpenSession;
- (void)requestOpenSessionWithOptions:(id)arg1;
- (void)requestOpenSessionWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (id)serialNumberString;
- (void)setAutoOpenSession:(bool)arg1;
- (void)setAutolaunchApplicationPath:(id)arg1;
- (void)setCloseSessionPending:(bool)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceCapabilities:(id)arg1;
- (void)setDeviceHandle:(id)arg1;
- (void)setDeviceManager:(id)arg1;
- (void)setHasOpenSession:(bool)arg1;
- (void)setIcon:(struct CGImage { }*)arg1;
- (void)setInternalUUID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOpenSessionPending:(bool)arg1;
- (void)setPersistentIDString:(id)arg1;
- (void)setProductKind:(id)arg1;
- (void)setTransportType:(id)arg1;
- (void)setUUIDString:(id)arg1;
- (void)setUsbLocationID:(int)arg1;
- (void)setUsbProductID:(int)arg1;
- (void)setUsbVendorID:(int)arg1;
- (void)setUserObject:(id)arg1;
- (void)setVolumePath:(id)arg1;
- (double)softwareInstallPercentDone;
- (id)transportType;
- (unsigned long long)type;
- (int)usbLocationID;
- (int)usbProductID;
- (int)usbVendorID;
- (id)userData;
- (id)userObject;
- (id)valueForUndefinedKey:(id)arg1;
- (id)volumePath;

@end
