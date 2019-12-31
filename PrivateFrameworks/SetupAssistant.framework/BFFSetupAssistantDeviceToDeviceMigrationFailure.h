/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BFFSetupAssistantDeviceToDeviceMigrationFailure : PBCodable <NSCopying> {
    int  _connectionType;
    long long  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int timestamp : 1; 
        unsigned int underlyingErrorCode : 1; 
        unsigned int connectionType : 1; 
        unsigned int inAppleStore : 1; 
    }  _has;
    bool  _inAppleStore;
    NSString * _sourceDeviceModel;
    NSString * _sourceDeviceProductVersion;
    NSString * _targetDeviceModel;
    NSString * _targetDeviceProductVersion;
    unsigned long long  _timestamp;
    long long  _underlyingErrorCode;
    NSString * _underlyingErrorDomain;
}

@property (nonatomic) int connectionType;
@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasInAppleStore;
@property (nonatomic, readonly) bool hasSourceDeviceModel;
@property (nonatomic, readonly) bool hasSourceDeviceProductVersion;
@property (nonatomic, readonly) bool hasTargetDeviceModel;
@property (nonatomic, readonly) bool hasTargetDeviceProductVersion;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUnderlyingErrorCode;
@property (nonatomic, readonly) bool hasUnderlyingErrorDomain;
@property (nonatomic) bool inAppleStore;
@property (nonatomic, retain) NSString *sourceDeviceModel;
@property (nonatomic, retain) NSString *sourceDeviceProductVersion;
@property (nonatomic, retain) NSString *targetDeviceModel;
@property (nonatomic, retain) NSString *targetDeviceProductVersion;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long underlyingErrorCode;
@property (nonatomic, retain) NSString *underlyingErrorDomain;

- (void).cxx_destruct;
- (int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDomain;
- (bool)hasConnectionType;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasInAppleStore;
- (bool)hasSourceDeviceModel;
- (bool)hasSourceDeviceProductVersion;
- (bool)hasTargetDeviceModel;
- (bool)hasTargetDeviceProductVersion;
- (bool)hasTimestamp;
- (bool)hasUnderlyingErrorCode;
- (bool)hasUnderlyingErrorDomain;
- (unsigned long long)hash;
- (bool)inAppleStore;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConnectionType:(int)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasInAppleStore:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUnderlyingErrorCode:(bool)arg1;
- (void)setInAppleStore:(bool)arg1;
- (void)setSourceDeviceModel:(id)arg1;
- (void)setSourceDeviceProductVersion:(id)arg1;
- (void)setTargetDeviceModel:(id)arg1;
- (void)setTargetDeviceProductVersion:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnderlyingErrorCode:(long long)arg1;
- (void)setUnderlyingErrorDomain:(id)arg1;
- (id)sourceDeviceModel;
- (id)sourceDeviceProductVersion;
- (id)targetDeviceModel;
- (id)targetDeviceProductVersion;
- (unsigned long long)timestamp;
- (long long)underlyingErrorCode;
- (id)underlyingErrorDomain;
- (void)writeTo:(id)arg1;

@end
