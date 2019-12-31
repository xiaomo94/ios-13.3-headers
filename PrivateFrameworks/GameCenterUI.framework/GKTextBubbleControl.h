/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKTextBubbleControl : GKBaseBubbleWithTextControl {
    GKTextStyle * _overrideTextStyle;
    bool  _smallText;
    NSString * _text;
    GKLabel * _textLabel;
    GKLabel * _textStyle;
}

@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic, retain) GKTextStyle *overrideTextStyle;
@property (nonatomic) bool smallText;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) GKLabel *textLabel;
@property (nonatomic, retain) GKLabel *textStyle;

- (void)_updateTextLabel;
- (id)attributedText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)overrideTextStyle;
- (void)setAttributedText:(id)arg1;
- (void)setOverrideTextStyle:(id)arg1;
- (void)setSmallText:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (bool)smallText;
- (id)text;
- (id)textLabel;
- (id)textStyle;
- (void)updateTextFieldsFor3DScaling;

@end
