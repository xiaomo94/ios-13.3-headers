/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _PARSearchResponse_Correction : PBCodable <NSSecureCoding, _PARSearchResponse_Correction> {
    NSString * _completion;
    NSString * _prefix;
    float  _score;
}

@property (nonatomic, copy) NSString *completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *prefix;
@property (nonatomic) float score;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)completion;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)prefix;
- (bool)readFrom:(id)arg1;
- (float)score;
- (void)setCompletion:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setScore:(float)arg1;
- (void)writeTo:(id)arg1;

@end
