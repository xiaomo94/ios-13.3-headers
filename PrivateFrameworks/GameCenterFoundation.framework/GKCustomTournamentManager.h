/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKCustomTournamentManager : NSObject <GKCustomTournamentDelegate> {
    GKPlayer * _creator;
    GKTournament * _tournament;
}

@property (nonatomic, retain) GKPlayer *creator;
@property (nonatomic) GKTournament *tournament;

- (void).cxx_destruct;
- (void)acceptInvitationWithCompletionHandler:(id /* block */)arg1;
- (void)addCreator:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addInvitees:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)creator;
- (void)declineInvitationWithCompletionHandler:(id /* block */)arg1;
- (void)removeCreator:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeInvitees:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCreator:(id)arg1;
- (void)setTournament:(id)arg1;
- (id)tournament;

@end
