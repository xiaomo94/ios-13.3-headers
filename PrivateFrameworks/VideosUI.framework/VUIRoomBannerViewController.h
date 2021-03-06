/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIRoomBannerViewController : UIViewController <VUIProductUberBackgroundInterface> {
    VUIRoomBannerView * _bannerView;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) VUIRoomBannerView *bannerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isUberLayoutActive;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double topThreshold;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (id)bannerView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isUberLayoutActive;
- (void)setBannerOpacity:(double)arg1;
- (void)setBannerView:(id)arg1;
- (void)setUberImageOffset:(double)arg1;
- (void)setViewElement:(id)arg1;
- (void)setWhiteBannerOpacity:(double)arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)topThreshold;
- (id)viewElement;

@end
