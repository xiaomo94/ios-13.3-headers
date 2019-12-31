/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUISidebandMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal> {
    NSManagedObjectID * _managedObjectID;
    VUIMediaEntityType * _mediaEntityType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSManagedObjectID *managedObjectID;
@property (nonatomic, copy) VUIMediaEntityType *mediaEntityType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithManagedObjectID:(id)arg1 mediaEntityType:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)managedObjectID;
- (id)mediaEntityType;
- (void)setManagedObjectID:(id)arg1;
- (void)setMediaEntityType:(id)arg1;

@end
