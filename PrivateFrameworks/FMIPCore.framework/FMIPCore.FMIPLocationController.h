/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMIPCore.framework/FMIPCore
 */

@interface FMIPCore.FMIPLocationController : NSObject <CLLocationManagerDelegate> {
    void delegate;
    void locationManager;
    void locationUpdatingQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;

@end
