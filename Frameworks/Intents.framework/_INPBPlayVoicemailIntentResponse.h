/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPlayVoicemailIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBPlayVoicemailIntentResponse> {
    bool  __encodeLegacyGloryData;
    struct { }  _has;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
