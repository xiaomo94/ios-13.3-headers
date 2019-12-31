/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBTextStyle : NSObject <NSCopying> {
    long long  _alignment;
    unsigned long long  _anchorCorner;
    NSString * _etchColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _etchOffset;
    NSString * _fontName;
    double  _fontSize;
    double  _fontWeight;
    bool  _ignoreTextMarginOnKey;
    double  _imageScale;
    double  _kerning;
    double  _minFontSize;
    double  _pathWeight;
    long long  _selector;
    NSString * _textColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _textOffset;
    double  _textOpacity;
}

@property (nonatomic) long long alignment;
@property (nonatomic) unsigned long long anchorCorner;
@property (nonatomic, retain) NSString *etchColor;
@property (nonatomic) struct CGPoint { double x1; double x2; } etchOffset;
@property (nonatomic, retain) NSString *fontName;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (nonatomic) bool ignoreTextMarginOnKey;
@property (nonatomic) double imageScale;
@property (nonatomic) double kerning;
@property (nonatomic) double minFontSize;
@property (nonatomic) double pathWeight;
@property (nonatomic) long long selector;
@property (nonatomic, retain) NSString *textColor;
@property (nonatomic) struct CGPoint { double x1; double x2; } textOffset;
@property (nonatomic) double textOpacity;

+ (id)styleWithFontName:(id)arg1 withFontSize:(double)arg2;
+ (id)styleWithTextColor:(id)arg1;

- (long long)alignment;
- (unsigned long long)anchorCorner;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)etchColor;
- (struct CGPoint { double x1; double x2; })etchOffset;
- (id)fontName;
- (double)fontSize;
- (double)fontWeight;
- (bool)ignoreTextMarginOnKey;
- (double)imageScale;
- (id)init;
- (bool)isEqual:(id)arg1;
- (double)kerning;
- (double)minFontSize;
- (void)overlayWithStyle:(id)arg1;
- (double)pathWeight;
- (long long)selector;
- (void)setAlignment:(long long)arg1;
- (void)setAnchorCorner:(unsigned long long)arg1;
- (void)setEtchColor:(id)arg1;
- (void)setEtchOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFontWeight:(double)arg1;
- (void)setIgnoreTextMarginOnKey:(bool)arg1;
- (void)setImageScale:(double)arg1;
- (void)setKerning:(double)arg1;
- (void)setMinFontSize:(double)arg1;
- (void)setPathWeight:(double)arg1;
- (void)setSelector:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTextOpacity:(double)arg1;
- (id)textColor;
- (struct CGPoint { double x1; double x2; })textOffset;
- (double)textOpacity;

@end
