/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMPTCPSubflowSwitchingReport : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int switchCount : 1; 
    }  _has;
    int  _switchCount;
    NSString * _switchFromInterfaceName;
    NSString * _switchToInterfaceName;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasSwitchCount;
@property (nonatomic, readonly) bool hasSwitchFromInterfaceName;
@property (nonatomic, readonly) bool hasSwitchToInterfaceName;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int switchCount;
@property (nonatomic, retain) NSString *switchFromInterfaceName;
@property (nonatomic, retain) NSString *switchToInterfaceName;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSwitchCount;
- (bool)hasSwitchFromInterfaceName;
- (bool)hasSwitchToInterfaceName;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSwitchCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSwitchCount:(int)arg1;
- (void)setSwitchFromInterfaceName:(id)arg1;
- (void)setSwitchToInterfaceName:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)switchCount;
- (id)switchFromInterfaceName;
- (id)switchToInterfaceName;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
