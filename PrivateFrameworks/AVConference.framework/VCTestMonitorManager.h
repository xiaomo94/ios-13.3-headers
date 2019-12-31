/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCTestMonitorManager : NSObject {
    double  _emulatedRxPLR;
    bool  _enableLoopbackInterface;
    bool  _forceNetworkCellular;
    bool  _toneInjectionEnabled;
    NSObject<OS_dispatch_queue> * _xpcCallbackQueue;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (nonatomic) double emulatedRxPLR;
@property (nonatomic) bool enableLoopbackInterface;
@property bool forceNetworkCellular;
@property bool toneInjectionEnabled;

+ (id)sharedManager;

- (void)dealloc;
- (double)emulatedRxPLR;
- (bool)enableLoopbackInterface;
- (bool)forceNetworkCellular;
- (id)init;
- (void)registerBlocksForService;
- (void)reportMemoryUsage;
- (void)setEmulatedRxPLR:(double)arg1;
- (void)setEnableLoopbackInterface:(bool)arg1;
- (void)setForceNetworkCellular:(bool)arg1;
- (void)setToneInjectionEnabled:(bool)arg1;
- (bool)toneInjectionEnabled;

@end
