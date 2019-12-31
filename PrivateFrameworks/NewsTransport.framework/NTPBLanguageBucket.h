/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBLanguageBucket : PBCodable <NSCopying> {
    NTPBGroupingFlags * _groupingFlags;
    NSString * _key;
    NSMutableArray * _values;
}

@property (nonatomic, retain) NTPBGroupingFlags *groupingFlags;
@property (nonatomic, readonly) bool hasGroupingFlags;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSMutableArray *values;

+ (Class)valuesType;

- (void).cxx_destruct;
- (void)addValues:(id)arg1;
- (void)clearValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupingFlags;
- (bool)hasGroupingFlags;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGroupingFlags:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValues:(id)arg1;
- (id)values;
- (id)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
