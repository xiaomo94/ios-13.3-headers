/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSettingsAlertContentController : UIViewController <UIGestureRecognizerDelegate> {
    UIControl * _controlHighlightedForPan;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    _SFSettingsAlertItem * _focusedItem;
    NSArray * _focusedItemConstraints;
    NSMutableIndexSet * _groupStartIndices;
    NSMutableArray * _items;
    UIView * _lastViewForAlignment;
    UIScrollView * _scrollView;
    UIStackView * _stackView;
    NSArray * _stackViewTopBottomConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFSettingsAlertItem *focusedItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addGroupSeparatorIfNeededBeforeItemAtIndex:(unsigned long long)arg1;
- (void)_addViewForItem:(id)arg1;
- (id)_alertController;
- (void)_alignButtonImageView:(id)arg1;
- (id)_createViewForItem:(id)arg1;
- (void)_panRecognized:(id)arg1;
- (void)_stepperValueChanged:(id)arg1;
- (void)_tappedItemView:(id)arg1;
- (void)_updateFocusedItemConstraints;
- (void)_updatePreferredContentSize;
- (void)_updateSeparators;
- (void)addDivider;
- (void)addItem:(id)arg1;
- (id)focusedItem;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)items;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setFocusedItem:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
