/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFActionDrawerCompositeResultsViewController : UIViewController <WFActionDrawerResultsControlling> {
    NSArray * _actionSections;
    NSArray * _appSections;
    WFActionDrawerResults * _results;
    NSArray * _suggestionSections;
    UITableView * _tableView;
    NSArray * _userActivitySections;
}

@property (nonatomic, readonly) NSArray *actionSections;
@property (nonatomic, readonly) NSArray *appSections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFActionDrawerResults *results;
@property (nonatomic, readonly) NSArray *suggestionSections;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, readonly) NSArray *userActivitySections;

- (void).cxx_destruct;
- (id)actionSections;
- (id)appSections;
- (id)categorizeResults:(id)arg1;
- (id)convertDonationsToActionsForSections:(id)arg1;
- (void)reloadViews;
- (id)results;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setResults:(id)arg1 animated:(bool)arg2;
- (void)setTableView:(id)arg1;
- (id)suggestionSections;
- (id)tableView;
- (id)userActivitySections;

@end
