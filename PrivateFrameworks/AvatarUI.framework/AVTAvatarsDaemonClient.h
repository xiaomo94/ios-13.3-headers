/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarsDaemonClient : NSObject <AVTAvatarsDaemon> {
    id /* block */  _connectionFactory;
    <AVTUILogger> * _logger;
}

@property (nonatomic, readonly, copy) id /* block */ connectionFactory;
@property (nonatomic, readonly) <AVTUILogger> *logger;

- (void).cxx_destruct;
- (void)checkIn;
- (id /* block */)connectionFactory;
- (id)initWithConnectionFactory:(id /* block */)arg1 logger:(id)arg2;
- (id)initWithLogger:(id)arg1;
- (id)logger;
- (void)performWorkWithConnection:(id /* block */)arg1;
- (void)performWorkWithSynchronousProxy:(id /* block */)arg1;

@end
