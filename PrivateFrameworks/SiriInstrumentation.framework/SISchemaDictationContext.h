/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaDictationContext : PBCodable {
    NSString * _keyboardLanguage;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *keyboardLanguage;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)keyboardLanguage;
- (bool)readFrom:(id)arg1;
- (void)setKeyboardLanguage:(id)arg1;
- (void)writeTo:(id)arg1;

@end