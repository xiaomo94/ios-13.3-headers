/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDCategorySearchParameters : PBCodable <NSCopying> {
    unsigned int  _blurredHourOfDay;
    unsigned int  _dayOfWeek;
    struct { 
        unsigned int has_blurredHourOfDay : 1; 
        unsigned int has_dayOfWeek : 1; 
        unsigned int has_maxResults : 1; 
        unsigned int has_searchType : 1; 
        unsigned int has_supportCategorySearchResultSection : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_recentRouteInfo : 1; 
        unsigned int read_suggestionEntryMetadata : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_recentRouteInfo : 1; 
        unsigned int wrote_suggestionEntryMetadata : 1; 
        unsigned int wrote_viewportInfo : 1; 
        unsigned int wrote_blurredHourOfDay : 1; 
        unsigned int wrote_dayOfWeek : 1; 
        unsigned int wrote_maxResults : 1; 
        unsigned int wrote_searchType : 1; 
        unsigned int wrote_supportCategorySearchResultSection : 1; 
    }  _flags;
    unsigned int  _maxResults;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDRecentRouteInfo * _recentRouteInfo;
    int  _searchType;
    NSData * _suggestionEntryMetadata;
    bool  _supportCategorySearchResultSection;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic) unsigned int blurredHourOfDay;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic) bool hasBlurredHourOfDay;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasRecentRouteInfo;
@property (nonatomic) bool hasSearchType;
@property (nonatomic, readonly) bool hasSuggestionEntryMetadata;
@property (nonatomic) bool hasSupportCategorySearchResultSection;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, retain) GEOPDRecentRouteInfo *recentRouteInfo;
@property (nonatomic) int searchType;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic) bool supportCategorySearchResultSection;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSearchType:(id)arg1;
- (void)_readRecentRouteInfo;
- (void)_readSuggestionEntryMetadata;
- (void)_readViewportInfo;
- (unsigned int)blurredHourOfDay;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dayOfWeek;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBlurredHourOfDay;
- (bool)hasDayOfWeek;
- (bool)hasMaxResults;
- (bool)hasRecentRouteInfo;
- (bool)hasSearchType;
- (bool)hasSuggestionEntryMetadata;
- (bool)hasSupportCategorySearchResultSection;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)recentRouteInfo;
- (int)searchType;
- (id)searchTypeAsString:(int)arg1;
- (void)setBlurredHourOfDay:(unsigned int)arg1;
- (void)setDayOfWeek:(unsigned int)arg1;
- (void)setHasBlurredHourOfDay:(bool)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasSearchType:(bool)arg1;
- (void)setHasSupportCategorySearchResultSection:(bool)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setRecentRouteInfo:(id)arg1;
- (void)setSearchType:(int)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setSupportCategorySearchResultSection:(bool)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)suggestionEntryMetadata;
- (bool)supportCategorySearchResultSection;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
