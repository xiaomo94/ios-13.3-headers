/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFTextTokenTextView : WFPlaceholderTextView <WFTextAttachmentInteractionDelegate, WFTextTokenField, WFVariableConfigurationResponderDelegate, WFVariableDelegate, WFVariableInsertionFieldDelegate, WFVariableTypingContext> {
    NSSet * _allowedVariableTypes;
    WFTextAttachmentInteraction * _attachmentInteraction;
    bool  _rejectBecomingFirstResponder;
    id /* block */  _revealBlock;
    id /* block */  _updateBlock;
    WFVariableInputCoordinator * _variableCoordinator;
    <WFVariableProvider> * _variableProvider;
    WFVariableConfigurationResponder * _variableResponder;
    unsigned long long  _variableResultType;
    WFVariableString * _variableString;
    <WFVariableUIDelegate> * _variableUIDelegate;
    bool  _variablesDisabled;
    unsigned long long  syntaxHighlightingType;
}

@property (nonatomic, copy) NSSet *allowedVariableTypes;
@property (nonatomic, retain) WFTextAttachmentInteraction *attachmentInteraction;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic, readonly) NSArray *currentVariables;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditable, nonatomic) bool editable;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic) bool rejectBecomingFirstResponder;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, copy) id /* block */ revealBlock;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long syntaxHighlightingType;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic, copy) id /* block */ updateBlock;
@property (nonatomic, retain) WFVariableInputCoordinator *variableCoordinator;
@property (nonatomic) <WFVariableProvider> *variableProvider;
@property (nonatomic, retain) WFVariableConfigurationResponder *variableResponder;
@property (nonatomic) unsigned long long variableResultType;
@property (nonatomic, copy) WFVariableString *variableString;
@property (nonatomic) <WFVariableUIDelegate> *variableUIDelegate;
@property (nonatomic) bool variablesDisabled;

+ (bool)doneButtonNeededForInputTraits:(id)arg1;

- (void).cxx_destruct;
- (void)_updateVariableString:(id)arg1;
- (id)allowedVariableTypes;
- (id)attachmentInteraction;
- (bool)becomeFirstResponder;
- (void)beginConfiguringVariable:(id)arg1;
- (void)beginEditingWithContext:(id)arg1;
- (bool)canBecomeFirstResponder;
- (void)configureAppearanceOfVariableAttachment:(id)arg1;
- (void)copy:(id)arg1;
- (id)currentVariables;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)defaultCopy:(id)arg1;
- (void)defaultCut:(id)arg1;
- (void)defaultPaste:(id)arg1;
- (void)enumerateVariablesUsingBlock:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertVariable:(id)arg1;
- (void)paste:(id)arg1;
- (bool)rejectBecomingFirstResponder;
- (bool)resignFirstResponder;
- (id /* block */)revealBlock;
- (void)setAllowedVariableTypes:(id)arg1;
- (void)setAttachmentInteraction:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setRejectBecomingFirstResponder:(bool)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setRevealBlock:(id /* block */)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSyntaxHighlightingType:(unsigned long long)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (void)setVariableCoordinator:(id)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)setVariableResponder:(id)arg1;
- (void)setVariableResultType:(unsigned long long)arg1;
- (void)setVariableString:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (void)setVariablesDisabled:(bool)arg1;
- (unsigned long long)syntaxHighlightingType;
- (void)textAttachmentInteraction:(id)arg1 didTapTextAttachment:(id)arg2 inCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)textUpdated;
- (void)tintColorDidChange;
- (void)updateAllowedVariableTypes;
- (void)updateAppearanceOfAllVariableAttachments;
- (id /* block */)updateBlock;
- (void)updateDoneButtonPresence;
- (void)updateVariableBlock;
- (id)variableCoordinator;
- (void)variableDidChange:(id)arg1;
- (id)variableProvider;
- (id)variableResponder;
- (void)variableResponder:(id)arg1 didUpdateVariable:(id)arg2;
- (void)variableResponder:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(id /* block */)arg4 commitHandler:(id /* block */)arg5;
- (void)variableResponderDidBeginEditing:(id)arg1;
- (void)variableResponderDidDelete:(id)arg1 withReplacementText:(id)arg2;
- (void)variableResponderDidEndEditing:(id)arg1;
- (void)variableResponderDidReturnToKeyboard:(id)arg1;
- (void)variableResponderDidRevealAction:(id)arg1;
- (bool)variableResponderHasText:(id)arg1;
- (void)variableResponderWillEndEditing:(id)arg1;
- (unsigned long long)variableResultType;
- (id)variableString;
- (id)variableUIDelegate;
- (bool)variablesDisabled;

@end
