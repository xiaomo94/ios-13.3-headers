/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTransitConnection : PBCodable <NSCopying> {
    NSString * _entityNameString;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_entityNameString : 1; 
        unsigned int read_mapsId : 1; 
        unsigned int read_transitLabels : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_entityNameString : 1; 
        unsigned int wrote_mapsId : 1; 
        unsigned int wrote_muid : 1; 
        unsigned int wrote_transitLabels : 1; 
    }  _flags;
    GEOPDMapsIdentifier * _mapsId;
    unsigned long long  _muid;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _transitLabels;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *entityNameString;
@property (nonatomic, readonly) bool hasEntityNameString;
@property (nonatomic, readonly) bool hasMapsId;
@property (nonatomic) bool hasMuid;
@property (nonatomic, retain) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSMutableArray *transitLabels;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)transitLabelType;

- (void).cxx_destruct;
- (void)_addNoFlagsTransitLabel:(id)arg1;
- (void)_readEntityNameString;
- (void)_readMapsId;
- (void)_readTransitLabels;
- (void)addTransitLabel:(id)arg1;
- (void)clearTransitLabels;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityNameString;
- (bool)hasEntityNameString;
- (bool)hasMapsId;
- (bool)hasMuid;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mapsId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntityNameString:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMapsId:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setTransitLabels:(id)arg1;
- (id)transitLabelAtIndex:(unsigned long long)arg1;
- (id)transitLabels;
- (unsigned long long)transitLabelsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end