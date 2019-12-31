/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StarBoardServices.framework/StarBoardServices
 */

@interface SRSServiceController : NSObject <NSLocking> {
    BSServiceConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

+ (Class)_serviceSpecification;

- (void).cxx_destruct;
- (void)_activated;
- (void)_interrupted;
- (void)_invalidated;
- (id)_remoteTarget;
- (void)_restoreState;
- (id)init;
- (id)initWithMachName:(id)arg1;
- (void)invalidate;
- (void)lock;
- (void)unlock;

@end
