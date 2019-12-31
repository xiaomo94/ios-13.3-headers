/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIApplicationInfoParser : NSObject {
    long long  _backgroundStyle;
    bool  _canChangeBackgroundStyle;
    NSArray * _canvasDefinitions;
    bool  _disableLayoutAwareShortcuts;
    bool  _fakingRequiresHighResolution;
    int  _ignoredOverrides;
    long long  _interfaceOrientation;
    bool  _isExitsOnSuspend;
    bool  _isYukonLinked;
    NSString * _launchImageFile;
    long long  _launchingInterfaceOrientationForSpringBoard;
    bool  _optOutOfRTL;
    long long  _requestedStatusBarStyle;
    bool  _requiresHighResolution;
    NSDictionary * _sceneConfigurations;
    bool  _statusBarHidden;
    bool  _statusBarHiddenWhenVerticallyCompact;
    unsigned long long  _supportedInterfaceOrientations;
    bool  _supportedOnLockScreen;
    long long  _supportedUserInterfaceStyle;
    bool  _supportsMultiwindow;
    bool  _systemWindowsSecure;
    unsigned long long  _viewControllerBasedStatusBarAppearance;
    long long  _whitePointAdaptivityStyle;
}

@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly) bool canChangeBackgroundStyle;
@property (nonatomic, readonly, copy) NSArray *canvasDefinitions;
@property (nonatomic, readonly) bool disableLayoutAwareShortcuts;
@property (nonatomic, readonly) bool fakingRequiresHighResolution;
@property (nonatomic, readonly) int ignoredOverrides;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) bool isExitsOnSuspend;
@property (nonatomic, readonly, copy) NSString *launchImageFile;
@property (nonatomic, readonly) long long launchingInterfaceOrientationForSpringBoard;
@property (nonatomic, readonly) bool optOutOfRTL;
@property (nonatomic, readonly) long long requestedStatusBarStyle;
@property (nonatomic, readonly) bool requiresHighResolution;
@property (nonatomic, readonly, copy) NSDictionary *sceneConfigurations;
@property (nonatomic, readonly) bool statusBarHidden;
@property (nonatomic, readonly) bool statusBarHiddenWhenVerticallyCompact;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) bool supportedOnLockScreen;
@property (nonatomic, readonly) long long supportedUserInterfaceStyle;
@property (nonatomic, readonly) bool supportsMultiwindow;
@property (nonatomic, readonly) bool systemWindowsSecure;
@property (nonatomic, readonly) unsigned long long viewControllerBasedStatusBarAppearance;
@property (nonatomic, readonly) long long whitePointAdaptivityStyle;

- (void).cxx_destruct;
- (void)_computeSupportedInterfaceOrientationsWithInfo:(id)arg1;
- (void)_computeSupportedUserInterfaceStyleFromInfo:(id)arg1;
- (id)_initWithApplicationPlistData:(id)arg1;
- (bool)_isLinkedOnOrAfterYukon;
- (long long)backgroundStyle;
- (bool)canChangeBackgroundStyle;
- (id)canvasDefinitions;
- (bool)disableLayoutAwareShortcuts;
- (bool)fakingRequiresHighResolution;
- (int)ignoredOverrides;
- (id)initWithApplicationProxy:(id)arg1;
- (id)initWithbundle:(id)arg1;
- (long long)interfaceOrientation;
- (bool)isExitsOnSuspend;
- (id)launchImageFile;
- (long long)launchingInterfaceOrientationForSpringBoard;
- (bool)optOutOfRTL;
- (long long)requestedStatusBarStyle;
- (bool)requiresHighResolution;
- (id)sceneConfigurations;
- (bool)statusBarHidden;
- (bool)statusBarHiddenWhenVerticallyCompact;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)supportedOnLockScreen;
- (long long)supportedUserInterfaceStyle;
- (bool)supportsMultiwindow;
- (bool)systemWindowsSecure;
- (unsigned long long)viewControllerBasedStatusBarAppearance;
- (long long)whitePointAdaptivityStyle;

@end
