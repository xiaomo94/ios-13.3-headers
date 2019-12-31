/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyCommandDiscoverabilityHUD : NSObject {
    NSTimer * _HUDPopTimer;
    bool  _commandKeyIsDown;
    _UIKeyCommandDiscoverabilityHUDWindow * _window;
}

+ (void)clearHUDPopTimer;
+ (void)dismissHUD;
+ (id)sharedKeyCommandDiscoverabilityHUD;

- (void).cxx_destruct;
- (void)_HUDPopTimerFired:(id)arg1;
- (void)_applicationWillResignActive;
- (void)_clearHUDPopTimer;
- (void)_didTakeScreenshot;
- (void)_dismissHUD;
- (id)_performableKeyCommandsWithResponder:(id)arg1;
- (void)_presentHUDWithKeyCommands:(id)arg1;
- (void)_scheduleHUDPresentation;
- (void)dealloc;
- (void)handlePhysicalKeyboardEvent:(id)arg1;

@end
