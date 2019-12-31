/* Generated by RuntimeBrowser.
 */

@protocol CAMZoomControlDelegate <NSObject>

@optional

- (bool)canToggleBetweenZoomFactorsForZoomControl:(CAMZoomControl *)arg1;
- (void)toggleBetweenZoomFactorsForZoomControl:(CAMZoomControl *)arg1;
- (void)zoomControl:(CAMZoomControl *)arg1 didChangeSelectedButtonIndex:(unsigned long long)arg2 displayZoomFactor:(double)arg3;
- (void)zoomControl:(CAMZoomControl *)arg1 didChangeZoomFactor:(double)arg2 interactionType:(long long)arg3;
- (bool)zoomControlCanPlayHaptics:(CAMZoomControl *)arg1;
- (bool)zoomControlShouldSnapDialToSwitchOverZoomFactors:(CAMZoomControl *)arg1;

@end
