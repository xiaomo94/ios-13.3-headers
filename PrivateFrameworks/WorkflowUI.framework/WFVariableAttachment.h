/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFVariableAttachment : NSTextAttachment <NSCopying, WFVariableDelegate> {
    bool  _enabled;
    UIFont * _font;
    bool  _highlighted;
    NSString * _overrideVariableName;
    bool  _selected;
    UIColor * _tintColor;
    WFVariable * _variable;
    WFVariableAttachmentCell * _wf_attachmentCell;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UIFont *font;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, copy) NSString *overrideVariableName;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, readonly) WFVariable *variable;
@property (nonatomic, retain) WFVariableAttachmentCell *wf_attachmentCell;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)attachmentCell;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)font;
- (id)initWithVariable:(id)arg1;
- (bool)isEnabled;
- (bool)isHighlighted;
- (bool)isSelected;
- (id)overrideVariableName;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOverrideVariableName:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setWf_attachmentCell:(id)arg1;
- (id)tintColor;
- (id)variable;
- (void)variableDidChange:(id)arg1;
- (id)wf_attachmentCell;

@end
