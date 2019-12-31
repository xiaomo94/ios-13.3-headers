/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface VCUIShortcutViewController : UIViewController <UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, WFWorkflowViewControllerDelegate> {
    UIView * _customView;
    UIView * _customViewContainer;
    NSLayoutConstraint * _customViewContainerHeightConstraint;
    WFDatabase * _database;
    <VCUIShortcutViewControllerDelegate> * _delegate;
    bool  _hasAppeared;
    WFWorkflowViewController * _inlineWorkflowViewController;
    unsigned long long  _mode;
    UINavigationController * _navigationController;
    OBTrayButton * _primaryButton;
    UIBarButtonItem * _rightBarButtonItem;
    OBTrayButton * _secondaryButton;
    NSString * _shortcutDescription;
    WFWorkflowIcon * _shortcutIcon;
    NSString * _shortcutName;
    UITableView * _tableView;
    NSLayoutConstraint * _tableViewHeightConstraint;
    OBWelcomeController * _welcomeController;
    WFWorkflow * _workflow;
}

@property (nonatomic, retain) UIView *customView;
@property (nonatomic, readonly) UIView *customViewContainer;
@property (nonatomic, readonly) NSLayoutConstraint *customViewContainerHeightConstraint;
@property (nonatomic, readonly) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCUIShortcutViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAppeared;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFWorkflowViewController *inlineWorkflowViewController;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, retain) OBTrayButton *primaryButton;
@property (nonatomic, retain) UIBarButtonItem *rightBarButtonItem;
@property (nonatomic, retain) OBTrayButton *secondaryButton;
@property (nonatomic, copy) NSString *shortcutDescription;
@property (nonatomic, copy) WFWorkflowIcon *shortcutIcon;
@property (nonatomic, copy) NSString *shortcutName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) NSLayoutConstraint *tableViewHeightConstraint;
@property (nonatomic, readonly) OBWelcomeController *welcomeController;
@property (nonatomic, retain) WFWorkflow *workflow;

+ (bool)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)captionText;
- (id)createdSecondaryButton;
- (unsigned long long)currentPreviewMode;
- (id)customView;
- (id)customViewContainer;
- (id)customViewContainerHeightConstraint;
- (id)database;
- (void)dealloc;
- (id)delegate;
- (void)didTapCancel;
- (void)didTapPrimaryButton;
- (void)didTapSecondaryButton;
- (int)eventSource;
- (bool)hasAppeared;
- (id)headerImage;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 mode:(unsigned long long)arg3;
- (id)inlineWorkflowViewController;
- (bool)isUpdatingExistingShortcut;
- (void)keyboardWillChange:(id)arg1;
- (unsigned long long)mode;
- (id)nameCell;
- (id)nameSectionTitle;
- (id)navigationController;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)primaryButton;
- (id)primaryButtonTintColor;
- (id)primaryButtonTitle;
- (id)rightBarButtonItem;
- (id)secondaryButton;
- (id)secondaryButtonTintColor;
- (id)secondaryButtonTitle;
- (void)setCustomView:(id)arg1;
- (void)setCustomView:(id)arg1 withHeight:(double)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHasAppeared:(bool)arg1;
- (void)setInlineWorkflowViewController:(id)arg1;
- (void)setPrimaryButton:(id)arg1;
- (void)setRightBarButtonItem:(id)arg1;
- (void)setSecondaryButton:(id)arg1;
- (void)setShortcutDescription:(id)arg1;
- (void)setShortcutIcon:(id)arg1;
- (void)setShortcutName:(id)arg1;
- (void)setWorkflow:(id)arg1;
- (id)shortcutDescription;
- (id)shortcutIcon;
- (id)shortcutName;
- (id)shortcutPreview;
- (id)shortcutPreviewImage;
- (bool)shouldShowActionCell;
- (id)subtitle;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableViewHeightConstraint;
- (void)textFieldDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)title;
- (void)trackAddEvent;
- (void)updateCustomView;
- (void)updatePrimaryButton;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)welcomeController;
- (id)workflow;
- (void)workflowViewController:(id)arg1 didChangeContentSize:(struct CGSize { double x1; double x2; })arg2;

@end
