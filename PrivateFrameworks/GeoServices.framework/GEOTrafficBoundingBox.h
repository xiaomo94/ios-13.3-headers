/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficBoundingBox : PBCodable <NSCopying> {
    double  _east;
    struct { 
        unsigned int has_east : 1; 
        unsigned int has_north : 1; 
        unsigned int has_south : 1; 
        unsigned int has_west : 1; 
    }  _flags;
    double  _north;
    double  _south;
    double  _west;
}

@property (nonatomic) double east;
@property (nonatomic) bool hasEast;
@property (nonatomic) bool hasNorth;
@property (nonatomic) bool hasSouth;
@property (nonatomic) bool hasWest;
@property (nonatomic) double north;
@property (nonatomic) double south;
@property (nonatomic) double west;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)east;
- (bool)hasEast;
- (bool)hasNorth;
- (bool)hasSouth;
- (bool)hasWest;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)north;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEast:(double)arg1;
- (void)setHasEast:(bool)arg1;
- (void)setHasNorth:(bool)arg1;
- (void)setHasSouth:(bool)arg1;
- (void)setHasWest:(bool)arg1;
- (void)setNorth:(double)arg1;
- (void)setSouth:(double)arg1;
- (void)setWest:(double)arg1;
- (double)south;
- (double)west;
- (void)writeTo:(id)arg1;

@end
