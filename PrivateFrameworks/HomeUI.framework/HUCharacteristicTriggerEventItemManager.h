/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCharacteristicTriggerEventItemManager : HFItemManager {
    HFItem * _activeOptionItem;
    HUTriggerConditionEditorItemModule * _conditionModule;
    HUInstructionsItem * _instructionsItem;
    HUCharacteristicEventOptionProvider * _optionProvider;
    HFItem * _serviceNameItem;
    HFItem<HFServiceVendor> * _serviceVendingItem;
    HFStaticItemProvider * _staticItemProvider;
}

@property (nonatomic, retain) HFItem *activeOptionItem;
@property (nonatomic, readonly) HUTriggerConditionEditorItemModule *conditionModule;
@property (nonatomic, retain) HUInstructionsItem *instructionsItem;
@property (nonatomic, retain) HUCharacteristicEventOptionProvider *optionProvider;
@property (nonatomic, retain) HFItem *serviceNameItem;
@property (nonatomic, retain) HFItem<HFServiceVendor> *serviceVendingItem;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;

+ (id /* block */)_optionItemComparator;
+ (id)_titleForItemSection:(id)arg1;
+ (id)serviceVendingItemForCharacteristicTriggerBuilder:(id)arg1;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)activeOptionItem;
- (id)conditionModule;
- (id)initWithCharacteristicTriggerBuilder:(id)arg1 delegate:(id)arg2;
- (id)instructionsItem;
- (id)optionProvider;
- (id)serviceNameItem;
- (id)serviceVendingItem;
- (void)setActiveOptionItem:(id)arg1;
- (void)setInstructionsItem:(id)arg1;
- (void)setOptionProvider:(id)arg1;
- (void)setServiceNameItem:(id)arg1;
- (void)setServiceVendingItem:(id)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (id)staticItemProvider;

@end
