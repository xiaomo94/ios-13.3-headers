/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactMetadataPersistentStoreManager : NSObject {
    NSPersistentContainer * _container;
    NSURL * _storeLocation;
}

@property (nonatomic, readonly) NSPersistentContainer *container;
@property (nonatomic, readonly) NSURL *storeLocation;

+ (id)createModel;
+ (id)createPersistentContainer;
+ (id)currentManagedObjectModel;
+ (id)defaultStoreLocation;
+ (id)os_log;

- (void).cxx_destruct;
- (id)container;
- (id)createManagedObjectContext;
- (bool)createStoreDirectoryIfNeeded:(id*)arg1;
- (id)init;
- (id)initWithStoreLocation:(id)arg1;
- (void)performWorkWithManagedObjectContext:(id /* block */)arg1 error:(id*)arg2;
- (id)persistentStoreCoordinator;
- (bool)setupIfNeeded:(id*)arg1;
- (id)storeDescription;
- (id)storeLocation;

@end
