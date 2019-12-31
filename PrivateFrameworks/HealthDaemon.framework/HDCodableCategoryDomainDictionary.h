/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableCategoryDomainDictionary : PBCodable <HDSyncCodable, NSCopying> {
    long long  _category;
    NSString * _domain;
    struct { 
        unsigned int category : 1; 
    }  _has;
    NSMutableArray * _keyValuePairs;
}

@property (nonatomic) long long category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) bool hasCategory;
@property (nonatomic, readonly) bool hasDomain;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *keyValuePairs;
@property (readonly) Class superclass;

+ (Class)keyValuePairsType;

- (void).cxx_destruct;
- (bool)_validateForInsertionWithError:(id*)arg1;
- (void)addKeyValuePairs:(id)arg1;
- (long long)category;
- (void)clearKeyValuePairs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)decodedCategory;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasCategory;
- (bool)hasDomain;
- (unsigned long long)hash;
- (id)initWithCategory:(long long)arg1 domain:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)keyValuePairs;
- (id)keyValuePairsAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyValuePairsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasCategory:(bool)arg1;
- (void)setKeyValuePairs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
