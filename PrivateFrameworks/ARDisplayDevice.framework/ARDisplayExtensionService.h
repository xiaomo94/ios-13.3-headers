/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARDisplayDevice.framework/ARDisplayDevice
 */

@interface ARDisplayExtensionService : ARDisplayService {
    NSExtension * _extension;
    NSUUID * _sessionUUID;
}

@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) NSUUID *sessionUUID;

+ (id)defaultConfig;
+ (id)defaultConfiguration;
+ (id)defaultConfigurationForHME:(id)arg1;
+ (id)defaultFranCConfig;
+ (id)defaultLuckConfig;
+ (id)defaultNovGartaConfiguration;
+ (id)fetchContinuously:(id /* block */)arg1;
+ (void)fetchServicesWithCompletionHandler:(id /* block */)arg1;
+ (void)getConfig:(id)arg1 completion:(id /* block */)arg2;
+ (void)getConfiguration:(id)arg1 completion:(id /* block */)arg2;
+ (id)handheldConfig;
+ (id)handheldConfiguration;
+ (id)nonDistortConfig;
+ (id)nonDistortConfiguration;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenDimensionsAdjustedForLPM;
+ (void)stopFetching:(id)arg1;

- (void).cxx_destruct;
- (void)beginUsingWithCompletionHandler:(id /* block */)arg1;
- (id)extension;
- (id)identifier;
- (id)init;
- (id)initWithExtension:(id)arg1;
- (id)productID;
- (id)productName;
- (id)sessionUUID;
- (void)setExtension:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (id)vendor;
- (id)vendorID;
- (id)version;

@end
