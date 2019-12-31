/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICNanoPairedDeviceStatusMonitor : NSObject <PSYInitialSyncStateObserverDelegate> {
    NSObject<OS_dispatch_queue> * _callBackQueue;
    PSYInitialSyncStateObserver * _initialSyncStateObserver;
    bool  _isInitialSyncComplete;
    NSMapTable * _observers;
    NSString * _pairingIDPropertyName;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSUUID *activePairedDevicePairingID;
@property (nonatomic, readonly, copy) NSArray *allPairedDevicePairingIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInitialSyncComplete;
@property (getter=isMediaSyncingSupported, nonatomic, readonly) bool mediaSyncingSupported;
@property (nonatomic, readonly, copy) NSUUID *pairedDevicePairingID;
@property (readonly) Class superclass;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)_activePairedDevice;
- (id)_allObservers;
- (void)_handlePairedDeviceChangedNotification;
- (id)_init;
- (id)activePairedDevicePairingID;
- (void)addObserver:(id)arg1;
- (id)allPairedDevicePairingIDs;
- (void)dealloc;
- (void)deviceBecameActive:(id)arg1;
- (void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2;
- (bool)isInitialSyncComplete;
- (bool)isMediaSyncingSupported;
- (id)pairedDevicePairingID;
- (void)removeObserver:(id)arg1;
- (void)setIsInitialSyncComplete:(bool)arg1;

@end
