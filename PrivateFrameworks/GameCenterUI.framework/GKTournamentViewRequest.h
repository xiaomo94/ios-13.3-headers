/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKTournamentViewRequest : NSObject <NSSecureCoding> {
    long long  _appearanceStyle;
    long long  _playerGroup;
    UIColor * _secondaryTintColor;
    UIColor * _tintColor;
    GKTournament * _tournament;
    NSString * _tournamentDefinitionID;
    long long  _viewType;
}

@property (nonatomic) long long appearanceStyle;
@property (nonatomic) long long playerGroup;
@property (nonatomic, retain) UIColor *secondaryTintColor;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) GKTournament *tournament;
@property (nonatomic, retain) NSString *tournamentDefinitionID;
@property (nonatomic) long long viewType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)appearanceStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewType:(long long)arg1 tournamentDefinitionID:(id)arg2;
- (long long)playerGroup;
- (id)secondaryTintColor;
- (void)setAppearanceStyle:(long long)arg1;
- (void)setPlayerGroup:(long long)arg1;
- (void)setSecondaryTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTournament:(id)arg1;
- (void)setTournamentDefinitionID:(id)arg1;
- (void)setViewType:(long long)arg1;
- (id)tintColor;
- (id)tournament;
- (id)tournamentDefinitionID;
- (long long)viewType;

@end
