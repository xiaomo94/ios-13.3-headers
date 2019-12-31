/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAServiceClientHandler : NSObject <NSXPCConnectionDelegate, PHAGraphRegistration, PHAServiceOperationHandling, PLPhotoAnalysisServiceProtocol> {
    NSMapTable * _cancelableOperationsById;
    NSString * _clientBundleID;
    NSMutableArray * _clientHandlers;
    PHAExecutive * _executive;
    unsigned long long  _graphLoadCount;
    PFDispatchQueue * _graphLoadQueue;
    NSObject<OS_dispatch_group> * _graphReady;
    NSObject<OS_dispatch_semaphore> * _invalidationSemaphore;
    PHAManager * _photoAnalysisManager;
    id  _serviceUnavailableHandler;
    NSLock * _sharedOperationLock;
    NSXPCConnection * _xpcConnection;
}

@property (readonly) NSString *clientBundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property PHAExecutive *executive;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_semaphore> *invalidationSemaphore;
@property (retain) PHAManager *photoAnalysisManager;
@property (retain) id serviceUnavailableHandler;
@property (nonatomic, retain) NSLock *sharedOperationLock;
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (id)cancelableOperationsById;
- (id)clientBundleID;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (id)contextInformationFromInvocation:(id)arg1;
- (id)description;
- (id)executive;
- (id)forwardingTargetForInvocation:(id)arg1 contextInformation:(id)arg2;
- (void)graphBecameReady:(id)arg1 forPHAGraphManager:(id)arg2;
- (void)graphUpdateDidStop;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateMadeProgress:(double)arg1;
- (void)handleOperation:(id)arg1;
- (id)init;
- (id)initWithXPCConnection:(id)arg1 executive:(id)arg2;
- (id)invalidationSemaphore;
- (bool)isPhotos;
- (bool)isplphotosctl;
- (id)libraryURLFromContextInformation:(id)arg1;
- (void)loadGraphWithContext:(id)arg1 reply:(id /* block */)arg2;
- (id)managerForInvocation:(id)arg1 contextInformation:(id)arg2;
- (id)photoAnalysisManager;
- (id)serviceUnavailableHandler;
- (void)setExecutive:(id)arg1;
- (void)setInvalidationSemaphore:(id)arg1;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)setPhotoAnalysisManager:(id)arg1;
- (void)setServiceUnavailableHandler:(id)arg1;
- (void)setSharedOperationLock:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)sharedOperationLock;
- (void)shutdown;
- (void)submitBlockToExecutiveStateQueue:(id /* block */)arg1;
- (void)unloadGraphWithContext:(id)arg1 reply:(id /* block */)arg2;
- (bool)wantsGraphUpdateNotifications;
- (bool)wantsLiveGraphUpdates;
- (id)xpcConnection;

@end
