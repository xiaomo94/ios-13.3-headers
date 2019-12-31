/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKCurvedTextLabel : UILabel {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedGlyphsBoundingRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSize;
    bool  _cachedSizeIsValid;
    double  _centerAngle;
    double  _circleRadius;
    UIFont * _font;
    bool  _hasMonospacedNumbers;
    bool  _interior;
    NSLayoutManager * _layoutManager;
    double  _maxAngularWidth;
    UIColor * _textColor;
    NSTextContainer * _textContainer;
    NSTextStorage * _textStorage;
    double  _textWidth;
}

@property (nonatomic) double centerAngle;
@property (nonatomic) double circleRadius;
@property (nonatomic) bool interior;
@property (nonatomic, readonly) double linearWidth;
@property (nonatomic) double maxAngularWidth;
@property (nonatomic, readonly, copy) NSDictionary *textAttributes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textBoundingRect;

- (void).cxx_destruct;
- (double)_distance;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_drawableCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)_enumerateTransformsForDrawableCharacters:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_glyphsBoundingRect;
- (struct __CTLine { }*)_newLineFromDrawableTextStorage;
- (struct CGPoint { double x1; double x2; })_offsetOfBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateMaxSize;
- (void)_updateTextColor;
- (id)attributedText;
- (double)centerAngle;
- (double)circleRadius;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)font;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)interior;
- (void)invalidateCachedSize;
- (double)linearWidth;
- (double)maxAngularWidth;
- (void)setAttributedText:(id)arg1;
- (void)setCenterAngle:(double)arg1;
- (void)setCircleRadius:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setInterior:(bool)arg1;
- (void)setMaxAngularWidth:(double)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (id)textAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textBoundingRect;
- (id)textColor;

@end