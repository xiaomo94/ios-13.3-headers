/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchResultsForCategoryEntry : PBCodable <NSCopying> {
    GEOPDBrowseCategory * _category;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_placeIndexs : 1; 
        unsigned int read_category : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_placeIndexs : 1; 
        unsigned int wrote_category : 1; 
    }  _flags;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _placeIndexs;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDBrowseCategory *category;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, readonly) unsigned int*placeIndexs;
@property (nonatomic, readonly) unsigned long long placeIndexsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_addNoFlagsPlaceIndex:(unsigned int)arg1;
- (void)_readCategory;
- (void)_readPlaceIndexs;
- (void)addPlaceIndex:(unsigned int)arg1;
- (id)category;
- (void)clearPlaceIndexs;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)placeIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)placeIndexs;
- (unsigned long long)placeIndexsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setPlaceIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end