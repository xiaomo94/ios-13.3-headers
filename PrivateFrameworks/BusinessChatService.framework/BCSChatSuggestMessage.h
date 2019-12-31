/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSChatSuggestMessage : PBCodable <NSCopying> {
    NSString * _backgroundColor;
    NSString * _bizId;
    NSMutableArray * _callToActions;
    NSMutableArray * _chatOpenHours;
    NSString * _group;
    struct { 
        unsigned int phoneHash : 1; 
        unsigned int isVerified : 1; 
    }  _has;
    NSString * _intentId;
    bool  _isVerified;
    NSString * _name;
    long long  _phoneHash;
    NSMutableArray * _phoneOpenHours;
    NSString * _squareLogoUrl;
    NSString * _timeZone;
    NSString * _tintColor;
    NSMutableArray * _visibilities;
    NSString * _wideLogoUrl;
}

@property (nonatomic, retain) NSString *backgroundColor;
@property (nonatomic, retain) NSString *bizId;
@property (nonatomic, retain) NSMutableArray *callToActions;
@property (nonatomic, retain) NSMutableArray *chatOpenHours;
@property (nonatomic, retain) NSString *group;
@property (nonatomic, readonly) bool hasBackgroundColor;
@property (nonatomic, readonly) bool hasBizId;
@property (nonatomic, readonly) bool hasGroup;
@property (nonatomic, readonly) bool hasIntentId;
@property (nonatomic) bool hasIsVerified;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasPhoneHash;
@property (nonatomic, readonly) bool hasSquareLogoUrl;
@property (nonatomic, readonly) bool hasTimeZone;
@property (nonatomic, readonly) bool hasTintColor;
@property (nonatomic, readonly) bool hasWideLogoUrl;
@property (nonatomic, retain) NSString *intentId;
@property (nonatomic) bool isVerified;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long phoneHash;
@property (nonatomic, retain) NSMutableArray *phoneOpenHours;
@property (nonatomic, retain) NSString *squareLogoUrl;
@property (nonatomic, retain) NSString *timeZone;
@property (nonatomic, retain) NSString *tintColor;
@property (nonatomic, retain) NSMutableArray *visibilities;
@property (nonatomic, retain) NSString *wideLogoUrl;

+ (Class)callToActionsType;
+ (Class)chatOpenHoursType;
+ (Class)phoneOpenHoursType;
+ (Class)visibilitiesType;

- (void).cxx_destruct;
- (void)addCallToActions:(id)arg1;
- (void)addChatOpenHours:(id)arg1;
- (void)addPhoneOpenHours:(id)arg1;
- (void)addVisibilities:(id)arg1;
- (id)backgroundColor;
- (id)bizId;
- (id)callToActions;
- (id)callToActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)callToActionsCount;
- (id)chatOpenHours;
- (id)chatOpenHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)chatOpenHoursCount;
- (void)clearCallToActions;
- (void)clearChatOpenHours;
- (void)clearPhoneOpenHours;
- (void)clearVisibilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)group;
- (bool)hasBackgroundColor;
- (bool)hasBizId;
- (bool)hasGroup;
- (bool)hasIntentId;
- (bool)hasIsVerified;
- (bool)hasName;
- (bool)hasPhoneHash;
- (bool)hasSquareLogoUrl;
- (bool)hasTimeZone;
- (bool)hasTintColor;
- (bool)hasWideLogoUrl;
- (unsigned long long)hash;
- (id)intentId;
- (bool)isEqual:(id)arg1;
- (bool)isVerified;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (long long)phoneHash;
- (id)phoneOpenHours;
- (id)phoneOpenHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)phoneOpenHoursCount;
- (bool)readFrom:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBizId:(id)arg1;
- (void)setCallToActions:(id)arg1;
- (void)setChatOpenHours:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setHasIsVerified:(bool)arg1;
- (void)setHasPhoneHash:(bool)arg1;
- (void)setIntentId:(id)arg1;
- (void)setIsVerified:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneHash:(long long)arg1;
- (void)setPhoneOpenHours:(id)arg1;
- (void)setSquareLogoUrl:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setVisibilities:(id)arg1;
- (void)setWideLogoUrl:(id)arg1;
- (id)squareLogoUrl;
- (id)timeZone;
- (id)tintColor;
- (id)visibilities;
- (id)visibilitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibilitiesCount;
- (id)wideLogoUrl;
- (void)writeTo:(id)arg1;

@end
