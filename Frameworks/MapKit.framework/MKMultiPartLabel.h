/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMultiPartLabel : UIView {
    NSDictionary * _cachedTextAttributes;
    _MKMultiPartLabelMetrics * _data;
    UIFont * _font;
    MKMultiPartAttributedString * _multiPartString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousBounds;
    long long  _textAlignment;
    UIColor * _textColor;
    UITextView * _textView;
}

@property (nonatomic, retain) _MKMultiPartLabelMetrics *data;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic, retain) MKMultiPartAttributedString *multiPartString;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textInset;

+ (id)_formattedStringsCache;

- (void).cxx_destruct;
- (id)_addDefaultAttributesToAttributedString:(id)arg1;
- (id)_attributedAdjustedMultiPartStringFromString:(id)arg1;
- (void)_setupTextView;
- (id)_textAttributes;
- (void)_updateStrings;
- (void)_updateTextViewTextAndInvalidateLayout:(id)arg1;
- (id)data;
- (id)font;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)lineBreakMode;
- (id)multiPartString;
- (unsigned long long)numberOfLines;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (void)setData:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMultiPartString:(id)arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textInset;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
