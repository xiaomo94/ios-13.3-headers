/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCDNSProxyPayload : MCPayload {
    NSString * _appBundleIdentifier;
    NSString * _providerBundleIdentifier;
    NSDictionary * _providerConfiguration;
}

@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *configurationDictionary;
@property (nonatomic, readonly, copy) NSString *providerBundleIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *providerConfiguration;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)configurationDictionary;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)providerBundleIdentifier;
- (id)providerConfiguration;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
