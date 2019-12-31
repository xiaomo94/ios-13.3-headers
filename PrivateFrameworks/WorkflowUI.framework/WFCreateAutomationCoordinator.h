/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFCreateAutomationCoordinator : NSObject <HUTriggerEditorDelegate, WFAutomationSelectTypeViewControllerDelegate, WFAutomationSummaryViewControllerDelegate, WFAutomationTypeChooserViewControllerDelegate, WFTriggerComposeViewControllerDelegate, WFTriggerConfigurationViewControllerDelegate> {
    WFDatabase * _database;
    <WFCreateAutomationCoordinatorDelegate> * _delegate;
    WFHomeManager * _homeManager;
    UINavigationController * _navigationController;
    NSString * _triggerID;
    WFTriggerManager * _triggerManager;
    WFConfiguredTriggerRecord * _triggerRecord;
    WFWorkflow * _workflow;
}

@property (nonatomic, retain) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFCreateAutomationCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFHomeManager *homeManager;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *triggerID;
@property (nonatomic, retain) WFTriggerManager *triggerManager;
@property (nonatomic, retain) WFConfiguredTriggerRecord *triggerRecord;
@property (nonatomic, retain) WFWorkflow *workflow;

- (void).cxx_destruct;
- (void)automationSummaryViewController:(id)arg1 didFinishWithTrigger:(id)arg2;
- (void)automationTypeChooser:(id)arg1 didChooseAutomationType:(unsigned long long)arg2;
- (void)buildViewControllerForAutomationTypeChooserStepWithCompletion:(id /* block */)arg1;
- (void)buildViewControllerForHomeTriggerChooserStepWithBackButtonAction:(unsigned long long)arg1 hostingViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)buildViewControllerForPersonalTriggerChooserStepWithBackButtonAction:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)cancel;
- (id)database;
- (id)delegate;
- (void)finish;
- (id)homeManager;
- (id)initWithDatabase:(id)arg1 homeManager:(id)arg2;
- (id)navigationController;
- (void)openHomeApp;
- (void)selectTypeViewController:(id)arg1 didChooseTriggerClass:(Class)arg2;
- (void)setDatabase:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setTriggerID:(id)arg1;
- (void)setTriggerManager:(id)arg1;
- (void)setTriggerRecord:(id)arg1;
- (void)setWorkflow:(id)arg1;
- (void)startAtStep:(unsigned long long)arg1 hostingViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)triggerComposeViewController:(id)arg1 didFinishWithWorkflow:(id)arg2;
- (void)triggerConfigurationViewController:(id)arg1 didFinishWithTrigger:(id)arg2;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (id)triggerID;
- (id)triggerManager;
- (id)triggerRecord;
- (id)workflow;

@end