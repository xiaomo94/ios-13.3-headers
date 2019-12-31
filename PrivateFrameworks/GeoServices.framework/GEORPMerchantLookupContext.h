/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPMerchantLookupContext : PBCodable <NSCopying> {
    NSString * _correlationId;
    struct { 
        unsigned int has_merchantIndustryCode : 1; 
        unsigned int has_transactionTime : 1; 
        unsigned int read_correlationId : 1; 
        unsigned int read_merchantAdamId : 1; 
        unsigned int read_merchantFormattedAddress : 1; 
        unsigned int read_merchantId : 1; 
        unsigned int read_merchantIndustryCategory : 1; 
        unsigned int read_merchantName : 1; 
        unsigned int read_merchantRawName : 1; 
        unsigned int read_merchantUrl : 1; 
        unsigned int read_transactionLocation : 1; 
        unsigned int read_transactionType : 1; 
        unsigned int wrote_correlationId : 1; 
        unsigned int wrote_merchantAdamId : 1; 
        unsigned int wrote_merchantFormattedAddress : 1; 
        unsigned int wrote_merchantId : 1; 
        unsigned int wrote_merchantIndustryCategory : 1; 
        unsigned int wrote_merchantIndustryCode : 1; 
        unsigned int wrote_merchantName : 1; 
        unsigned int wrote_merchantRawName : 1; 
        unsigned int wrote_merchantUrl : 1; 
        unsigned int wrote_transactionLocation : 1; 
        unsigned int wrote_transactionTime : 1; 
        unsigned int wrote_transactionType : 1; 
    }  _flags;
    NSString * _merchantAdamId;
    NSString * _merchantFormattedAddress;
    GEOPDMapsIdentifier * _merchantId;
    NSString * _merchantIndustryCategory;
    long long  _merchantIndustryCode;
    NSString * _merchantName;
    NSString * _merchantRawName;
    NSString * _merchantUrl;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOLocation * _transactionLocation;
    double  _transactionTime;
    NSString * _transactionType;
}

@property (nonatomic, retain) NSString *correlationId;
@property (nonatomic, readonly) bool hasCorrelationId;
@property (nonatomic, readonly) bool hasMerchantAdamId;
@property (nonatomic, readonly) bool hasMerchantFormattedAddress;
@property (nonatomic, readonly) bool hasMerchantId;
@property (nonatomic, readonly) bool hasMerchantIndustryCategory;
@property (nonatomic) bool hasMerchantIndustryCode;
@property (nonatomic, readonly) bool hasMerchantName;
@property (nonatomic, readonly) bool hasMerchantRawName;
@property (nonatomic, readonly) bool hasMerchantUrl;
@property (nonatomic, readonly) bool hasTransactionLocation;
@property (nonatomic) bool hasTransactionTime;
@property (nonatomic, readonly) bool hasTransactionType;
@property (nonatomic, retain) NSString *merchantAdamId;
@property (nonatomic, retain) NSString *merchantFormattedAddress;
@property (nonatomic, retain) GEOPDMapsIdentifier *merchantId;
@property (nonatomic, retain) NSString *merchantIndustryCategory;
@property (nonatomic) long long merchantIndustryCode;
@property (nonatomic, retain) NSString *merchantName;
@property (nonatomic, retain) NSString *merchantRawName;
@property (nonatomic, retain) NSString *merchantUrl;
@property (nonatomic, retain) GEOLocation *transactionLocation;
@property (nonatomic) double transactionTime;
@property (nonatomic, retain) NSString *transactionType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readCorrelationId;
- (void)_readMerchantAdamId;
- (void)_readMerchantFormattedAddress;
- (void)_readMerchantId;
- (void)_readMerchantIndustryCategory;
- (void)_readMerchantName;
- (void)_readMerchantRawName;
- (void)_readMerchantUrl;
- (void)_readTransactionLocation;
- (void)_readTransactionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correlationId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrelationId;
- (bool)hasMerchantAdamId;
- (bool)hasMerchantFormattedAddress;
- (bool)hasMerchantId;
- (bool)hasMerchantIndustryCategory;
- (bool)hasMerchantIndustryCode;
- (bool)hasMerchantName;
- (bool)hasMerchantRawName;
- (bool)hasMerchantUrl;
- (bool)hasTransactionLocation;
- (bool)hasTransactionTime;
- (bool)hasTransactionType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)merchantAdamId;
- (id)merchantFormattedAddress;
- (id)merchantId;
- (id)merchantIndustryCategory;
- (long long)merchantIndustryCode;
- (id)merchantName;
- (id)merchantRawName;
- (id)merchantUrl;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCorrelationId:(id)arg1;
- (void)setHasMerchantIndustryCode:(bool)arg1;
- (void)setHasTransactionTime:(bool)arg1;
- (void)setMerchantAdamId:(id)arg1;
- (void)setMerchantFormattedAddress:(id)arg1;
- (void)setMerchantId:(id)arg1;
- (void)setMerchantIndustryCategory:(id)arg1;
- (void)setMerchantIndustryCode:(long long)arg1;
- (void)setMerchantName:(id)arg1;
- (void)setMerchantRawName:(id)arg1;
- (void)setMerchantUrl:(id)arg1;
- (void)setTransactionLocation:(id)arg1;
- (void)setTransactionTime:(double)arg1;
- (void)setTransactionType:(id)arg1;
- (id)transactionLocation;
- (double)transactionTime;
- (id)transactionType;
- (void)writeTo:(id)arg1;

@end
