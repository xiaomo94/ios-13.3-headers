/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarStyleAttributes : NSObject <NSCopying, NSSecureCoding> {
    long long  _effectiveLayoutDirection;
    UIFont * _emphasizedFont;
    UIFont * _font;
    double  _iconScale;
    UIColor * _imageDimmedTintColor;
    NSArray * _imageNamePrefixes;
    UIColor * _imageTintColor;
    long long  _mode;
    UIFont * _smallFont;
    long long  _style;
    long long  _symbolScale;
    UIColor * _textColor;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) long long effectiveLayoutDirection;
@property (nonatomic, copy) UIFont *emphasizedFont;
@property (nonatomic, copy) UIFont *font;
@property (nonatomic) double iconScale;
@property (nonatomic, copy) UIColor *imageDimmedTintColor;
@property (nonatomic, copy) NSArray *imageNamePrefixes;
@property (nonatomic, copy) UIColor *imageTintColor;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, copy) UIFont *smallFont;
@property (nonatomic, readonly) long long style;
@property (nonatomic) long long symbolScale;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic, copy) UITraitCollection *traitCollection;

+ (id)overriddenStyleAttributes;
+ (id)styleAttributesForStatusBar:(id)arg1 style:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)effectiveLayoutDirection;
- (id)emphasizedFont;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (id)fontForStyle:(long long)arg1;
- (double)iconScale;
- (id)imageDimmedTintColor;
- (id)imageNamePrefixes;
- (id)imageTintColor;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)mode;
- (void)setEmphasizedFont:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setIconScale:(double)arg1;
- (void)setImageDimmedTintColor:(id)arg1;
- (void)setImageNamePrefixes:(id)arg1;
- (void)setImageTintColor:(id)arg1;
- (void)setSmallFont:(id)arg1;
- (void)setSymbolScale:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (id)smallFont;
- (long long)style;
- (id)styleAttributesWithOverrides:(id)arg1;
- (long long)symbolScale;
- (id)textColor;
- (id)traitCollection;

@end
