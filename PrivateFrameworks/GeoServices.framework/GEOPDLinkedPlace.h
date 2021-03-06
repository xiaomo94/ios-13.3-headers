/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLinkedPlace : PBCodable <NSCopying> {
    GEOLatLng * _center;
    unsigned long long  _featureId;
    struct { 
        unsigned int has_featureId : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_center : 1; 
        unsigned int read_mapsId : 1; 
        unsigned int read_name : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_center : 1; 
        unsigned int wrote_featureId : 1; 
        unsigned int wrote_mapsId : 1; 
        unsigned int wrote_name : 1; 
        unsigned int wrote_styleAttributes : 1; 
    }  _flags;
    GEOPDMapsIdentifier * _mapsId;
    NSString * _name;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOStyleAttributes * _styleAttributes;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic) bool hasFeatureId;
@property (nonatomic, readonly) bool hasMapsId;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic, retain) GEOPDMapsIdentifier *mapsId;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readCenter;
- (void)_readMapsId;
- (void)_readName;
- (void)_readStyleAttributes;
- (id)center;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)featureId;
- (bool)hasCenter;
- (bool)hasFeatureId;
- (bool)hasMapsId;
- (bool)hasName;
- (bool)hasStyleAttributes;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mapsId;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setFeatureId:(unsigned long long)arg1;
- (void)setHasFeatureId:(bool)arg1;
- (void)setMapsId:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (id)styleAttributes;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
