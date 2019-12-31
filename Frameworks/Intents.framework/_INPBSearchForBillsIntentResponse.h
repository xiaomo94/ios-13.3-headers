/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForBillsIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSearchForBillsIntentResponse> {
    bool  __encodeLegacyGloryData;
    NSArray * _bills;
    struct { }  _has;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (nonatomic, copy) NSArray *bills;
@property (nonatomic, readonly) unsigned long long billsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)billsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (void)addBills:(id)arg1;
- (id)bills;
- (id)billsAtIndex:(unsigned long long)arg1;
- (unsigned long long)billsCount;
- (void)clearBills;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBills:(id)arg1;
- (void)writeTo:(id)arg1;

@end
