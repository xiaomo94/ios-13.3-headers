/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFRepeatIndexVariableNameMigration : WFWorkflowMigration

+ (bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (void)calculateVariableNamesAtActionIndex:(unsigned long long)arg1 oldRepeatScopeVariables:(id*)arg2;
- (void)migrateWorkflow;

@end
