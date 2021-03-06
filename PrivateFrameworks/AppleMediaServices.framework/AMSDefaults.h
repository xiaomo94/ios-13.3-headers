/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDefaults : NSObject

+ (bool)QAMode;
+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2;
+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2 domain:(struct __CFString { }*)arg3;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(struct __CFString { }*)arg3;
+ (double)_randomDouble;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;
+ (void)_setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;
+ (id)_valueForKey:(id)arg1;
+ (id)_valueForKey:(id)arg1 domain:(struct __CFString { }*)arg2;
+ (bool)allowDuplicateAccounts;
+ (bool)allowUpsellEnrollmentForAppliedAccounts;
+ (bool)alwaysSendCacheBuster;
+ (bool)alwaysSendGUID;
+ (long long)applePayClassic;
+ (id)authenticationStarted;
+ (id)bagOverrides;
+ (id)bagURLCookies;
+ (long long)cardEnrollmentAutomatic;
+ (long long)cardEnrollmentManual;
+ (long long)cardEnrollmentSilent;
+ (long long)cardEnrollmentUpsell;
+ (void)cleanupSampleSessions;
+ (id)defaultPaymentPassIdentifier;
+ (long long)deviceBiometricsState;
+ (id)deviceOfferEligibility;
+ (id)deviceOffersSerialNumber;
+ (bool)didRetrieveDeviceOffers;
+ (bool)disableHARLogging;
+ (bool)disablePrivacyAcknowledgement;
+ (bool)enableCameraRedeem;
+ (bool)enablePurchaseQueue;
+ (id)extendedBiometricACLVersion;
+ (long long)forceLoadUrlMetrics;
+ (bool)ignoreServerTrustEvaluation;
+ (bool)includeFullRequestInHARLogging;
+ (bool)includeFullResponseInHARLogging;
+ (id)mediaTokenOverride;
+ (id)mescalCertExpiration;
+ (id)metricsCanaryIdentifier;
+ (id)metricsTimingWindowStartTime;
+ (bool)migratedDeviceOffers;
+ (bool)migratedToNewCookieStorage;
+ (id)multiUserContainerID;
+ (id)multiUserSilentPreferredFailureTimes;
+ (bool)perfomedDeviceOfferSetup;
+ (id)primaryBiometricACLVersion;
+ (long long)pushEnvironment;
+ (long long)reversePushEnabled;
+ (void)setAllowDuplicateAccounts:(bool)arg1;
+ (void)setAllowUpsellEnrollmentForAppliedAccounts:(bool)arg1;
+ (void)setAlwaysSendCacheBuster:(bool)arg1;
+ (void)setAlwaysSendGUID:(bool)arg1;
+ (void)setApplePayClassic:(long long)arg1;
+ (void)setAuthenticationStarted:(id)arg1;
+ (void)setBagOverrides:(id)arg1;
+ (void)setBagURLCookies:(id)arg1;
+ (void)setCardEnrollmentAutomatic:(long long)arg1;
+ (void)setCardEnrollmentManual:(long long)arg1;
+ (void)setCardEnrollmentSilent:(long long)arg1;
+ (void)setCardEnrollmentUpsell:(long long)arg1;
+ (void)setDefaultPaymentPassIdentifier:(id)arg1;
+ (void)setDeviceBiometricsState:(long long)arg1;
+ (void)setDeviceOfferEligibility:(id)arg1;
+ (void)setDidRetrieveDeviceOffers:(bool)arg1;
+ (void)setDisableHARLogging:(bool)arg1;
+ (void)setDisablePrivacyAcknowledgement:(bool)arg1;
+ (void)setEnableCameraRedeem:(bool)arg1;
+ (void)setEnablePurchaseQueue:(bool)arg1;
+ (void)setExtendedBiometricACLVersion:(id)arg1;
+ (void)setForceLoadUrlMetrics:(long long)arg1;
+ (void)setIgnoreServerTrustEvaluation:(bool)arg1;
+ (void)setIncludeFullRequestInHARLogging:(bool)arg1;
+ (void)setIncludeFullResponseInHARLogging:(bool)arg1;
+ (void)setMediaTokenOverride:(id)arg1;
+ (void)setMescalCertExpiration:(id)arg1;
+ (void)setMetricsCanaryIdentifier:(id)arg1;
+ (void)setMetricsTimingWindowStartTime:(id)arg1;
+ (void)setMigratedDeviceOffers:(bool)arg1;
+ (void)setMigratedToNewCookieStorage:(bool)arg1;
+ (void)setMultiUserSilentPreferredFailureTimes:(id)arg1;
+ (void)setPerfomedDeviceOfferSetup:(bool)arg1;
+ (void)setPrimaryBiometricACLVersion:(id)arg1;
+ (void)setPushEnvironment:(long long)arg1;
+ (void)setQAMode:(bool)arg1;
+ (void)setReversePushEnabled:(long long)arg1;
+ (void)setSharedDatabaseChangeToken:(id)arg1;
+ (void)setShowSandboxAccountUI:(bool)arg1;
+ (void)setStorefrontSuffixes:(id)arg1;
+ (id)sharedDatabaseChangeToken;
+ (bool)shouldSampleWithPercentage:(double)arg1 sessionDuration:(double)arg2 identifier:(id)arg3;
+ (bool)shouldSampleWithPercentageValue:(id)arg1 sessionDurationValue:(id)arg2 identifier:(id)arg3;
+ (bool)showSandboxAccountUI;
+ (bool)showSpyglassPurchases;
+ (bool)ss_ignoreServerTrustEvaluation;
+ (id)storefrontSuffixes;
+ (void)syncWithBlock:(id /* block */)arg1;
+ (bool)useNewAccountStore;
+ (bool)useNewCookieStorage;

@end
