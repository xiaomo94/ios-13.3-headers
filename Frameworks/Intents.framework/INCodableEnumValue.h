/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableEnumValue : NSObject <INCodableAttributeRelationComparing, INCodableCoding, NSCopying, NSSecureCoding> {
    INCodableEnum * _codableEnum;
    NSString * _displayName;
    NSString * _displayNameLocID;
    long long  _index;
    NSString * _name;
    NSArray * _synonyms;
}

@property (setter=_setCodableEnum:, nonatomic) INCodableEnum *_codableEnum;
@property (nonatomic, readonly, copy) NSString *cacheGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *displayNameLocID;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long index;
@property (nonatomic, readonly, copy) NSString *keyPrefix;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *synonyms;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_codableEnum;
- (bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (void)_setCodableEnum:(id)arg1;
- (id)cacheGroup;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)displayName;
- (id)displayNameLocID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)index;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPrefix;
- (id)localizedDisplayName;
- (id)localizedDisplayNameForLanguage:(id)arg1;
- (id)name;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameLocID:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setSynonyms:(id)arg1;
- (id)synonyms;
- (void)updateWithDictionary:(id)arg1;

@end
