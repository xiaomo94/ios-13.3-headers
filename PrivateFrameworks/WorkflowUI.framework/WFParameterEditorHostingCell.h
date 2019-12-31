/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFParameterEditorHostingCell : UITableViewCell <CKComponentHostingViewDelegate, CKComponentProvider, WFParameterEventObserver> {
    UIViewController * _containingViewController;
    <WFParameterEditorHostingCellDelegate> * _delegate;
    CKComponentHostingView * _hostingView;
    double  _lastWidth;
    WFParameterEditorModel * _model;
}

@property (nonatomic) UIViewController *containingViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFParameterEditorHostingCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CKComponentHostingView *hostingView;
@property (nonatomic) double lastWidth;
@property (nonatomic, retain) WFParameterEditorModel *model;
@property (readonly) Class superclass;

+ (id)componentForModel:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)component:(id)arg1 updatedParameterState:(id)arg2;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (id)containingViewController;
- (id)delegate;
- (id)hostingView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)lastWidth;
- (void)layoutSubviews;
- (id)model;
- (void)parameterAttributesDidChange:(id)arg1;
- (void)setContainingViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostingView:(id)arg1;
- (void)setLastWidth:(double)arg1;
- (void)setModel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateModel:(id)arg1;

@end
