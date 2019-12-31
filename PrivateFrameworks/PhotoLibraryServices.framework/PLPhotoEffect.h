/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEffect : NSObject {
    NSString * _CIFilterName;
    NSString * _displayName;
    NSString * _filterIdentifier;
    bool  _isLegacy;
    bool  _isPortrait;
    long long  _lightingVersion;
}

@property (nonatomic, readonly, copy) NSString *CIFilterName;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *filterIdentifier;
@property (nonatomic, readonly) bool isLegacy;
@property (nonatomic, readonly) bool isPortrait;
@property (nonatomic, readonly) long long latestVersion;
@property (nonatomic, readonly) long long lightingVersion;

+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3;
+ (unsigned long long)_indexOfEffectWithIdentifier:(id)arg1;
+ (id)_legacyEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2;
+ (id)_lightingEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 lightingVersion:(long long)arg3;
+ (id)allEffects;
+ (id)allSupportedEffects;
+ (id)effectWithCIFilterName:(id)arg1;
+ (id)effectWithIdentifier:(id)arg1;
+ (bool)isEffectNoneForIdentifier:(id)arg1;
+ (bool)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2;
+ (id)standardSupportedEffects;

- (void).cxx_destruct;
- (id)CIFilterName;
- (id)description;
- (id)displayName;
- (id)filterIdentifier;
- (bool)isLegacy;
- (bool)isPortrait;
- (long long)latestVersion;
- (long long)lightingVersion;
- (id)newEffectFilter;

@end
