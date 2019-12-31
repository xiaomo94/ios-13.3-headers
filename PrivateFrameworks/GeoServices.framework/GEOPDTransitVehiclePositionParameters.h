/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTransitVehiclePositionParameters : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _tripIds;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) unsigned long long*tripIds;
@property (nonatomic, readonly) unsigned long long tripIdsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addTripId:(unsigned long long)arg1;
- (void)clearTripIds;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTripIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)tripIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)tripIds;
- (unsigned long long)tripIdsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
