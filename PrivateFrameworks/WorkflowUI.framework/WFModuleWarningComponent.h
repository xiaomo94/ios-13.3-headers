/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFModuleWarningComponent : CKCompositeComponent {
    struct CKTypedComponentAction<unsigned long> { 
        unsigned long long _variant; 
        id _target; 
        CKComponentScopeHandle *_scopeHandle; 
        SEL _selector; 
    }  _buttonAction;
}

+ (id)newWithMessage:(id)arg1 buttonTitles:(id)arg2 buttonAction:(struct CKTypedComponentAction<unsigned long> { unsigned long long x1; id x2; id x3; SEL x4; })arg3 loading:(bool)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;

@end
