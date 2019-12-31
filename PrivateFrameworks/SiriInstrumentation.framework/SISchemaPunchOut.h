/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaPunchOut : PBCodable {
    NSString * _appID;
    NSString * _urlScheme;
    SISchemaViewContainer * _viewContainer;
    NSData * _viewElementID;
}

@property (nonatomic, copy) NSString *appID;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *urlScheme;
@property (nonatomic, retain) SISchemaViewContainer *viewContainer;
@property (nonatomic, copy) NSData *viewElementID;

- (void).cxx_destruct;
- (id)appID;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppID:(id)arg1;
- (void)setUrlScheme:(id)arg1;
- (void)setViewContainer:(id)arg1;
- (void)setViewElementID:(id)arg1;
- (id)urlScheme;
- (id)viewContainer;
- (id)viewElementID;
- (void)writeTo:(id)arg1;

@end