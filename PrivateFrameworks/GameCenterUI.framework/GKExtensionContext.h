/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKExtensionContext : NSExtensionContext <GKExtensionProtocol> {
    GKGame * _game;
    long long  _sandboxToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long sandboxToken;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)game;
- (void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(id /* block */)arg3;
- (void)messageFromClient:(id)arg1;
- (long long)sandboxToken;
- (void)setGame:(id)arg1;
- (void)setInitialState:(id)arg1 withReply:(id /* block */)arg2;
- (void)setSandboxToken:(long long)arg1;

@end
