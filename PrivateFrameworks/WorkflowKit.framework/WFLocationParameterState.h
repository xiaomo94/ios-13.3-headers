/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLocationParameterState : WFVariableSubstitutableParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (void)getContentCollectionWithVariableSource:(id)arg1 parameter:(id)arg2 environment:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)getContentItemFromValue:(id)arg1 withVariableSource:(id)arg2 parameter:(id)arg3 environment:(long long)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithValue:(id)arg1;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 environment:(long long)arg3 userInputRequiredHandler:(id /* block */)arg4 valueHandler:(id /* block */)arg5;

@end
