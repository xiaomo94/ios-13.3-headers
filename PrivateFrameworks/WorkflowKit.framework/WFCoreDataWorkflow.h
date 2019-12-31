/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFCoreDataWorkflow : NSManagedObject <WFRecordStorage>

@property (nonatomic, retain) NSDictionary *accessResourcePermissions;
@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, copy) NSString *actionsDescription;
@property (nonatomic, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, retain) WFCoreDataWorkflow *conflictOf;
@property (nonatomic, retain) NSSet *conflicts;
@property (nonatomic, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deleted;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hiddenFromLibraryAndSync;
@property (nonatomic, retain) WFCoreDataWorkflowIcon *icon;
@property (nonatomic, retain) NSArray *importQuestions;
@property (nonatomic, retain) NSArray *inputClasses;
@property (nonatomic, copy) NSString *lastMigratedClientVersion;
@property (nonatomic, copy) NSString *lastSavedOnDeviceName;
@property (nonatomic) long long lastSyncedHash;
@property (nonatomic, retain) WFCoreDataWorkflowLayout *layout;
@property (nonatomic, copy) NSString *minimumClientVersion;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, retain) WFCoreDataWorkflowQuarantine *quarantine;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *triggers;
@property (nonatomic, retain) NSArray *trustedDomains;
@property (nonatomic, copy) NSString *workflowID;
@property (nonatomic, retain) WFWorkflowIcon *workflowIcon;
@property (nonatomic, retain) WFWorkflowQuarantine *workflowQuarantine;
@property (nonatomic, copy) NSString *workflowSubtitle;
@property (nonatomic, retain) NSArray *workflowTypes;

+ (id)fetchRequest;

- (void)coordinatePropertyUpdatesForRecord:(id)arg1 duringBlock:(id /* block */)arg2;
- (id)descriptor;
- (id)recordPropertyMap;
- (void)setWorkflowIcon:(id)arg1;
- (void)setWorkflowQuarantine:(id)arg1;
- (id)workflowIcon;
- (id)workflowQuarantine;

@end
