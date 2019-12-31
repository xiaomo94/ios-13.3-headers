/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCKHistoryAnalyzerState : NSManagedObject <PFHistoryAnalyzerObjectState>

@property (nonatomic, readonly) NSManagedObjectID *analyzedObjectID;
@property (nonatomic, retain) NSNumber *entityId;
@property (nonatomic, retain) NSNumber *entityPK;
@property (nonatomic, readonly) NSString *finalChangeAuthor;
@property (nonatomic, readonly) long long finalChangeType;
@property (nonatomic, retain) NSNumber *finalChangeTypeNum;
@property (nonatomic, readonly) NSNumber *finalTransactionNumber;
@property (nonatomic, readonly) long long originalChangeType;
@property (nonatomic, retain) NSNumber *originalChangeTypeNum;
@property (nonatomic, readonly) NSNumber *originalTransactionNumber;
@property (nonatomic, readonly) NSDictionary *tombstone;

+ (id)countAnalyzerStatesInStore:(id)arg1 matchingPredicate:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4;
+ (id)countAnalyzerStatesInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3;
+ (id)entityPath;
+ (id)fetchStateForChangedObjectID:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3;
+ (id)insertAnalyzerStateForChange:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4;
+ (bool)purgeAnalyzedHistoryFromStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3;

- (id)analyzedObjectID;
- (long long)finalChangeType;
- (long long)originalChangeType;
- (id)tombstone;
- (void)updateWithChange:(id)arg1;

@end
