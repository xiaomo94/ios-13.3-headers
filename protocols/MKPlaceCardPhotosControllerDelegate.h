/* Generated by RuntimeBrowser.
 */

@protocol MKPlaceCardPhotosControllerDelegate <NSObject>

@optional

- (void)cleanMuninContainerForPlaceCardPhotosController:(MKPlacePhotosViewController *)arg1;
- (MKMuninContainerView *)muninContainerForPlaceCardPhotosController:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosController:(MKPlacePhotosViewController *)arg1 didSelectViewPhotoWithID:(NSString *)arg2;
- (void)placeCardPhotosController:(MKPlacePhotosViewController *)arg1 enterMuninForMapItem:(MKMapItem *)arg2 muninView:(MKMuninView *)arg3;
- (void)placeCardPhotosControllerDidCloseFullscreenPhotos:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosControllerDidOpenFullscreenPhotos:(MKPlacePhotosViewController *)arg1;
- (bool)shouldMoveMuninStorefrontViewForPlaceCardPhotosController:(MKPlacePhotosViewController *)arg1;
- (bool)shouldUseSmallPhotosWithPhotosController:(MKPlacePhotosViewController *)arg1;

@end
