/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMAirplayActivity : UIActivity <PHAirPlayControllerRouteObserver> {
    bool  __routeAvailable;
    UIBarButtonItem * _barButtonItem;
    <PMAirplayActivityDelegate> * _delegate;
    UIViewController * _parentViewController;
}

@property (nonatomic) bool _routeAvailable;
@property (nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PMAirplayActivityDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_registerForAirPlayNotifications;
- (bool)_routeAvailable;
- (id)_systemImageName;
- (void)_unregisterForAirPlayNotifications;
- (id)activityTitle;
- (id)activityType;
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;
- (id)barButtonItem;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)parentViewController;
- (void)performActivity;
- (void)setBarButtonItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)set_routeAvailable:(bool)arg1;
- (void)tearDownForCompletion;

@end
