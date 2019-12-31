/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDMessageQueryParser : NSObject {
    EDSearchableIndex * _searchableIndex;
    EFSearchableIndexObjectPropertyMapper * _searchableIndexMapper;
    EFSQLObjectPropertyMapper * _sqlPropertyMapper;
    EDMessageQueryTransformer * _transformer;
}

@property (nonatomic, readonly) EDSearchableIndex *searchableIndex;
@property (nonatomic, readonly) EFSearchableIndexObjectPropertyMapper *searchableIndexMapper;
@property (nonatomic, readonly) EFSQLObjectPropertyMapper *sqlPropertyMapper;
@property (nonatomic, readonly) EDMessageQueryTransformer *transformer;

+ (id)performSearchableIndexQueryPredicate:(id)arg1 propertyMapper:(id)arg2 searchableIndex:(id)arg3;

- (void).cxx_destruct;
- (id)initWithSchema:(id)arg1 protectedSchema:(id)arg2 searchableIndex:(id)arg3 accountsProvider:(id)arg4 vipManager:(id)arg5 messagePersistence:(id)arg6 mailboxPersistence:(id)arg7;
- (id)searchableIndex;
- (id)searchableIndexMapper;
- (id)sqlPropertyMapper;
- (id)sqlQueryForQuery:(id)arg1;
- (id)sqlQueryForQuery:(id)arg1 predicate:(id)arg2;
- (id)transformer;

@end
