/* Generated by RuntimeBrowser.
 */

@protocol TSSIMSetupFlowDelegate <NSObject>

@required

- (void)viewControllerDidComplete:(UIViewController *)arg1;

@optional

- (void)popViewController:(UIViewController *)arg1;
- (void)receivedResponse;
- (void)setDefaultNavigationItems:(UIViewController *)arg1;
- (long long)signupUserConsentResponse;
- (void)userDidTapCancel;
- (void)waitForResponse:(UIViewController *)arg1;

@end