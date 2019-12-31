/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDashBoardBiometricUnlockController : NSObject <CSExternalEventHandling, SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorConfigurationDelegate, SBBiometricUnlockBehaviorDelegate> {
    <SBBiometricUnlockBehavior> * _biometricUnlockBehavior;
    <SBBiometricUnlockBehaviorConfiguration> * _biometricUnlockBehaviorConfiguration;
    <SBBiometricUnlockBehaviorDelegate> * _biometricUnlockBehaviorDelegate;
    CSCoverSheetViewController * _coverSheetViewController;
}

@property (nonatomic) <SBBiometricUnlockBehaviorDelegate> *biometricUnlockBehaviorDelegate;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long participantState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_mesaUnlockBehavior;
- (bool)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (bool)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (void)biometricUnlockBehaviorConfigurationDidChange:(id)arg1;
- (id)biometricUnlockBehaviorDelegate;
- (id)coverSheetIdentifier;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (bool)handleEvent:(id)arg1;
- (id)initWithCoverSheetViewController:(id)arg1;
- (bool)isLockScreenShowingDefaultContent;
- (void)noteMenuButtonDown;
- (void)noteMenuButtonUp;
- (long long)participantState;
- (void)setAuthenticated:(bool)arg1;
- (void)setBiometricUnlockBehaviorDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
