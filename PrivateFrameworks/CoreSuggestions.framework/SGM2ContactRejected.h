/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGM2ContactRejected : PBCodable <NSCopying> {
    int  _app;
    int  _extracted;
    struct { 
        unsigned int app : 1; 
        unsigned int extracted : 1; 
        unsigned int selfId : 1; 
    }  _has;
    NSString * _key;
    bool  _selfId;
}

@property (nonatomic) int app;
@property (nonatomic) int extracted;
@property (nonatomic) bool hasApp;
@property (nonatomic) bool hasExtracted;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasSelfId;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) bool selfId;

- (void).cxx_destruct;
- (int)StringAsApp:(id)arg1;
- (int)StringAsExtracted:(id)arg1;
- (int)app;
- (id)appAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)extracted;
- (id)extractedAsString:(int)arg1;
- (bool)hasApp;
- (bool)hasExtracted;
- (bool)hasKey;
- (bool)hasSelfId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)selfId;
- (void)setApp:(int)arg1;
- (void)setExtracted:(int)arg1;
- (void)setHasApp:(bool)arg1;
- (void)setHasExtracted:(bool)arg1;
- (void)setHasSelfId:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSelfId:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
