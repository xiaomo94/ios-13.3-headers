/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSSocketPairConnectionTCPInfo : PBCodable <NSCopying> {
    unsigned long long  _bandwidth;
    unsigned long long  _currentRTT;
    struct { 
        unsigned int bandwidth : 1; 
        unsigned int currentRTT : 1; 
        unsigned int timestamp : 1; 
        unsigned int linkType : 1; 
    }  _has;
    unsigned int  _linkType;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long bandwidth;
@property (nonatomic) unsigned long long currentRTT;
@property (nonatomic) bool hasBandwidth;
@property (nonatomic) bool hasCurrentRTT;
@property (nonatomic) bool hasLinkType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int linkType;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)bandwidth;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentRTT;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBandwidth;
- (bool)hasCurrentRTT;
- (bool)hasLinkType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)linkType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBandwidth:(unsigned long long)arg1;
- (void)setCurrentRTT:(unsigned long long)arg1;
- (void)setHasBandwidth:(bool)arg1;
- (void)setHasCurrentRTT:(bool)arg1;
- (void)setHasLinkType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLinkType:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
