/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSectionConfigurationItem : NSObject {
    NSArray * _additionalBridgeSectionIDs;
    bool  _alwaysAlert;
    bool  _alwaysSyncSettings;
    bool  _applyWhitelistToChildSections;
    NSArray * _blacklistedCategories;
    unsigned long long  _coordinationType;
    bool  _hasLegacyMapInContext;
    bool  _hasLegacyMapInUserInfo;
    bool  _optOutOfAttachmentTransmission;
    bool  _optOutOfNotificationTuning;
    bool  _optOutOfSettingsCoordination;
    bool  _optOutOfSubtitleRemovalForOlderWatches;
    bool  _optOutOfWaitForUserIdle;
    bool  _overrideAppliesToCoordinationOptOut;
    bool  _shouldUsePhoneExpirationDate;
    NSNumber * _watchVersionThatUsesAttachmentURL;
    NSNumber * _watchVersionThatUsesUserInfoForContext;
    NSArray * _whitelistedCategories;
    NSArray * _whitelistedSubtypes;
}

@property (nonatomic, retain) NSArray *additionalBridgeSectionIDs;
@property (nonatomic) bool alwaysAlert;
@property (nonatomic) bool alwaysSyncSettings;
@property (nonatomic) bool applyWhitelistToChildSections;
@property (nonatomic, retain) NSArray *blacklistedCategories;
@property unsigned long long coordinationType;
@property (nonatomic) bool hasLegacyMapInContext;
@property (nonatomic) bool hasLegacyMapInUserInfo;
@property (nonatomic) bool optOutOfAttachmentTransmission;
@property (nonatomic) bool optOutOfNotificationTuning;
@property (nonatomic) bool optOutOfSettingsCoordination;
@property (nonatomic) bool optOutOfSubtitleRemovalForOlderWatches;
@property (nonatomic) bool optOutOfWaitForUserIdle;
@property (nonatomic) bool overrideAppliesToCoordinationOptOut;
@property (nonatomic) bool shouldUsePhoneExpirationDate;
@property (nonatomic, retain) NSNumber *watchVersionThatUsesAttachmentURL;
@property (nonatomic, retain) NSNumber *watchVersionThatUsesUserInfoForContext;
@property (nonatomic, retain) NSArray *whitelistedCategories;
@property (nonatomic, retain) NSArray *whitelistedSubtypes;

- (void).cxx_destruct;
- (id)additionalBridgeSectionIDs;
- (bool)alwaysAlert;
- (bool)alwaysSyncSettings;
- (bool)applyWhitelistToChildSections;
- (id)blacklistedCategories;
- (unsigned long long)coordinationType;
- (unsigned long long)coordinationTypeWithSubtype:(long long)arg1;
- (id)description;
- (bool)hasDisplayedCriticalBulletins;
- (bool)hasLegacyMapInContext;
- (bool)hasLegacyMapInUserInfo;
- (id)initWithDictionary:(id)arg1;
- (bool)optOutOfAttachmentTransmission;
- (bool)optOutOfNotificationTuning;
- (bool)optOutOfSettingsCoordination;
- (bool)optOutOfSubtitleRemovalForOlderWatches;
- (bool)optOutOfWaitForUserIdle;
- (bool)overrideAppliesToCoordinationOptOut;
- (void)setAdditionalBridgeSectionIDs:(id)arg1;
- (void)setAlwaysAlert:(bool)arg1;
- (void)setAlwaysSyncSettings:(bool)arg1;
- (void)setApplyWhitelistToChildSections:(bool)arg1;
- (void)setBlacklistedCategories:(id)arg1;
- (void)setCoordinationType:(unsigned long long)arg1;
- (void)setHasLegacyMapInContext:(bool)arg1;
- (void)setHasLegacyMapInUserInfo:(bool)arg1;
- (void)setOptOutOfAttachmentTransmission:(bool)arg1;
- (void)setOptOutOfNotificationTuning:(bool)arg1;
- (void)setOptOutOfSettingsCoordination:(bool)arg1;
- (void)setOptOutOfSubtitleRemovalForOlderWatches:(bool)arg1;
- (void)setOptOutOfWaitForUserIdle:(bool)arg1;
- (void)setOverrideAppliesToCoordinationOptOut:(bool)arg1;
- (void)setShouldUsePhoneExpirationDate:(bool)arg1;
- (void)setWatchVersionThatUsesAttachmentURL:(id)arg1;
- (void)setWatchVersionThatUsesUserInfoForContext:(id)arg1;
- (void)setWhitelistedCategories:(id)arg1;
- (void)setWhitelistedSubtypes:(id)arg1;
- (bool)shouldUsePhoneExpirationDate;
- (bool)updateCoordinationType:(unsigned long long)arg1;
- (id)watchVersionThatUsesAttachmentURL;
- (id)watchVersionThatUsesUserInfoForContext;
- (id)whitelistedCategories;
- (id)whitelistedSubtypes;

@end
