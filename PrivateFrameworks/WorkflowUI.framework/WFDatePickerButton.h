/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFDatePickerButton : UIButton <WFInputViewMutable> {
    NSSet * _allowedVariableTypes;
    NSDate * _currentDate;
    UIDatePicker * _datePicker;
    long long  _datePickerMode;
    UIView * _inputAccessoryView;
    UIView * _inputView;
    NSDate * _maximumDate;
    NSDate * _minimumDate;
    id /* block */  _updateBlock;
    id /* block */  _variableBlock;
    WFVariableInputCoordinator * _variableCoordinator;
    <WFVariableProvider> * _variableProvider;
    <WFVariableUIDelegate> * _variableUIDelegate;
}

@property (nonatomic, copy) NSSet *allowedVariableTypes;
@property (nonatomic, retain) NSDate *currentDate;
@property (nonatomic, readonly) UIDatePicker *datePicker;
@property (nonatomic) long long datePickerMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, retain) UIView *inputView;
@property (nonatomic, retain) NSDate *maximumDate;
@property (nonatomic, retain) NSDate *minimumDate;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateBlock;
@property (nonatomic, copy) id /* block */ variableBlock;
@property (nonatomic, retain) WFVariableInputCoordinator *variableCoordinator;
@property (nonatomic) <WFVariableProvider> *variableProvider;
@property (nonatomic) <WFVariableUIDelegate> *variableUIDelegate;

- (void).cxx_destruct;
- (id)allowedVariableTypes;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)currentDate;
- (id)datePicker;
- (long long)datePickerMode;
- (void)datePickerValueChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputAccessoryView;
- (id)inputView;
- (id)maximumDate;
- (id)minimumDate;
- (bool)resignFirstResponder;
- (void)setAllowedVariableTypes:(id)arg1;
- (void)setCurrentDate:(id)arg1;
- (void)setDatePickerMode:(long long)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (void)setVariableBlock:(id /* block */)arg1;
- (void)setVariableCoordinator:(id)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (void)tintColorDidChange;
- (id /* block */)updateBlock;
- (id /* block */)variableBlock;
- (id)variableCoordinator;
- (id)variableProvider;
- (id)variableUIDelegate;

@end
