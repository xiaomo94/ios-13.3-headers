/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitWHASetting : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _keyPath;
    unsigned long long  _timestamp;
    AWDHomeKitValue * _value;
}

@property (nonatomic, readonly) bool hasKeyPath;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSString *keyPath;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) AWDHomeKitValue *value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKeyPath;
- (bool)hasTimestamp;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (unsigned long long)timestamp;
- (id)value;
- (void)writeTo:(id)arg1;

@end
