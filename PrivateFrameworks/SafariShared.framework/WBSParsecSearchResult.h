/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecSearchResult : NSObject <WBSCompletionListItem, WBSParsecSearchGenericResult, WBSParsecSearchMapsResult, WBSParsecSearchResult, WBSParsecSearchSimpleResult, WBSParsecSearchSportsResult> {
    WBSParsecLegacySearchResult * _legacySearchResult;
}

@property (nonatomic, readonly) WBSParsecActionButton *actionButton;
@property (nonatomic, readonly) NSURL *appPunchoutURL;
@property (nonatomic, readonly) WBSParsecAuxiliaryInfo *auxiliaryInfo;
@property (nonatomic, readonly) NSString *completion;
@property (nonatomic, readonly) WBSParsecImageRepresentation *completionIcon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionLeadInText;
@property (nonatomic, readonly) NSNumber *descriptionMaximumNumberOfLines;
@property (nonatomic, readonly, copy) NSArray *descriptionRichTexts;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) bool descriptionTextCanWrap;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, readonly) WBSParsecSearchSportsAttributionExtraCompletionItem *extraCompletionItem;
@property (nonatomic, readonly) NSString *feedbackIdentifier;
@property (nonatomic, readonly, copy) NSString *footnote;
@property (nonatomic, readonly) bool hasSingleLineDescriptionAndTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSParsecImageRepresentation *icon;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *images;
@property (nonatomic, readonly, copy) NSArray *individualScores;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (nonatomic, readonly) WBSParsecLegacySearchResult *legacySearchResult;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, retain) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender;
@property (nonatomic, readonly, copy) NSString *mediaKind;
@property (nonatomic, readonly) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic, readonly) long long parsecQueryID;
@property (nonatomic, retain) <WBSParsecSearchSession> *parsecSearchSession;
@property (nonatomic, readonly, copy) NSString *query;
@property (nonatomic, readonly, copy) NSString *referrerForLoadingResult;
@property (nonatomic, readonly, copy) NSString *secondaryTitle;
@property (nonatomic, readonly) WBSParsecImageRepresentation *secondaryTitleGlyph;
@property (nonatomic, readonly, copy) NSString *sectionBundleIdentifier;
@property (nonatomic, readonly) NSString *sectionHeader;
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (nonatomic, retain) WBSQuerySuggestion *siriSuggestion;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly) long long subtype;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WBSParsecImageRepresentation *thumbnail;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSNumber *titleMaximumLines;
@property (nonatomic, readonly) NSNumber *titleMaximumNumberOfLines;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *urlString;

+ (long long)typeForSFSearchResult:(id)arg1;
+ (long long)typeForSFSearchResult:(id)arg1 isOneLine:(bool)arg2;

- (void).cxx_destruct;
- (id)_genericResult;
- (id)_mapsResult;
- (id)_result;
- (id)_resultPresentedInCard;
- (id)_simpleResult;
- (id)_sportsResult;
- (id)actionButton;
- (id)appPunchoutURL;
- (id)auxiliaryInfo;
- (bool)canBecomeTopHitForQuery:(id)arg1;
- (id)completion;
- (id)completionIcon;
- (id)completionIconWithSession:(id)arg1;
- (id)descriptionLeadInText;
- (id)descriptionMaximumNumberOfLines;
- (id)descriptionRichTexts;
- (id)descriptionText;
- (bool)descriptionTextCanWrap;
- (unsigned long long)engagementDestination;
- (id)extraCompletionItem;
- (id)feedbackIdentifier;
- (id)footnote;
- (bool)hasSingleLineDescriptionAndTitle;
- (id)icon;
- (id)iconWithSession:(id)arg1;
- (id)identifier;
- (id)images;
- (id)individualScores;
- (id)init;
- (id)initWithLegacySearchResult:(id)arg1;
- (id)legacySearchResult;
- (id)mapItem;
- (id)mapsFeedbackSender;
- (id)mediaKind;
- (unsigned long long)minimumRankOfTopHitToSuppressResult;
- (id)parsecDomainIdentifier;
- (long long)parsecQueryID;
- (id)parsecSearchSession;
- (id)query;
- (id)referrerForLoadingResult;
- (id)secondaryTitle;
- (id)secondaryTitleGlyph;
- (id)sectionBundleIdentifier;
- (id)sectionHeader;
- (void)setMapsFeedbackSender:(id)arg1;
- (void)setParsecSearchSession:(id)arg1;
- (id)sfSearchResultValue;
- (id)subtitle;
- (long long)subtype;
- (id)thumbnail;
- (id)thumbnailWithSession:(id)arg1;
- (id)title;
- (id)titleGlyphWithSession:(id)arg1;
- (id)titleMaximumLines;
- (id)titleMaximumNumberOfLines;
- (long long)type;
- (id)urlString;

@end
