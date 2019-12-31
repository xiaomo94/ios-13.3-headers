/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageRequestBehaviorSpec : NSObject {
    bool  _allowPlaceholder;
    long long  _choosingPolicy;
    unsigned long long  _loadingOptions;
    double  _minimumTableThumbnailLongSide;
    bool  _networkAccessAllowed;
    bool  _onlyUseFetchedAssetPropertiesDuringChoosing;
    long long  _resizeMode;
    bool  _synchronous;
    long long  _version;
}

@property (nonatomic) bool allowPlaceholder;
@property (nonatomic) long long choosingPolicy;
@property (nonatomic) unsigned long long loadingOptions;
@property (nonatomic) double minimumTableThumbnailLongSide;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic) bool onlyUseFetchedAssetPropertiesDuringChoosing;
@property (nonatomic) long long resizeMode;
@property (getter=isSynchronous, nonatomic) bool synchronous;
@property (nonatomic) long long version;

+ (unsigned long long)loadingOptionsFromLoadingMode:(long long)arg1;

- (bool)allowPlaceholder;
- (long long)choosingPolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isNetworkAccessAllowed;
- (bool)isSynchronous;
- (unsigned long long)loadingOptions;
- (double)minimumTableThumbnailLongSide;
- (bool)onlyUseFetchedAssetPropertiesDuringChoosing;
- (long long)resizeMode;
- (void)setAllowPlaceholder:(bool)arg1;
- (void)setChoosingPolicy:(long long)arg1;
- (void)setLoadingOptions:(unsigned long long)arg1;
- (void)setMinimumTableThumbnailLongSide:(double)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setOnlyUseFetchedAssetPropertiesDuringChoosing:(bool)arg1;
- (void)setResizeMode:(long long)arg1;
- (void)setSynchronous:(bool)arg1;
- (void)setVersion:(long long)arg1;
- (id)shortDescription;
- (bool)shouldLoadData;
- (bool)shouldLoadDataOrURL;
- (bool)shouldLoadImage;
- (bool)shouldLoadURL;
- (long long)version;

@end
