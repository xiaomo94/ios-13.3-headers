/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

@interface TMLFont : NSObject <NSCopying, TMLFontJSExports> {
    UIFont * _font;
    UIFontDescriptor * _fontDescriptor;
}

@property (nonatomic, readonly) struct CGFont { }*CGFontRef;
@property (nonatomic, readonly) double ascender;
@property (nonatomic, readonly) double capHeight;
@property (nonatomic, readonly) double descender;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double leading;
@property (nonatomic, readonly) double lineHeight;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) double xHeight;

+ (void)initializeJSContext:(id)arg1;

- (void).cxx_destruct;
- (struct CGFont { }*)CGFontRef;
- (id)UIFontValue;
- (double)ascender;
- (id)bold;
- (double)capHeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)descender;
- (id)familyName;
- (id)fontName;
- (id)initWithFont:(id)arg1;
- (id)initWithFontDescriptor:(id)arg1;
- (id)italic;
- (double)leading;
- (double)lineHeight;
- (double)pointSize;
- (id)withAXRestrictedStyle:(id)arg1;
- (id)withAttributes:(id)arg1;
- (id)withFamily:(id)arg1;
- (id)withScale:(double)arg1;
- (id)withScaleTransform:(double)arg1;
- (id)withSize:(double)arg1;
- (id)withStyle:(id)arg1;
- (id)withSymbolicTraits:(unsigned int)arg1;
- (id)withWeight:(double)arg1;
- (id)withWidth:(double)arg1;
- (double)xHeight;

@end
