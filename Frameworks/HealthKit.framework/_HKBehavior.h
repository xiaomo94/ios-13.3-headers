/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKBehavior : NSObject {
    bool  _collectsCalorimetry;
    bool  _collectsData;
    bool  _deviceSupportsHeartRateMotionContexts;
    struct _HKLazyLoader<bool> { 
        bool _value; 
        bool _hasLoaded; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _loadLock; 
    }  _futureMigrationsEnabled;
    bool  _hasOntologyFeaturesEnabled;
    bool  _hasTelephonyCapability;
    bool  _healthAppHidden;
    bool  _ignoreOntologyAssetAvailabilityChanges;
    bool  _ignoreOntologyVersionCheckDuringReferenceOntologyImport;
    bool  _isAppleInternalInstall;
    bool  _isAppleWatch;
    bool  _isCompanionCapable;
    bool  _isDeviceSupported;
    bool  _isRunningStoreDemoMode;
    bool  _isTestingDevice;
    bool  _ontologyAvailabilityRequiresAccounts;
    NSNumber * _overriddenEnableManateeForHSA2Accounts;
    NSNumber * _overriddenSupportsSwimmingWorkoutSessions;
    bool  _performsWorkoutCondensation;
    bool  _runningInStoreDemoModeF201;
    bool  _showSensitiveLogItems;
    bool  _supportsAWDMetricSubmission;
    bool  _supportsActivitySharing;
    bool  _supportsAppSubscriptions;
    bool  _supportsFeatureAvailabilityAssets;
    bool  _supportsHeartRateDataCollection;
    bool  _supportsNanoSync;
    bool  _supportsSampleExpiration;
    bool  _supportsWorkouts;
    bool  _unitTest_useEmbeddedOntology;
    bool  _unitTest_useEmbeddedOntologyAsset;
}

@property (nonatomic) bool collectsCalorimetry;
@property (nonatomic) bool collectsData;
@property (nonatomic, readonly, copy) NSString *currentDeviceClass;
@property (nonatomic, readonly, copy) NSString *currentDeviceDisplayName;
@property (nonatomic, readonly, copy) NSString *currentDeviceManufacturer;
@property (nonatomic, readonly, copy) NSString *currentDeviceName;
@property (nonatomic, readonly, copy) NSString *currentDeviceProductType;
@property (nonatomic, readonly, copy) NSString *currentDeviceRegionCode;
@property (nonatomic, readonly) unsigned long long currentDiskSpaceAvailable;
@property (nonatomic, readonly) NSDictionary *currentDiskUsage;
@property (nonatomic, readonly, copy) NSString *currentInternalDeviceModel;
@property (nonatomic, readonly, copy) NSString *currentOSBuild;
@property (nonatomic, readonly, copy) NSString *currentOSName;
@property (nonatomic, readonly, copy) NSString *currentOSVersion;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } currentOSVersionStruct;
@property (nonatomic) bool deviceSupportsHeartRateMotionContexts;
@property (nonatomic) bool futureMigrationsEnabled;
@property (nonatomic) bool hasOntologyFeaturesEnabled;
@property (nonatomic) bool hasTelephonyCapability;
@property (nonatomic) bool healthAppHidden;
@property (nonatomic) bool ignoreOntologyAssetAvailabilityChanges;
@property (nonatomic) bool ignoreOntologyVersionCheckDuringReferenceOntologyImport;
@property (nonatomic) bool isAppleInternalInstall;
@property (nonatomic) bool isAppleWatch;
@property (nonatomic) bool isCompanionCapable;
@property (nonatomic, readonly) bool isCurrentDeviceN2XA;
@property (nonatomic, readonly) bool isCurrentDeviceSeries3OrOlder;
@property (nonatomic) bool isDeviceSupported;
@property (nonatomic, readonly) bool isRunningStoreDemoMode;
@property (nonatomic) bool isTestingDevice;
@property (nonatomic, readonly, copy) NSTimeZone *localTimeZone;
@property (getter=isManateeEnabledForHSA2Accounts, nonatomic, readonly) bool manateeEnabledForHSA2Accounts;
@property (nonatomic) bool ontologyAvailabilityRequiresAccounts;
@property (nonatomic) bool performsWorkoutCondensation;
@property (nonatomic, readonly) bool runningInStoreDemoModeF201;
@property (nonatomic) bool showSensitiveLogItems;
@property (nonatomic) bool supportsAWDMetricSubmission;
@property (nonatomic) bool supportsActivitySharing;
@property (nonatomic) bool supportsAppSubscriptions;
@property (nonatomic, readonly) bool supportsCloudSync;
@property (nonatomic, readonly) bool supportsFeatureAvailabilityAssets;
@property (nonatomic) bool supportsHeartRateDataCollection;
@property (nonatomic) bool supportsNanoSync;
@property (nonatomic) bool supportsSampleExpiration;
@property (nonatomic) bool supportsSwimmingWorkoutSessions;
@property (nonatomic) bool supportsWorkouts;
@property (nonatomic, readonly) unsigned long long totalDiskCapacity;
@property (nonatomic) bool unitTest_useEmbeddedOntology;
@property (nonatomic) bool unitTest_useEmbeddedOntologyAsset;

+ (bool)_condensesHeartRateSamples;
+ (bool)_deviceSupportsHeartRateMotionContexts;
+ (bool)_futureMigrationsEnabled;
+ (bool)_hasCompletedBuddyWithVersion:(long long)arg1;
+ (bool)_hasTelephonyCapability;
+ (bool)_healthAppHidden;
+ (bool)_isAppleInternalInstall;
+ (bool)_isDeviceSupported;
+ (bool)_isForceBuddyEnabled;
+ (bool)_isProductTypeSeries3OrOlder:(id)arg1;
+ (bool)_isRunningStoreDemoMode;
+ (bool)_readEnableManateeForHSA2AccountsFromHealthdDefaults;
+ (bool)_runningInStoreDemoModeF201;
+ (long long)_runningInStoreDemoModeFProgramNumber;
+ (void)_setHasCompletedBuddyWithVersion:(long long)arg1;
+ (bool)_shouldShowBuddy;
+ (bool)_showSensitiveLogItems;
+ (bool)activePairedWatchHasSmartFitnessCoaching;
+ (bool)activePairedWatchSupportsBradycardiaDetection;
+ (bool)activePairedWatchSupportsHeartRateMotionContexts;
+ (bool)allPairedWatchesSupportBradycardiaDetection;
+ (bool)allPairedWatchesSupportHeartRateMotionContexts;
+ (bool)anyPairedWatchHasFlightsClimbedCapability;
+ (id)currentDeviceClass;
+ (id)currentDeviceDisplayName;
+ (id)currentDeviceManufacturer;
+ (id)currentDeviceName;
+ (id)currentDeviceProductType;
+ (id)currentDeviceRegionCode;
+ (id)currentDeviceReleaseType;
+ (id)currentOSBuild;
+ (id)currentOSVersion;
+ (struct { long long x1; long long x2; long long x3; })currentOSVersionStruct;
+ (bool)hasCompletedBuddyWithVersion:(long long)arg1;
+ (bool)hasPairedWatch;
+ (bool)hasTelephonyCapability;
+ (bool)isAppleInternalInstall;
+ (bool)isDeviceSupported;
+ (bool)isManateeEnabledByDefault;
+ (bool)isRunningStoreDemoMode;
+ (bool)isTestingDevice;
+ (int)nanoSyncProtocolVersionForCompanionSystemBuildVersion:(id)arg1;
+ (int)nanoSyncProtocolVersionForWatchSystemBuildVersion:(id)arg1;
+ (void)resetSharedBehavior;
+ (bool)runningInStoreDemoModeF201;
+ (void)setForceBuddy:(bool)arg1;
+ (void)setHasCompletedBuddyWithVersion:(long long)arg1;
+ (void)setSharedBehavior:(id)arg1;
+ (id)sharedBehavior;
+ (bool)shouldShowBuddy;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_hasProductTypePrefix:(id)arg1;
- (bool)collectsCalorimetry;
- (bool)collectsData;
- (id)currentDeviceClass;
- (id)currentDeviceDisplayName;
- (id)currentDeviceManufacturer;
- (id)currentDeviceName;
- (id)currentDeviceProductType;
- (id)currentDeviceRegionCode;
- (id)currentDeviceReleaseType;
- (unsigned long long)currentDiskSpaceAvailable;
- (id)currentDiskUsage;
- (id)currentInternalDeviceModel;
- (id)currentOSBuild;
- (id)currentOSName;
- (id)currentOSVersion;
- (struct { long long x1; long long x2; long long x3; })currentOSVersionStruct;
- (bool)deviceSupportsHeartRateMotionContexts;
- (bool)futureMigrationsEnabled;
- (bool)hasOntologyFeaturesEnabled;
- (bool)hasTelephonyCapability;
- (bool)healthAppHidden;
- (bool)ignoreOntologyAssetAvailabilityChanges;
- (bool)ignoreOntologyVersionCheckDuringReferenceOntologyImport;
- (id)init;
- (bool)isAppleInternalInstall;
- (bool)isAppleWatch;
- (bool)isCompanionCapable;
- (bool)isCurrentDeviceN2XA;
- (bool)isCurrentDeviceSeries3OrOlder;
- (bool)isDeviceSupported;
- (bool)isManateeEnabledForHSA2Accounts;
- (bool)isRunningStoreDemoMode;
- (bool)isTestingDevice;
- (id)localTimeZone;
- (bool)ontologyAvailabilityRequiresAccounts;
- (bool)performsWorkoutCondensation;
- (bool)runningInStoreDemoModeF201;
- (void)setCollectsCalorimetry:(bool)arg1;
- (void)setCollectsData:(bool)arg1;
- (void)setDeviceSupportsHeartRateMotionContexts:(bool)arg1;
- (void)setFutureMigrationsEnabled:(bool)arg1;
- (void)setHasOntologyFeaturesEnabled:(bool)arg1;
- (void)setHasTelephonyCapability:(bool)arg1;
- (void)setHealthAppHidden:(bool)arg1;
- (void)setIgnoreOntologyAssetAvailabilityChanges:(bool)arg1;
- (void)setIgnoreOntologyVersionCheckDuringReferenceOntologyImport:(bool)arg1;
- (void)setIsAppleInternalInstall:(bool)arg1;
- (void)setIsAppleWatch:(bool)arg1;
- (void)setIsCompanionCapable:(bool)arg1;
- (void)setIsDeviceSupported:(bool)arg1;
- (void)setIsTestingDevice:(bool)arg1;
- (void)setManateeEnabledForHSA2AccountsOverride:(bool)arg1;
- (void)setOntologyAvailabilityRequiresAccounts:(bool)arg1;
- (void)setPerformsWorkoutCondensation:(bool)arg1;
- (void)setShowSensitiveLogItems:(bool)arg1;
- (void)setSupportsAWDMetricSubmission:(bool)arg1;
- (void)setSupportsActivitySharing:(bool)arg1;
- (void)setSupportsAppSubscriptions:(bool)arg1;
- (void)setSupportsHeartRateDataCollection:(bool)arg1;
- (void)setSupportsNanoSync:(bool)arg1;
- (void)setSupportsSampleExpiration:(bool)arg1;
- (void)setSupportsSwimmingWorkoutSessions:(bool)arg1;
- (void)setSupportsWorkouts:(bool)arg1;
- (void)setUnitTest_useEmbeddedOntology:(bool)arg1;
- (void)setUnitTest_useEmbeddedOntologyAsset:(bool)arg1;
- (bool)showSensitiveLogItems;
- (bool)supportsAWDMetricSubmission;
- (bool)supportsActivitySharing;
- (bool)supportsAppSubscriptions;
- (bool)supportsCloudSync;
- (bool)supportsFeatureAvailabilityAssets;
- (bool)supportsHeartRateDataCollection;
- (bool)supportsNanoSync;
- (bool)supportsSampleExpiration;
- (bool)supportsSwimmingWorkoutSessions;
- (bool)supportsWorkouts;
- (unsigned long long)totalDiskCapacity;
- (bool)unitTest_useEmbeddedOntology;
- (bool)unitTest_useEmbeddedOntologyAsset;

@end
