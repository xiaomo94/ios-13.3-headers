/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFVariableFieldParameterSummaryEditor : WFModuleSummaryEditor {
    bool  _hasChangedText;
    WFStringParameterState * _stagedState;
}

@property (nonatomic) bool hasChangedText;
@property (nonatomic, retain) WFStringParameterState *stagedState;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)cancelEditingWithCompletionHandler:(id /* block */)arg1;
- (bool)hasChangedText;
- (void)setHasChangedText:(bool)arg1;
- (void)setStagedState:(id)arg1;
- (id)stagedState;
- (void)textEntryDidFinish;
- (void)textEntryTextDidChange:(id)arg1;
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(bool*)arg2;

@end
