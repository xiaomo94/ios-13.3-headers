/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPlayMediaIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBPlayMediaIntentResponse> {
    bool  __encodeLegacyGloryData;
    struct { }  _has;
    _INPBDictionary * _nowPlayingInfo;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasNowPlayingInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBDictionary *nowPlayingInfo;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasNowPlayingInfo;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nowPlayingInfo;
- (bool)readFrom:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end