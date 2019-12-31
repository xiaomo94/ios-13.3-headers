/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBConnectionListener : NSObject <NSXPCListenerDelegate, RBStateCapturing> {
    RBConnectionContext * _context;
    NSObject<OS_xpc_object> * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _lock_connectionToClientMap;
    NSMapTable * _lock_identifierToClientMap;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) NSArray *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

+ (id)sharedConnectionWorkloop;

- (void).cxx_destruct;
- (id)captureState;
- (id)clients;
- (id)debugDescription;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)start;
- (id)stateCaptureTitle;
- (void)stop;

@end
