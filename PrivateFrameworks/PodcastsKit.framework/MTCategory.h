/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
 */

@interface MTCategory : NSManagedObject

@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long parentStoreId;
@property (nonatomic, retain) NSString *parentUuid;
@property (nonatomic) long long storeId;
@property (nonatomic, retain) NSString *uuid;

+ (id)categoryForName:(id)arg1 managedObjectContext:(id)arg2 insertIfNeeded:(bool)arg3;
+ (id)categoryUuidForName:(id)arg1 managedObjectContext:(id)arg2;
+ (id)rootCategoriesInManagedObjectContext:(id)arg1;

- (void)addPodcastUuid:(id)arg1;
- (id)parentId;
- (id)podcastUuids;
- (void)setParentUuid:(id)arg1;
- (id)subCategoryIds;

@end
