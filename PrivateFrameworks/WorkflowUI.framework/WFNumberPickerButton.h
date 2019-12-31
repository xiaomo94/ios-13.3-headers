/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFNumberPickerButton : WFBackgroundFadingButton <UIPickerViewDataSource, UIPickerViewDelegate, WFInputViewMutable> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _allowedRange;
    NSSet * _allowedVariableTypes;
    unsigned long long  _currentValue;
    UIView * _inputAccessoryView;
    UIView * _inputView;
    UIPickerView * _pickerView;
    id /* block */  _updateBlock;
    id /* block */  _variableBlock;
    WFVariableInputCoordinator * _variableCoordinator;
    <WFVariableProvider> * _variableProvider;
    <WFVariableUIDelegate> * _variableUIDelegate;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } allowedRange;
@property (nonatomic, copy) NSSet *allowedVariableTypes;
@property (nonatomic) unsigned long long currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, retain) UIView *inputView;
@property (nonatomic, readonly) UIPickerView *pickerView;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateBlock;
@property (nonatomic, copy) id /* block */ variableBlock;
@property (nonatomic, retain) WFVariableInputCoordinator *variableCoordinator;
@property (nonatomic) <WFVariableProvider> *variableProvider;
@property (nonatomic) <WFVariableUIDelegate> *variableUIDelegate;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })allowedRange;
- (id)allowedVariableTypes;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (unsigned long long)currentValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputAccessoryView;
- (id)inputView;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (bool)resignFirstResponder;
- (void)setAllowedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAllowedVariableTypes:(id)arg1;
- (void)setCurrentValue:(unsigned long long)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (void)setVariableBlock:(id /* block */)arg1;
- (void)setVariableCoordinator:(id)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (void)tintColorDidChange;
- (id /* block */)updateBlock;
- (void)updateVariableBlock;
- (id /* block */)variableBlock;
- (id)variableCoordinator;
- (id)variableProvider;
- (id)variableUIDelegate;

@end
