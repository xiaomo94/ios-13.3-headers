/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSceneSuggestionsItemManager : HFItemManager {
    HFItem * _addCustomSceneItem;
    HFActionSetSuggestionItemProvider * _suggestionItemProvider;
}

@property (nonatomic, retain) HFItem *addCustomSceneItem;
@property (nonatomic, retain) HFActionSetSuggestionItemProvider *suggestionItemProvider;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_currentSectionIdentifiers;
- (id)_identifierForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfSections;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)addCustomSceneItem;
- (void)setAddCustomSceneItem:(id)arg1;
- (void)setSuggestionItemProvider:(id)arg1;
- (id)suggestionItemProvider;

@end
