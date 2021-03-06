/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRCarPlayAppPolicyEvaluator : NSObject {
    CRCarPlayAppBlacklist * _blacklist;
    bool  _geoSupported;
    CARSessionStatus * _sessionStatus;
}

@property (nonatomic, retain) CRCarPlayAppBlacklist *blacklist;
@property (getter=isGeoSupported, nonatomic) bool geoSupported;

+ (id)_carIntentIdentifiers;

- (void).cxx_destruct;
- (bool)_appWithDeclaration:(id)arg1 supportsAllIntents:(id)arg2;
- (bool)_appWithDeclaration:(id)arg1 supportsAnyIntents:(id)arg2;
- (unsigned long long)_applicationCategoryForAppDeclaration:(id)arg1 policy:(id)arg2;
- (id)_sessionStatus;
- (id)_vehicleProtocolsForCertificateSerial:(id)arg1;
- (bool)_vehicleProtocolsIntersectAppProtocols:(id)arg1 certificateSerial:(id)arg2;
- (id)blacklist;
- (id)effectivePolicyForAppDeclaration:(id)arg1;
- (id)effectivePolicyForAppDeclaration:(id)arg1 inVehicleWithCertificateSerial:(id)arg2;
- (void)fetchApplicationBundleIdentifiersForCarIntents:(id /* block */)arg1;
- (id)init;
- (bool)isGeoSupported;
- (void)setBlacklist:(id)arg1;
- (void)setGeoSupported:(bool)arg1;

@end
