/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAlbumsDebugUISettings : PXSettings {
    bool  _showBestKeyFrameDebugAlbum;
    bool  _showUtilitiesDebugAlbum;
}

@property (nonatomic) bool showBestKeyFrameDebugAlbum;
@property (nonatomic) bool showUtilitiesDebugAlbum;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;
- (void)setShowBestKeyFrameDebugAlbum:(bool)arg1;
- (void)setShowUtilitiesDebugAlbum:(bool)arg1;
- (bool)showBestKeyFrameDebugAlbum;
- (bool)showUtilitiesDebugAlbum;

@end
