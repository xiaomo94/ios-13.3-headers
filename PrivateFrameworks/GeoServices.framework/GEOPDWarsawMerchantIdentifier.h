/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDWarsawMerchantIdentifier : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_merchantDomain : 1; 
        unsigned int read_merchantId : 1; 
        unsigned int read_merchantName : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_merchantDomain : 1; 
        unsigned int wrote_merchantId : 1; 
        unsigned int wrote_merchantName : 1; 
    }  _flags;
    NSString * _merchantDomain;
    NSString * _merchantId;
    NSString * _merchantName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasMerchantDomain;
@property (nonatomic, readonly) bool hasMerchantId;
@property (nonatomic, readonly) bool hasMerchantName;
@property (nonatomic, retain) NSString *merchantDomain;
@property (nonatomic, retain) NSString *merchantId;
@property (nonatomic, retain) NSString *merchantName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readMerchantDomain;
- (void)_readMerchantId;
- (void)_readMerchantName;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMerchantDomain;
- (bool)hasMerchantId;
- (bool)hasMerchantName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)merchantDomain;
- (id)merchantId;
- (id)merchantName;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMerchantDomain:(id)arg1;
- (void)setMerchantId:(id)arg1;
- (void)setMerchantName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
