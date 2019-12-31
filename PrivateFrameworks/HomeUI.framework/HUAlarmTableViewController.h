/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAlarmTableViewController : HUItemTableViewController <HFAccessoryObserver, HFAccessorySettingMobileTimerAdapterObserver, HFMediaObjectObserver, HUAlarmEditViewControllerDelegate, HUHomePodAlarmItemModuleControllerDelegate, HUPresentationDelegateHost> {
    UIBarButtonItem * _addButtonItem;
    HUHomePodAlarmItemModuleController * _alarmModuleController;
    MTAlarm * _alarmToEdit;
    UIBarButtonItem * _doneButtonItem;
    UIBarButtonItem * _editDoneButtonItem;
    bool  _isAccessoryControllable;
    bool  _isAlarmsSettingReady;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    _UIContentUnavailableView * _noItemsView;
    <HUPresentationDelegate> * _presentationDelegate;
}

@property (nonatomic, retain) UIBarButtonItem *addButtonItem;
@property (nonatomic, retain) HUHomePodAlarmItemModuleController *alarmModuleController;
@property (nonatomic, retain) MTAlarm *alarmToEdit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButtonItem;
@property (nonatomic, retain) UIBarButtonItem *editDoneButtonItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAccessoryControllable;
@property (nonatomic, readonly) bool isAlarmsSettingReady;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, retain) _UIContentUnavailableView *noItemsView;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_discernReachabilityForAccessory:(id)arg1;
- (void)_editDoneAction:(id)arg1;
- (void)_layoutNoItemsLabel;
- (void)_numberOfItemsDidChangeAnimated:(bool)arg1;
- (void)_showAddView:(id)arg1;
- (void)_updateAccessoryControllable:(bool)arg1 alarmsSettingReady:(bool)arg2;
- (void)_updateNavigationItems:(bool)arg1;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)accessoryDidUpdateReachableTransports:(id)arg1;
- (id)addButtonItem;
- (void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2;
- (void)alarmEditControllerDidCancel:(id)arg1;
- (id)alarmItemManager;
- (void)alarmItemModuleController:(id)arg1 didSelectAlarm:(id)arg2;
- (id)alarmModuleController;
- (id)alarmToEdit;
- (bool)alwaysUseDeltaTableViewUpdatesAfterViewHasAppeared;
- (id)backgroundView;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)doneButtonItem;
- (id)editDoneButtonItem;
- (id)editViewControllerForAlarm:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1;
- (bool)isAccessoryControllable;
- (bool)isAlarmsSettingReady;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)itemModuleControllers;
- (id)mediaProfileContainer;
- (void)mobileTimerAdapterDidUpdateReadiness:(id)arg1;
- (id)noItemsView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentationDelegate;
- (void)setAddButtonItem:(id)arg1;
- (void)setAlarmModuleController:(id)arg1;
- (void)setAlarmToEdit:(id)arg1;
- (void)setDoneButtonItem:(id)arg1;
- (void)setEditDoneButtonItem:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setNoItemsView:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end