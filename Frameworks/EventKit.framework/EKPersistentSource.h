/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentSource : EKPersistentObject {
    EKFrozenReminderSource * _reminderSource;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, copy) NSNumber *defaultAlarmOffset;
@property (nonatomic) bool disabled;
@property (nonatomic, copy) NSString *externalID;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic) bool onlyCreatorCanModify;
@property (nonatomic) int preferredEventPrivateValue;
@property (retain) EKFrozenReminderSource *reminderSource;
@property (nonatomic) long long sourceType;
@property (nonatomic) int strictestEventPrivateValue;
@property (nonatomic, copy) NSString *title;

+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)relations;

- (void).cxx_destruct;
- (id)UUID;
- (id)constraints;
- (id)constraintsDescriptionPath;
- (id)creatorBundleID;
- (id)creatorCodeSigningIdentity;
- (id)defaultAlarmOffset;
- (id)delegatedAccountOwnerStoreID;
- (id)description;
- (bool)disabled;
- (int)entityType;
- (id)externalID;
- (id)externalModificationTag;
- (int)flags;
- (id)lastSyncEndDate;
- (unsigned long long)lastSyncError;
- (id)lastSyncStartDate;
- (bool)onlyCreatorCanModify;
- (int)preferredEventPrivateValue;
- (id)reminderSource;
- (void)setConstraintsDescriptionPath:(id)arg1;
- (void)setCreatorBundleID:(id)arg1;
- (void)setCreatorCodeSigningIdentity:(id)arg1;
- (void)setDefaultAlarmOffset:(id)arg1;
- (void)setDelegatedAccountOwnerStoreID:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setFlags:(int)arg1;
- (void)setLastSyncEndDate:(id)arg1;
- (void)setLastSyncError:(unsigned long long)arg1;
- (void)setLastSyncStartDate:(id)arg1;
- (void)setOnlyCreatorCanModify:(bool)arg1;
- (void)setPreferredEventPrivateValue:(int)arg1;
- (void)setReminderSource:(id)arg1;
- (void)setShowsNotifications:(bool)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setStrictestEventPrivateValue:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUID:(id)arg1;
- (bool)showsNotifications;
- (long long)sourceType;
- (int)strictestEventPrivateValue;
- (id)title;

@end
