/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFEnumerationParameterComponentController : CKComponentController <WFEnumerationTextTokenChooserPresenter> {
    UISegmentedControl * _segmentedControl;
    WFEnumerationTextTokenChooser * _textTokenChooser;
}

- (void).cxx_destruct;
- (void)completeEditing;
- (void)didUnmount;
- (void)didUpdateComponent;
- (void)loadDynamicEnumerationValuesWithCompletionHandler:(id /* block */)arg1;
- (void)presentTokenChooser:(id)arg1;
- (void)willUnmount;

@end
