/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAnnotatedItemList : PBCodable <NSCopying> {
    int  _annotatedItemStyle;
    struct { 
        unsigned int has_annotatedItemStyle : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_picItemContainer : 1; 
        unsigned int read_textItemContainer : 1; 
        unsigned int read_title : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_picItemContainer : 1; 
        unsigned int wrote_textItemContainer : 1; 
        unsigned int wrote_title : 1; 
        unsigned int wrote_annotatedItemStyle : 1; 
    }  _flags;
    GEOPDPictureItemContainer * _picItemContainer;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDTextItemContainer * _textItemContainer;
    NSString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int annotatedItemStyle;
@property (nonatomic) bool hasAnnotatedItemStyle;
@property (nonatomic, readonly) bool hasPicItemContainer;
@property (nonatomic, readonly) bool hasTextItemContainer;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) GEOPDPictureItemContainer *picItemContainer;
@property (nonatomic, retain) GEOPDTextItemContainer *textItemContainer;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)annotatedItemListForPlaceData:(id)arg1;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAnnotatedItemStyle:(id)arg1;
- (void)_readPicItemContainer;
- (void)_readTextItemContainer;
- (void)_readTitle;
- (int)annotatedItemStyle;
- (id)annotatedItemStyleAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnnotatedItemStyle;
- (bool)hasPicItemContainer;
- (bool)hasTextItemContainer;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)picItemContainer;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnnotatedItemStyle:(int)arg1;
- (void)setHasAnnotatedItemStyle:(bool)arg1;
- (void)setPicItemContainer:(id)arg1;
- (void)setTextItemContainer:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)textItemContainer;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
