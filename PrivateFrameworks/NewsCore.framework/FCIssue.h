/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCIssue : NSObject <FCFeedPersonalizingItem, FCIssueAccessCheckable, NSCopying> {
    NSArray * _allArticleIDs;
    NSArray * _allowedStorefrontIDs;
    NSArray * _blockedStorefrontIDs;
    NSArray * _bundleFeaturedArticleIDs;
    NSString * _coverArticleID;
    NSString * _coverDate;
    double  _coverImageAspectRatio;
    FCAssetHandle * _coverImageAssetHandle;
    FCColor * _coverImagePrimaryColor;
    NSString * _identifier;
    FCInterestToken * _interestToken;
    bool  _isCurrent;
    bool  _isDraft;
    NSString * _issueDescription;
    NTPBIssueRecord * _issueRecord;
    double  _layeredCoverAspectRatio;
    NSString * _layeredCoverJSON;
    FCColor * _layeredCoverPrimaryColor;
    FCAssetHandle * _metadataJSONAssetHandle;
    long long  _minimumNewsVersion;
    NSString * _notificationDescription;
    bool  _paid;
    NSDate * _publicationDate;
    <FCChannelProviding> * _sourceChannel;
    NSString * _title;
    NSArray * _topicTagIDs;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSArray *allArticleIDs;
@property (nonatomic, readonly, copy) NSArray *allowedStorefrontIDs;
@property (getter=isANF, nonatomic, readonly) bool anf;
@property (nonatomic, readonly, copy) NSArray *blockedStorefrontIDs;
@property (nonatomic, readonly) long long bodyTextLength;
@property (nonatomic, readonly, copy) NSArray *bundleFeaturedArticleIDs;
@property (getter=isBundlePaid, nonatomic, readonly) bool bundlePaid;
@property (nonatomic, readonly, copy) NSString *coverArticleID;
@property (nonatomic, readonly, copy) NSString *coverDate;
@property (nonatomic, readonly) double coverImageAspectRatio;
@property (nonatomic, readonly) FCAssetHandle *coverImageAssetHandle;
@property (nonatomic, readonly, copy) FCColor *coverImagePrimaryColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (nonatomic, readonly) double globalUserFeedback;
@property (nonatomic, readonly) unsigned long long halfLife;
@property (nonatomic, readonly) bool hasGlobalUserFeedback;
@property (nonatomic, readonly) bool hasVideo;
@property (readonly) unsigned long long hash;
@property (getter=isHiddenFromAutoFavorites, nonatomic, readonly) bool hiddenFromAutoFavorites;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) FCInterestToken *interestToken;
@property (nonatomic, readonly) bool isBlockedExplicitContent;
@property (nonatomic, readonly) bool isCurrent;
@property (nonatomic, readonly) bool isDraft;
@property (nonatomic, readonly) bool isFeatured;
@property (nonatomic, readonly) bool isLocalDraft;
@property (nonatomic, readonly, copy) NSString *issueDescription;
@property (nonatomic, readonly) NTPBIssueRecord *issueRecord;
@property (nonatomic, readonly, copy) NSString *itemID;
@property (nonatomic, readonly) double layeredCoverAspectRatio;
@property (nonatomic, readonly, copy) NSString *layeredCoverJSON;
@property (nonatomic, readonly, copy) FCColor *layeredCoverPrimaryColor;
@property (nonatomic, readonly) FCAssetHandle *metadataJSONAssetHandle;
@property (nonatomic, readonly) long long minimumNewsVersion;
@property (nonatomic, readonly, copy) NSString *notificationDescription;
@property (getter=isPaid, nonatomic, readonly) bool paid;
@property (nonatomic, readonly, copy) NSDate *publicationDate;
@property (nonatomic, readonly, copy) NSDate *publishDate;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (nonatomic, readonly, copy) NSString *publisherID;
@property (nonatomic, readonly, copy) <FCChannelProviding> *sourceChannel;
@property (nonatomic, readonly, copy) NSString *sourceFeedID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSArray *topicIDs;
@property (nonatomic, readonly, copy) NSArray *topicTagIDs;
@property (nonatomic, readonly) long long type;

+ (bool)_fakeIssuesTimestamp;

- (void).cxx_destruct;
- (id)allArticleIDs;
- (id)allowedStorefrontIDs;
- (id)blockedStorefrontIDs;
- (id)bundleFeaturedArticleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverArticleID;
- (id)coverDate;
- (double)coverImageAspectRatio;
- (id)coverImageAssetHandle;
- (id)coverImagePrimaryColor;
- (id)description;
- (void)enumerateTopicCohortsWithBlock:(id /* block */)arg1;
- (id)globalCohorts;
- (double)globalUserFeedback;
- (unsigned long long)halfLife;
- (bool)hasGlobalUserFeedback;
- (bool)hasVideo;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 title:(id)arg3 publicationDate:(id)arg4 coverDate:(id)arg5 metadataJSONAssetHandle:(id)arg6 coverImageAssetHandle:(id)arg7 coverImageAspectRatio:(double)arg8 coverImagePrimaryColor:(id)arg9 layeredCoverJSON:(id)arg10 layeredCoverAspectRatio:(double)arg11 layeredCoverPrimaryColor:(id)arg12 isCurrent:(bool)arg13 isDraft:(bool)arg14 isPaid:(bool)arg15 minimumNewsVersion:(long long)arg16 allArticleIDs:(id)arg17 bundleFeaturedArticleIDs:(id)arg18 coverArticleID:(id)arg19 allowedStorefrontIDs:(id)arg20 blockedStorefrontIDs:(id)arg21 topicTagIDs:(id)arg22 sourceChannel:(id)arg23 notificationDescription:(id)arg24 issueDescription:(id)arg25;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 title:(id)arg3 publicationDate:(id)arg4 coverDate:(id)arg5 metadataJSONAssetHandle:(id)arg6 coverImageAssetHandle:(id)arg7 coverImageHQAssetHandle:(id)arg8 coverImageLQAssetHandle:(id)arg9 coverImageAspectRatio:(double)arg10 coverImagePrimaryColor:(id)arg11 layeredCoverJSON:(id)arg12 layeredCoverAspectRatio:(double)arg13 layeredCoverPrimaryColor:(id)arg14 isCurrent:(bool)arg15 isDraft:(bool)arg16 isPaid:(bool)arg17 minimumNewsVersion:(long long)arg18 allArticleIDs:(id)arg19 bundleFeaturedArticleIDs:(id)arg20 coverArticleID:(id)arg21 allowedStorefrontIDs:(id)arg22 blockedStorefrontIDs:(id)arg23 PDFResourceIDs:(id)arg24 topicTagIDs:(id)arg25 sourceChannel:(id)arg26 notificationDescription:(id)arg27 issueDescription:(id)arg28;
- (id)initWithIssueRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3 sourceChannel:(id)arg4;
- (id)interestToken;
- (bool)isANF;
- (bool)isBlockedExplicitContent;
- (bool)isBundlePaid;
- (bool)isCurrent;
- (bool)isDraft;
- (bool)isEqual:(id)arg1;
- (bool)isHiddenFromAutoFavorites;
- (bool)isLocalDraft;
- (bool)isPaid;
- (id)issueDescription;
- (id)issueRecord;
- (id)itemID;
- (double)layeredCoverAspectRatio;
- (id)layeredCoverJSON;
- (id)layeredCoverPrimaryColor;
- (id)metadataJSONAssetHandle;
- (long long)minimumNewsVersion;
- (id)notificationDescription;
- (id)publicationDate;
- (id)publishDate;
- (id)publisherCohorts;
- (id)publisherID;
- (void)setInterestToken:(id)arg1;
- (id)sourceChannel;
- (id)sourceFeedID;
- (id)title;
- (id)topicIDs;
- (id)topicTagIDs;
- (long long)type;

@end
