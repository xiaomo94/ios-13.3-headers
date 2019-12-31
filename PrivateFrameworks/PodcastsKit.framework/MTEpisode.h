/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
 */

@interface MTEpisode : NSManagedObject

@property (nonatomic, retain) NSString *assetURL;
@property (nonatomic) bool audio;
@property (nonatomic, retain) NSString *author;
@property (nonatomic) bool backCatalog;
@property (nonatomic) long long byteSize;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *cleanedTitle;
@property (nonatomic) double downloadDate;
@property (nonatomic, retain) NSString *downloadPath;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSString *enclosureURL;
@property (nonatomic) long long episodeLevel;
@property (nonatomic) long long episodeNumber;
@property (nonatomic, retain) NSString *episodeType;
@property (nonatomic) bool explicit;
@property (nonatomic) bool externalType;
@property (nonatomic) bool feedDeleted;
@property (nonatomic) long long flags;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasBeenPlayed;
@property (nonatomic) double importDate;
@property (nonatomic) int importSource;
@property (nonatomic) bool isFromITunesSync;
@property (nonatomic) bool isNew;
@property (nonatomic, retain) NSString *itemDescription;
@property (nonatomic) bool itemDescriptionHasHTML;
@property (nonatomic, retain) NSAttributedString *itemDescriptionWithHTML;
@property (nonatomic, retain) NSString *itemDescriptionWithoutHTML;
@property (nonatomic, retain) NSString *itunesSubtitle;
@property (nonatomic, retain) NSString *itunesTitle;
@property (nonatomic) double lastDatePlayed;
@property (nonatomic) double lastUserMarkedAsPlayedDate;
@property (nonatomic) bool listenNowEpisode;
@property (nonatomic) bool manuallyAdded;
@property (nonatomic) bool metadataFirstSyncEligible;
@property (nonatomic, retain) NSString *metadataIdentifier;
@property (nonatomic) double metadataTimestamp;
@property (nonatomic) long long persistentID;
@property (nonatomic) long long playCount;
@property (nonatomic, readonly) long long playState;
@property (nonatomic) double playStateLastModifiedDate;
@property (nonatomic, readonly) bool playStateManuallySet;
@property (nonatomic, readonly) long long playStateSource;
@property (nonatomic) float playhead;
@property (nonatomic, retain) NSSet *playlists;
@property (nonatomic, retain) MTPodcast *podcast;
@property (nonatomic, retain) NSString *podcastUuid;
@property (nonatomic) double pubDate;
@property (nonatomic) bool saved;
@property (nonatomic) long long seasonNumber;
@property (nonatomic, retain) NSData *securityScopedAssetData;
@property (nonatomic) bool sentNotification;
@property (nonatomic, retain) NSSet *settings;
@property (nonatomic) long long storeTrackId;
@property (nonatomic) bool suppressAutoDownload;
@property (nonatomic, retain) MTSyncInfo *syncInfo;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) long long trackNum;
@property (nonatomic) bool unplayedTab;
@property (nonatomic) bool userDeleted;
@property (nonatomic) bool userEpisode;
@property (nonatomic, retain) NSString *uti;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic) bool video;
@property (nonatomic) bool visible;
@property (nonatomic, retain) NSString *webpageURL;

+ (id)dateLabelDescriptionForEpisode:(id)arg1 download:(id)arg2;
+ (long long)downloadSizeLimitForEpisode:(id)arg1;
+ (long long)downloadSizeLimitForVideo:(bool)arg1;
+ (double)endOfTrackForDuration:(double)arg1;
+ (id)episodeWithEnclosureURL:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)episodeWithMetadataIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;
+ (bool)exists:(id)arg1;
+ (id)friendlyPubDateStringForEpisode:(id)arg1;
+ (id)friendlyPubDateStringForEpisode:(id)arg1 abbreviated:(bool)arg2;
+ (id)insertNewEpisodeInManagedObjectContext:(id)arg1;
+ (id)insertNewEpisodeInManagedObjectContext:(id)arg1 title:(id)arg2 podcast:(id)arg3 pubDate:(id)arg4 byteSize:(long long)arg5 guid:(id)arg6 uti:(id)arg7 contentId:(long long)arg8 enclosureUrl:(id)arg9 playStateSource:(int)arg10 importSource:(int)arg11;
+ (bool)isExternalMedia:(id)arg1;
+ (bool)isPlayhead:(double)arg1 resumableForDuration:(double)arg2;
+ (bool)isSaveSupported;
+ (void)parseAndPersistHTMLDescriptionIfNeededForEpisodeUuid:(id)arg1;
+ (id)predicateForAllEpisodesOnPodcastUuid:(id)arg1;
+ (id)predicateForAudio:(bool)arg1;
+ (id)predicateForBacklog:(bool)arg1;
+ (id)predicateForDownloaded:(bool)arg1;
+ (id)predicateForEpisodeGuid:(id)arg1;
+ (id)predicateForEpisodeGuid:(id)arg1 onPodcastUuid:(id)arg2;
+ (id)predicateForEpisodeGuids:(id)arg1;
+ (id)predicateForEpisodeStoreTrackId:(long long)arg1;
+ (id)predicateForEpisodeStoreTrackIds:(id)arg1;
+ (id)predicateForEpisodeTitle:(id)arg1;
+ (id)predicateForEpisodeTitle:(id)arg1 onPodcastUuid:(id)arg2;
+ (id)predicateForEpisodeType:(long long)arg1;
+ (id)predicateForEpisodeTypeFilter:(long long)arg1;
+ (id)predicateForEpisodeUuid:(id)arg1;
+ (id)predicateForEpisodeUuids:(id)arg1;
+ (id)predicateForEpisodesDeterminedByLimitSettings:(long long)arg1;
+ (id)predicateForEpisodesImportedAfterDate:(id)arg1;
+ (id)predicateForEpisodesInFeedForPodcastUuid:(id)arg1;
+ (id)predicateForEpisodesInStationShow:(id)arg1;
+ (id)predicateForEpisodesIsFromiTunesSyncOnPodcastUuid:(id)arg1;
+ (id)predicateForEpisodesOnSavedTabForPodcastUuid:(id)arg1;
+ (id)predicateForEpisodesOnUnplayedTab;
+ (id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 ctx:(id)arg2;
+ (id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(bool)arg3;
+ (id)predicateForEpisodesPublishedThisMonth;
+ (id)predicateForEpisodesPublishedThisWeek;
+ (id)predicateForEpisodesPublishedToday;
+ (id)predicateForEpisodesWithSeasonNumbersOnPodcastUuid:(id)arg1;
+ (id)predicateForExplicit:(bool)arg1;
+ (id)predicateForExternalType:(bool)arg1;
+ (id)predicateForFeedDeleted:(bool)arg1;
+ (id)predicateForFeedURL:(id)arg1;
+ (id)predicateForFeedURLs:(id)arg1;
+ (id)predicateForHasBeenPlayed;
+ (id)predicateForHasSeasonNumber;
+ (id)predicateForHasValidPersistentId:(bool)arg1;
+ (id)predicateForIsBackCatalogItem;
+ (id)predicateForIsFromiTunesSync:(bool)arg1;
+ (id)predicateForIsNew:(bool)arg1;
+ (id)predicateForLimittedEpisodesOnPodcastUuid:(id)arg1 determinedByLimit:(long long)arg2 deletePlayedEpisodes:(bool)arg3;
+ (id)predicateForListenNow;
+ (id)predicateForMetadataFirstSyncEligible:(bool)arg1;
+ (id)predicateForMyEpisodesOnPodcastUuid:(id)arg1 ctx:(id)arg2;
+ (id)predicateForMyEpisodesOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(bool)arg3;
+ (id)predicateForNewEpisodesOnPodcastUuid:(id)arg1;
+ (id)predicateForOtherEpisodesOnPodcastUuid:(id)arg1 limittedEpisodesPredicate:(id)arg2 deletePlayedEpisodes:(bool)arg3;
+ (id)predicateForPersistentId:(id)arg1;
+ (id)predicateForPersistentIds:(id)arg1;
+ (id)predicateForPlayStateManuallySet:(bool)arg1;
+ (id)predicateForPlayed:(bool)arg1;
+ (id)predicateForPlaylistEpisodes;
+ (id)predicateForPodcastIsHidden:(bool)arg1;
+ (id)predicateForPreviouslyPlayed;
+ (id)predicateForRecentlyPlayed;
+ (id)predicateForRecentlyPlayedEpisodesToBeDeletedOnPodcastUuid:(id)arg1 deletePlayedEpisodes:(bool)arg2;
+ (id)predicateForSaved:(bool)arg1;
+ (id)predicateForSavedEpisodesOnPodcastUuid:(id)arg1;
+ (id)predicateForSavedTab:(bool)arg1;
+ (id)predicateForSeasonNumber:(long long)arg1;
+ (id)predicateForSentNotification:(bool)arg1;
+ (id)predicateForSuppressAutoDownload:(bool)arg1;
+ (id)predicateForUnplayedTabFlag:(bool)arg1;
+ (id)predicateForUserEpisode:(bool)arg1;
+ (id)predicateForUserEpisodes;
+ (id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 ctx:(id)arg2;
+ (id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(bool)arg3;
+ (id)predicateForVideo:(bool)arg1;
+ (id)predicateForVisuallyPlayed:(bool)arg1;
+ (void)prepareForPlatform:(id)arg1;
+ (id)propertyPathForPodcastProperty:(id)arg1;
+ (id)sortDescriptorsForLastDatePlayedAscending:(bool)arg1;
+ (id)sortDescriptorsForListenNow;
+ (id)sortDescriptorsForPubDateAscending:(bool)arg1;
+ (id)sortDescriptorsForRecentlyPlayed;
+ (id)sortDescriptorsForSeasonsWithOldestEpisodesFirst:(bool)arg1;
+ (id)sortDescriptorsForTitle;
+ (id)timeRemainingStringForEpisode:(id)arg1;
+ (id)timeRemainingStringForEpisode:(id)arg1 abbreviated:(bool)arg2;
+ (id)userDefaultPropertiesAffectingPredicates;

- (void)_setAssetUrl:(id)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2 asynchronously:(bool)arg3;
- (id)assetURL;
- (id)bestSummary;
- (id)bestTitle;
- (id)bestUrl;
- (void)didChangePersistentID;
- (id)displayURL;
- (double)endOfTrack;
- (long long)episodeTypeResolvedValue;
- (void)incremementPlayCount;
- (bool)isAudio;
- (bool)isBackCatalogItem;
- (bool)isBonus;
- (bool)isDownloaded;
- (bool)isExplicit;
- (bool)isExternalType;
- (bool)isInMyEpisodes;
- (bool)isInPodcastDetailsUnplayedTab;
- (bool)isInUserEpisodes;
- (bool)isLatestEpisodeInPodcast;
- (bool)isMedia;
- (bool)isPartiallyPlayed;
- (bool)isPartiallyPlayedBackCatalogItem;
- (bool)isPlayable;
- (bool)isPlayed;
- (bool)isPlayheadPartiallyPlayed;
- (bool)isPlayheadResumable;
- (bool)isRestricted;
- (bool)isSaved;
- (bool)isShareable;
- (bool)isTopLevelEpisode;
- (bool)isTrailer;
- (bool)isUnplayed;
- (bool)isVideo;
- (bool)isVisuallyPlayed;
- (id)lazyDescriptionWithHTML:(bool)arg1;
- (id)metricsContentIdentifier;
- (long long)mt_syncID;
- (id)numberedTitle;
- (id)playURL;
- (double)playbackProgress;
- (id)playedText;
- (id)playedTextForCarplay;
- (unsigned long long)reasonForNotPlayable;
- (void)setAssetURL:(id)arg1;
- (void)setAssetURL:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setByteSize:(long long)arg1;
- (void)setCleanedTitle:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEnclosureURL:(id)arg1;
- (void)setEpisodeLevel:(long long)arg1;
- (void)setEpisodeNumber:(long long)arg1;
- (void)setEpisodeType:(id)arg1;
- (void)setExplicit:(bool)arg1;
- (void)setFeedDeleted:(bool)arg1;
- (void)setGuid:(id)arg1;
- (void)setIsNew:(bool)arg1;
- (void)setIsTopLevelEpisode:(bool)arg1;
- (void)setItemDescription:(id)arg1;
- (void)setItunesSubtitle:(id)arg1;
- (void)setItunesTitle:(id)arg1;
- (void)setLastDatePlayed:(double)arg1;
- (void)setListenNowEpisode:(bool)arg1;
- (void)setMetadataFirstSyncEligible:(bool)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setPlayCount:(long long)arg1;
- (void)setPlayState:(long long)arg1 manually:(bool)arg2 source:(int)arg3;
- (void)setPlayed:(bool)arg1 manually:(bool)arg2 source:(int)arg3;
- (void)setPlayhead:(float)arg1;
- (void)setPodcast:(id)arg1;
- (void)setPodcastUuid:(id)arg1;
- (void)setPubDate:(double)arg1;
- (void)setSaved:(bool)arg1;
- (void)setSeasonNumber:(long long)arg1;
- (void)setStoreTrackId:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrackNum:(long long)arg1;
- (void)setUti:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (double)timeRemaining;
- (void)updateUPPIdentifierIfNeeded;
- (void)updateUPPTimestamp;

@end
