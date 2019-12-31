/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSURLCompletionMatch : NSObject <WBSCompletionListItem> {
    long long  _matchLocation;
    long long  _parsecQueryID;
    SFSearchResult * _sfSearchResultValue;
    NSString * _userInput;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (nonatomic, readonly) long long matchLocation;
@property (nonatomic, readonly) bool matchLocationIsInURL;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic, readonly) long long parsecQueryID;
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (nonatomic, retain) WBSQuerySuggestion *siriSuggestion;
@property (readonly) Class superclass;
@property (getter=isTopHit, nonatomic, readonly) bool topHit;

+ (long long)matchLocationForString:(id)arg1 inTitle:(id)arg2;
+ (long long)matchLocationForString:(id)arg1 inURLString:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)engagementDestination;
- (id)initWithMatchLocation:(long long)arg1 userInput:(id)arg2 forQueryID:(long long)arg3;
- (bool)isTopHit;
- (long long)matchLocation;
- (bool)matchLocationIsInURL;
- (id)matchingStringWithUserTypedPrefix:(id)arg1;
- (id)originalURLString;
- (id)parsecDomainIdentifier;
- (long long)parsecQueryID;
- (id)sfSearchResultValue;
- (id)title;
- (id)userVisibleURLString;

@end
