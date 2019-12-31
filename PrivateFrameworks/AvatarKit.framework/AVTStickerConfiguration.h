/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTStickerConfiguration : NSObject <AVTCacheableResourceScope> {
    NSString * _assetsPath;
    AVTStickerCamera * _camera;
    NSDictionary * _configurationDictionary;
    double  _duration;
    bool  _hasLoadedFromConfiguration;
    NSString * _localizedName;
    NSArray * _morpherOverrides;
    NSString * _name;
    AVTAvatarPoseAnimation * _poseAnimation;
    bool  _preRendered;
    NSArray * _presetOverrides;
    NSArray * _props;
    float  _rate;
    float  _scale;
    NSArray * _shaderModifiers;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    double  _snapshotFrame;
    unsigned long long  _stickerVersion;
}

@property (nonatomic, retain) NSString *assetsPath;
@property (nonatomic, retain) AVTStickerCamera *camera;
@property (nonatomic, retain) NSDictionary *configurationDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *emojiRepresentation;
@property (nonatomic) bool hasLoadedFromConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSArray *morpherOverrides;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) AVTAvatarPoseAnimation *poseAnimation;
@property (nonatomic, readonly) bool preRendered;
@property (nonatomic, readonly) NSArray *presetOverrides;
@property (nonatomic, retain) NSArray *props;
@property (nonatomic, readonly) float rate;
@property (nonatomic, readonly) float scale;
@property (nonatomic, retain) NSArray *shaderModifiers;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) double snapshotFrame;
@property (nonatomic, readonly) unsigned long long stickerVersion;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

+ (id)stickerConfigurationsForAnimojiNamed:(id)arg1;
+ (id)stickerConfigurationsForAnimojiNamed:(id)arg1 inStickerPack:(id)arg2;
+ (id)stickerConfigurationsForMemoji;
+ (id)stickerConfigurationsForMemojiInStickerPack:(id)arg1;
+ (id)stickerConfigurationsForPuppetNamed:(id)arg1;
+ (id)unavailableAnimojiNamesForStickerPack:(id)arg1;

- (void).cxx_destruct;
- (id)assetsPath;
- (id)camera;
- (id)configurationDictionary;
- (double)duration;
- (id)emojiRepresentation;
- (bool)hasLoadedFromConfiguration;
- (id)initWithConfigDictionary:(id)arg1 assetsPath:(id)arg2;
- (id)initWithConfigurationAtPath:(id)arg1;
- (id)initWithName:(id)arg1 poseAnimation:(id)arg2 props:(id)arg3 shaders:(id)arg4 camera:(id)arg5 options:(id)arg6;
- (void)loadIfNeeded;
- (id)localizedName;
- (id)morpherOverrides;
- (id)name;
- (id)poseAnimation;
- (bool)preRendered;
- (id)presetOverrides;
- (id)props;
- (float)rate;
- (float)scale;
- (void)setAssetsPath:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setConfigurationDictionary:(id)arg1;
- (void)setHasLoadedFromConfiguration:(bool)arg1;
- (void)setPoseAnimation:(id)arg1;
- (void)setProps:(id)arg1;
- (void)setShaderModifiers:(id)arg1;
- (void)setupOptions:(id)arg1;
- (id)shaderModifiers;
- (struct CGSize { double x1; double x2; })size;
- (double)snapshotFrame;
- (unsigned long long)stickerVersion;
- (void)unload;

// Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI

- (unsigned long long)cacheableResourceAssociatedCost;
- (id)cacheableResourceAssociatedIdentifier;

@end
