/* Generated by RuntimeBrowser.
 */

@protocol MDIndexer <CSSearchableIndexInterface>

@required

- (void)clientDidCheckin:(void *)arg1 protectionClass:(void *)arg2 service:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, <CSSearchableIndexServiceInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CSIndexJob *, NSError *, void*
- (double)lastUpdateTime;
- (void)runMigration;
- (void)userPerformedAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2 protectionClass:(NSString *)arg3 forBundleID:(NSString *)arg4;

@optional

- (void)deleteActionsBeforeTime:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteActionsWithIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteAllInteractionsWithBundleID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteAllSearchableItemsWithBundleID:(void *)arg1 protectionClass:(void *)arg2 shouldGC:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteAllUserActivities:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<CSIndexExtensionDelegate> *)extensionDelegate;
- (void)recordEngagementForBundleID:(NSString *)arg1 uniqueIdentifier:(NSString *)arg2 protectionClass:(NSString *)arg3 userQuery:(NSString *)arg4 date:(NSDate *)arg5;
- (void)setExtensionDelegate:(id <CSIndexExtensionDelegate>)arg1;
- (SPCoreSpotlightTask *)startQuery:(void *)arg1 withContext:(void *)arg2 eventHandler:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 21: NSString *, CSSearchQueryContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void*, id /* block */, int, struct { union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; struct { void *x_2_2_1; unsigned long long x_2_2_2; } x_1_1_2; struct { char *x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; struct { char *x_4_2_1; unsigned int x_4_2_2; } x_1_1_4; char *x_1_1_5; bool x_1_1_6; unsigned char x_1_1_7; unsigned short x_1_1_8; unsigned int x_1_1_9; unsigned long long x_1_1_10; void*x_1_1_11; BOOL x_1_1_12; short x_1_1_13; int x_1_1_14; long long x_1_1_15; void*x_1_1_16; double x_1_1_17; float x_1_1_18; double x_1_1_19; long long x_1_1_20; void *x_1_1_21; } x1; }, unsigned long long, void*, void*, id /* block */, void*, void, id /* block */, int, unsigned long long, struct __MDStoreOIDArray { }*, struct __MDPlistBytes { }*, NSString *, void*
- (SPCoreSpotlightTask *)startQuery:(void *)arg1 withContext:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 12: NSString *, CSSearchQueryContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned long long, struct __MDStoreOIDArray { }*, struct __MDPlistBytes { }*, NSString *, void*
- (void)startQueryTask:(SPCoreSpotlightTask *)arg1;
- (SPCoreSpotlightTask *)startQueryWithQueryString:(void *)arg1 queryContext:(void *)arg2 eventHandler:(void *)arg3 resultsHandler:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 27: NSString *, CSSearchQueryContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void*, id /* block */, int, struct { union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; struct { void *x_2_2_1; unsigned long long x_2_2_2; } x_1_1_2; struct { char *x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; struct { char *x_4_2_1; unsigned int x_4_2_2; } x_1_1_4; char *x_1_1_5; bool x_1_1_6; unsigned char x_1_1_7; unsigned short x_1_1_8; unsigned int x_1_1_9; unsigned long long x_1_1_10; void*x_1_1_11; BOOL x_1_1_12; short x_1_1_13; int x_1_1_14; long long x_1_1_15; void*x_1_1_16; double x_1_1_17; float x_1_1_18; double x_1_1_19; long long x_1_1_20; void *x_1_1_21; } x1; }, unsigned long long, void*, void*, id /* block */, void*, void, id /* block */, int, unsigned long long, struct __MDStoreOIDArray { }*, struct __MDPlistBytes { }*, NSString *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (SPCoreSpotlightTask *)taskForQueryWithQueryString:(void *)arg1 queryContext:(void *)arg2 eventHandler:(void *)arg3 resultsHandler:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 27: NSString *, CSSearchQueryContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void*, id /* block */, int, struct { union { struct { void *x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; struct { void *x_2_2_1; unsigned long long x_2_2_2; } x_1_1_2; struct { char *x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; struct { char *x_4_2_1; unsigned int x_4_2_2; } x_1_1_4; char *x_1_1_5; bool x_1_1_6; unsigned char x_1_1_7; unsigned short x_1_1_8; unsigned int x_1_1_9; unsigned long long x_1_1_10; void*x_1_1_11; BOOL x_1_1_12; short x_1_1_13; int x_1_1_14; long long x_1_1_15; void*x_1_1_16; double x_1_1_17; float x_1_1_18; double x_1_1_19; long long x_1_1_20; void *x_1_1_21; } x1; }, unsigned long long, void*, void*, id /* block */, void*, void, id /* block */, int, unsigned long long, struct __MDStoreOIDArray { }*, struct __MDPlistBytes { }*, NSString *, void*, id /* block */, void*, void, id /* block */, NSError *, void*

@end
