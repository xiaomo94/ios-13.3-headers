/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFGalleryWorkflow : NSObject <NSMutableCopying, WFCloudKitItem, WFLoggableObject, WFSortableGalleryObject> {
    CKRecordID * _base;
    NSDate * _createdAt;
    NSNumber * _iconColor;
    WFFileRepresentation * _iconFile;
    NSNumber * _iconGlyph;
    CKRecordID * _identifier;
    NSString * _language;
    NSString * _longDescription;
    NSDate * _modifiedAt;
    NSString * _name;
    NSString * _persistentIdentifier;
    NSNumber * _searchable;
    NSString * _shortDescription;
    WFFileRepresentation * _shortcutFile;
    WFWorkflowRecord * _workflowRecord;
}

@property (nonatomic, readonly) CKRecordID *base;
@property (nonatomic, readonly) NSDate *createdAt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFWorkflowIcon *icon;
@property (nonatomic, retain) NSNumber *iconColor;
@property (nonatomic, readonly) WFFileRepresentation *iconFile;
@property (nonatomic, retain) NSNumber *iconGlyph;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *longDescription;
@property (nonatomic, readonly) NSDate *modifiedAt;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (nonatomic, readonly) NSDictionary *propertiesForEventLogging;
@property (nonatomic, readonly) NSNumber *searchable;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, readonly) WFFileRepresentation *shortcutFile;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFWorkflowRecord *workflowRecord;

+ (id)properties;
+ (id)recordType;

- (void).cxx_destruct;
- (id)base;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdAt;
- (void)ensureFileAssets;
- (unsigned long long)hash;
- (id)icon;
- (id)iconColor;
- (id)iconFile;
- (id)iconGlyph;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)language;
- (id)longDescription;
- (id)modifiedAt;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)persistentIdentifier;
- (id)propertiesForEventLogging;
- (unsigned long long)referenceActionForKey:(id)arg1;
- (id)searchable;
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
- (void)setIconColor:(id)arg1;
- (void)setIconGlyph:(id)arg1;
- (id)sharingURL;
- (id)shortDescription;
- (id)shortcutFile;
- (id)workflowRecord;

@end
