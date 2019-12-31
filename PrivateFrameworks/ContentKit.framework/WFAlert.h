/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFAlert : NSObject {
    NSString * _message;
    NSMutableArray * _mutableButtons;
    NSMutableArray * _mutableTextFieldConfigurationHandlers;
    long long  _preferredStyle;
    bool  _prefersItemPickerSheetPresentation;
    <WFAlertPresenter> * _presenter;
    NSArray * _textFieldResults;
    NSString * _title;
}

@property (nonatomic, readonly) NSError *associatedError;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentViewPadding;
@property (nonatomic, readonly) WFAlertButton *escapeButton;
@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) NSMutableArray *mutableButtons;
@property (nonatomic, retain) NSMutableArray *mutableTextFieldConfigurationHandlers;
@property (nonatomic) long long preferredStyle;
@property (nonatomic) bool prefersItemPickerSheetPresentation;
@property (nonatomic, retain) WFAlertPresentationSource *presentationSource;
@property (nonatomic) <WFAlertPresenter> *presenter;
@property (nonatomic, readonly) NSArray *textFieldConfigurationHandlers;
@property (nonatomic, copy) NSArray *textFieldResults;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)alertWithError:(id)arg1;
+ (id)alertWithError:(id)arg1 confirmationHandler:(id /* block */)arg2;
+ (id)alertWithPreferredStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)addButton:(id)arg1;
- (void)addTextFieldWithConfigurationHandler:(id /* block */)arg1;
- (id)associatedError;
- (id)buttons;
- (void)dismissWithCompletionHandler:(id /* block */)arg1;
- (id)escapeButton;
- (id)init;
- (id)message;
- (id)mutableButtons;
- (id)mutableTextFieldConfigurationHandlers;
- (long long)preferredStyle;
- (bool)prefersItemPickerSheetPresentation;
- (id)presenter;
- (void)setButtons:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMutableButtons:(id)arg1;
- (void)setMutableTextFieldConfigurationHandlers:(id)arg1;
- (void)setPreferredStyle:(long long)arg1;
- (void)setPrefersItemPickerSheetPresentation:(bool)arg1;
- (void)setPresenter:(id)arg1;
- (void)setTextFieldResults:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)textFieldConfigurationHandlers;
- (id)textFieldResults;
- (id)title;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (void)addKeyCommand:(id)arg1;
- (id)contentView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewPadding;
- (id)keyCommands;
- (id)presentationSource;
- (void)setContentView:(id)arg1;
- (void)setContentViewPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPresentationSource:(id)arg1;

@end
