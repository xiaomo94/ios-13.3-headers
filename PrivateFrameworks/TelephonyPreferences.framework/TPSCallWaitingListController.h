/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

@interface TPSCallWaitingListController : TPSListController <TPSCallWaitingControllerDelegate> {
    TPSCallWaitingController * _callWaitingController;
    PSSpecifier * _masterSwitchSpecifier;
}

@property (nonatomic, readonly) TPSCallWaitingController *callWaitingController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PSSpecifier *masterSwitchSpecifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callWaitingController;
- (void)callWaitingController:(id)arg1 didChangeState:(long long)arg2 error:(id)arg3;
- (void)configureCell:(id)arg1;
- (void)configureCell:(id)arg1 forSpecifier:(id)arg2;
- (id)masterSwitchOn:(id)arg1;
- (id)masterSwitchSpecifier;
- (void)setMasterSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end
