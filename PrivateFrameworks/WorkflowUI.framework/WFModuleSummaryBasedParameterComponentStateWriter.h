/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFModuleSummaryBasedParameterComponentStateWriter : NSObject <WFModuleParameterStateWriter> {
    id /* block */  _updateBlock;
}

@property (nonatomic, readonly) id /* block */ updateBlock;

- (void).cxx_destruct;
- (id)initWithUpdateBlock:(id /* block */)arg1;
- (bool)setState:(id)arg1 ofParameter:(id)arg2;
- (id /* block */)updateBlock;

@end