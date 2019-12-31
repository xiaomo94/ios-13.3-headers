/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiOtaSystemInfo : PBCodable <NSCopying> {
    NSData * _beaconInfo;
    NSString * _bssid;
    unsigned int  _channel;
    unsigned int  _channelWidth;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int channel : 1; 
        unsigned int channelWidth : 1; 
    }  _has;
    NSString * _locale;
    NSString * _localeSource;
    NSString * _ssid;
    unsigned long long  _timestamp;
    NSString * _wpsConfigMethods;
    NSString * _wpsDeviceNameData;
    NSString * _wpsDeviceNameElement;
    NSString * _wpsManufacturerElement;
    NSString * _wpsModelName;
    NSString * _wpsModelNumber;
    NSString * _wpsPrimaryDeviceTypeCategory;
    NSString * _wpsPrimaryDeviceTypeSubCategory;
    NSString * _wpsResponseType;
}

@property (nonatomic, retain) NSData *beaconInfo;
@property (nonatomic, retain) NSString *bssid;
@property (nonatomic) unsigned int channel;
@property (nonatomic) unsigned int channelWidth;
@property (nonatomic, readonly) bool hasBeaconInfo;
@property (nonatomic, readonly) bool hasBssid;
@property (nonatomic) bool hasChannel;
@property (nonatomic) bool hasChannelWidth;
@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, readonly) bool hasLocaleSource;
@property (nonatomic, readonly) bool hasSsid;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasWpsConfigMethods;
@property (nonatomic, readonly) bool hasWpsDeviceNameData;
@property (nonatomic, readonly) bool hasWpsDeviceNameElement;
@property (nonatomic, readonly) bool hasWpsManufacturerElement;
@property (nonatomic, readonly) bool hasWpsModelName;
@property (nonatomic, readonly) bool hasWpsModelNumber;
@property (nonatomic, readonly) bool hasWpsPrimaryDeviceTypeCategory;
@property (nonatomic, readonly) bool hasWpsPrimaryDeviceTypeSubCategory;
@property (nonatomic, readonly) bool hasWpsResponseType;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSString *localeSource;
@property (nonatomic, retain) NSString *ssid;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *wpsConfigMethods;
@property (nonatomic, retain) NSString *wpsDeviceNameData;
@property (nonatomic, retain) NSString *wpsDeviceNameElement;
@property (nonatomic, retain) NSString *wpsManufacturerElement;
@property (nonatomic, retain) NSString *wpsModelName;
@property (nonatomic, retain) NSString *wpsModelNumber;
@property (nonatomic, retain) NSString *wpsPrimaryDeviceTypeCategory;
@property (nonatomic, retain) NSString *wpsPrimaryDeviceTypeSubCategory;
@property (nonatomic, retain) NSString *wpsResponseType;

- (id)beaconInfo;
- (id)bssid;
- (unsigned int)channel;
- (unsigned int)channelWidth;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBeaconInfo;
- (bool)hasBssid;
- (bool)hasChannel;
- (bool)hasChannelWidth;
- (bool)hasLocale;
- (bool)hasLocaleSource;
- (bool)hasSsid;
- (bool)hasTimestamp;
- (bool)hasWpsConfigMethods;
- (bool)hasWpsDeviceNameData;
- (bool)hasWpsDeviceNameElement;
- (bool)hasWpsManufacturerElement;
- (bool)hasWpsModelName;
- (bool)hasWpsModelNumber;
- (bool)hasWpsPrimaryDeviceTypeCategory;
- (bool)hasWpsPrimaryDeviceTypeSubCategory;
- (bool)hasWpsResponseType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (id)localeSource;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBeaconInfo:(id)arg1;
- (void)setBssid:(id)arg1;
- (void)setChannel:(unsigned int)arg1;
- (void)setChannelWidth:(unsigned int)arg1;
- (void)setHasChannel:(bool)arg1;
- (void)setHasChannelWidth:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocaleSource:(id)arg1;
- (void)setSsid:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWpsConfigMethods:(id)arg1;
- (void)setWpsDeviceNameData:(id)arg1;
- (void)setWpsDeviceNameElement:(id)arg1;
- (void)setWpsManufacturerElement:(id)arg1;
- (void)setWpsModelName:(id)arg1;
- (void)setWpsModelNumber:(id)arg1;
- (void)setWpsPrimaryDeviceTypeCategory:(id)arg1;
- (void)setWpsPrimaryDeviceTypeSubCategory:(id)arg1;
- (void)setWpsResponseType:(id)arg1;
- (id)ssid;
- (unsigned long long)timestamp;
- (id)wpsConfigMethods;
- (id)wpsDeviceNameData;
- (id)wpsDeviceNameElement;
- (id)wpsManufacturerElement;
- (id)wpsModelName;
- (id)wpsModelNumber;
- (id)wpsPrimaryDeviceTypeCategory;
- (id)wpsPrimaryDeviceTypeSubCategory;
- (id)wpsResponseType;
- (void)writeTo:(id)arg1;

@end
