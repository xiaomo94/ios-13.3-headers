/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTriggerSummaryActionGridViewController : HUServiceGridViewController <HFActionSetValueSourceDelegate, HUContainedServiceGridViewControllerDelegate, HUSceneEditorDelegate, HUServiceActionControlsViewControllerDelegate, HUServiceGridItemManagerDelegate> {
    HUContainedServicesGridViewController * _presentedServiceGroupDetailsViewController;
    HUServiceGridItemManager * _serviceGridItemManager;
    unsigned long long  _style;
    HFTriggerBuilder * _triggerBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTriggerSummaryActionGridViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HUContainedServicesGridViewController *presentedServiceGroupDetailsViewController;
@property (nonatomic) HUServiceGridItemManager *serviceGridItemManager;
@property (nonatomic, readonly) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFTriggerBuilder *triggerBuilder;

+ (id /* block */)_actionSetItemProviderFilterForTriggerBuilder:(id)arg1;

- (void).cxx_destruct;
- (bool)_hasTapActionForItem:(id)arg1;
- (void)_removeActionsInServiceActionItem:(id)arg1;
- (void)actionSetValueSource:(id)arg1 didUpdateValuesForActionBuilders:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)detailsViewControllerForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (bool)hasDetailsActionForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)initWithItemManager:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1 withStyle:(unsigned long long)arg2;
- (bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (id)presentedServiceGroupDetailsViewController;
- (void)reloadActions;
- (void)sceneEditor:(id)arg1 removeActionSetBuilderFromTrigger:(id)arg2;
- (void)serviceActionControlsViewController:(id)arg1 removeServiceActionItem:(id)arg2;
- (id)serviceGridItemManager;
- (void)setPresentedServiceGroupDetailsViewController:(id)arg1;
- (void)setServiceGridItemManager:(id)arg1;
- (unsigned long long)style;
- (id)triggerBuilder;
- (void)viewDidLoad;

@end
