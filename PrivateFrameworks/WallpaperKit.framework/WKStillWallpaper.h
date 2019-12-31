/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

@interface WKStillWallpaper : WKAbstractWallpaper <WKFileBasedWallpaper> {
    NSURL * _fullsizeImageURL;
    NSURL * _thumbnailImageURL;
}

@property (nonatomic, copy) NSURL *fullsizeImageURL;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) double stillTimeInVideo;
@property (nonatomic, copy) NSURL *thumbnailImageURL;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSURL *videoAssetURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fullsizeImageURL;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 thumbnailImageURL:(id)arg3 fullsizeImageURL:(id)arg4;
- (void)setFullsizeImageURL:(id)arg1;
- (void)setThumbnailImageURL:(id)arg1;
- (double)stillTimeInVideo;
- (id)thumbnailImageURL;
- (unsigned long long)type;
- (id)videoAssetURL;

@end