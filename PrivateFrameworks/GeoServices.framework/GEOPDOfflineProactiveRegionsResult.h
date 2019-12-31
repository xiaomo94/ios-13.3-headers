/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDOfflineProactiveRegionsResult : PBCodable <NSCopying> {
    NSMutableArray * _mapRegions;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *mapRegions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)mapRegionType;

- (void).cxx_destruct;
- (void)addMapRegion:(id)arg1;
- (void)clearMapRegions;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapRegionAtIndex:(unsigned long long)arg1;
- (id)mapRegions;
- (unsigned long long)mapRegionsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMapRegions:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
