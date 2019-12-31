/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

@interface SRAuthorizationClient : NSObject <SRSensorKitServiceClientAuthorizationListening> {
    NSSet * _actualAuthorizedServices;
    NSXPCConnection * _connection;
    NSMapTable * _listeners;
    bool  _prerequisiteMet;
    int  _registrationToken;
}

@property (copy) NSSet *actualAuthorizedServices;
@property (readonly, copy) NSSet *authorizedServices;
@property (readonly, copy) NSDictionary *bundleIdentifiersPendingAuthorization;
@property (readonly, copy) NSDictionary *bundlePathMap;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) bool dataCollectionEnabled;
@property (nonatomic, readonly) NSArray *legacyResearchStudyBundleIDs;
@property (nonatomic, readonly) NSString *legacyResearchStudyEntitlement;
@property (nonatomic, retain) NSMapTable *listeners;
@property bool prerequisiteMet;
@property int registrationToken;
@property (nonatomic, readonly, copy) NSString *requiredAppDataDeepLinkIdentifier;
@property (nonatomic, readonly, copy) NSString *requiredAppIdentifier;
@property (nonatomic, readonly, copy) NSString *requiredAppStudiesDeepLinkIdentifier;
@property (nonatomic, readonly, copy) NSString *requiredAppiTunesIdentifier;
@property (nonatomic) bool requiredOnboardingCompleted;
@property (nonatomic, readonly, copy) NSString *studyBundleIdPrefix;

+ (void)initialize;
+ (id)sharedInstance;

- (id)actualAuthorizedServices;
- (void)addBundle:(id)arg1 toPendingAuthorizations:(id)arg2;
- (void)addListener:(id)arg1;
- (void)addListener:(id)arg1 forBundleId:(id)arg2;
- (void)addToBundlePathMap:(id)arg1;
- (id)authorizedServices;
- (void)authorizedServicesDidChange:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)bundleIdentifiersPendingAuthorization;
- (id)bundlePathMap;
- (id)connection;
- (bool)dataCollectionEnabled;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (id)legacyResearchStudyBundleIDs;
- (id)legacyResearchStudyEntitlement;
- (id)listeners;
- (void)notifyAuthorizationChangeForBundleIdentifier:(id)arg1;
- (bool)prerequisiteMet;
- (void)registerForPrerequisitesUpdated;
- (int)registrationToken;
- (void)removeBundle:(id)arg1 fromPendingAuthorizations:(id)arg2;
- (void)removeFromBundlePathMap:(id)arg1;
- (void)removeListener:(id)arg1;
- (id)requiredAppDataDeepLinkIdentifier;
- (id)requiredAppIdentifier;
- (id)requiredAppStudiesDeepLinkIdentifier;
- (id)requiredAppiTunesIdentifier;
- (bool)requiredOnboardingCompleted;
- (id)serviceStartTimeForService:(id)arg1;
- (void)setActualAuthorizedServices:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDataCollectionEnabled:(bool)arg1;
- (void)setListeners:(id)arg1;
- (void)setPrerequisiteMet:(bool)arg1;
- (void)setRegistrationToken:(int)arg1;
- (void)setRequiredOnboardingCompleted:(bool)arg1;
- (void)setServiceStartTimeForService:(id)arg1;
- (id)studyBundleIdPrefix;
- (void)unregisterForPrerequisitesUpdated;

@end
