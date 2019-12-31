/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTPreset : NSObject {
    NSArray * _assets;
    long long  _category;
    NSArray * _dependencies;
    NSString * _identifier;
    float  _intensity;
    bool  _mirrored;
    NSDictionary * _specializationSettings;
    NSDictionary * _tags;
    NSString * _variant;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSString *displayableName;
@property (nonatomic, readonly) bool hasComponent;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedName;
@property (readonly) NSDictionary *specializationSettings;
@property (nonatomic, readonly) NSDictionary *tags;
@property (nonatomic, readonly) UIImage *thumbnail;

+ (id)_colorPresetsForCategory:(long long)arg1 palette:(id)arg2;
+ (id)availablePresetsForCategory:(long long)arg1;
+ (id)colorPresetsForCategory:(long long)arg1;
+ (id)colorPresetsForCategory:(long long)arg1 colorIndex:(unsigned long long)arg2;
+ (void)enumerateVariantDependenciesForComponentType:(long long)arg1 usingBlock:(id /* block */)arg2;
+ (id)findPresetWithIdentifier:(id)arg1 inPresets:(id)arg2;
+ (void)loadPresets;
+ (id)presetWithCategory:(long long)arg1 identifier:(id)arg2;
+ (void)registerVariantNamed:(id)arg1 forComponentType:(long long)arg2;
+ (id)secondaryColorPresetsForCategory:(long long)arg1;

- (void).cxx_destruct;
- (void)applyPresetOnAvatar:(id)arg1;
- (id)assets;
- (id)cache;
- (long long)category;
- (id)colorPresets;
- (id)description;
- (id)displayableName;
- (void)enumeratePresetDependencies:(id /* block */)arg1;
- (void)enumerateVariantDependencies:(id /* block */)arg1;
- (bool)hasComponent;
- (bool)hasDependency;
- (id)identifier;
- (id)init;
- (float)intensity;
- (id)localizedName;
- (struct UIImage { Class x1; }*)maskImage;
- (void)rebuildSpecializationSettings;
- (id)specializationSettings;
- (id)tags;
- (struct UIImage { Class x1; }*)thumbnail;

@end
