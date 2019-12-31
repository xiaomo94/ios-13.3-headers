/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMaintenanceWorkCoordinator : NSObject <HDAssertionObserver> {
    HDAssertionManager * _assertionManager;
    NSObject<OS_dispatch_queue> * _assertionQueue;
    NSLock * _lock;
    NSOperationQueue * _maintenanceWorkQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) bool suspended;

- (void).cxx_destruct;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)cancelAllOperations;
- (void)enqueueMaintenanceOperation:(id)arg1;
- (id)init;
- (bool)suspended;
- (id)takeMaintenanceSuspensionAssertionForOwner:(id)arg1;

@end
