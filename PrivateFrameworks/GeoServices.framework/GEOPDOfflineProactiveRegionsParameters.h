/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDOfflineProactiveRegionsParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maximumSizeInBytes : 1; 
    }  _flags;
    NSMutableArray * _locations;
    unsigned int  _maximumSizeInBytes;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasMaximumSizeInBytes;
@property (nonatomic, retain) NSMutableArray *locations;
@property (nonatomic) unsigned int maximumSizeInBytes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)locationType;

- (void).cxx_destruct;
- (void)addLocation:(id)arg1;
- (void)clearLocations;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaximumSizeInBytes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationAtIndex:(unsigned long long)arg1;
- (id)locations;
- (unsigned long long)locationsCount;
- (unsigned int)maximumSizeInBytes;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMaximumSizeInBytes:(bool)arg1;
- (void)setLocations:(id)arg1;
- (void)setMaximumSizeInBytes:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
