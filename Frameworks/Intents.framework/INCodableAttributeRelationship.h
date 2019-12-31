/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableAttributeRelationship : NSObject <INCodableCoding, NSSecureCoding> {
    INCodableAttribute * _codableAttribute;
    NSDictionary * _originalDictionary;
    INCodableAttribute * _parentCodableAttribute;
    unsigned long long  _relation;
    NSArray * _values;
}

@property (setter=_setOriginalDictionary:, nonatomic, retain) NSDictionary *_originalDictionary;
@property (nonatomic, readonly, copy) NSString *cacheGroup;
@property (nonatomic, readonly) INCodableAttribute *codableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *keyPrefix;
@property (nonatomic) INCodableAttribute *parentCodableAttribute;
@property (nonatomic) unsigned long long relation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) Class valueClass;
@property (nonatomic, retain) NSArray *values;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_establishRelationship;
- (id)_originalDictionary;
- (void)_setOriginalDictionary:(id)arg1;
- (id)cacheGroup;
- (id)codableAttribute;
- (bool)compareValue:(id)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodableAttribute:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPrefix;
- (id)parentCodableAttribute;
- (unsigned long long)relation;
- (void)setParentCodableAttribute:(id)arg1;
- (void)setRelation:(unsigned long long)arg1;
- (void)setValues:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (Class)valueClass;
- (id)values;

@end
