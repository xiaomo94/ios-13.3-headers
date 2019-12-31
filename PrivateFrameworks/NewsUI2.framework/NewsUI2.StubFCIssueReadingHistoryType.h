/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.StubFCIssueReadingHistoryType : Swift._SwiftObject <FCIssueReadingHistoryType>

@property (nonatomic, readonly) NSArray *allEngagedIssueIDs;
@property (nonatomic, readonly) NSString *mostRecentlyVisitedIssueID;
@property (nonatomic, readonly) NSArray *recentlyEngagedIssueIDs;
@property (nonatomic, readonly) NSArray *recentlyVisitedIssueIDs;

- (void)addObserver:(id)arg1;
- (id)allEngagedIssueIDs;
- (id)bookmarkForLastVisitToIssueWithID:(id)arg1;
- (bool)hasIssueWithIDBeenBadged:(id)arg1;
- (bool)hasIssueWithIDBeenEngaged:(id)arg1;
- (bool)hasIssueWithIDBeenVisited:(id)arg1;
- (id)lastEngagedDateForIssueWithID:(id)arg1;
- (id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)arg1;
- (id)lastVisitedDateForIssueWithID:(id)arg1;
- (void)markIssueAsBadgedWithID:(id)arg1;
- (void)markIssueAsEngagedWithID:(id)arg1;
- (void)markIssueAsRemovedFromMyMagazinesWithID:(id)arg1;
- (void)markIssueWithID:(id)arg1 asVisitedWithBookmark:(id)arg2;
- (id)mostRecentlyVisitedIssueID;
- (id)recentlyEngagedIssueIDs;
- (id)recentlyVisitedIssueIDs;
- (void)removeObserver:(id)arg1;

@end
