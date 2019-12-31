/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKFriendListViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDataSource, UITableViewDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    NSMutableArray * _allPlayers;
    NSArray * _allPlayersForDisplay;
    <GKFriendListViewControllerDelegate> * _delegate;
    NSMutableArray * _friendPlayers;
    NSArray * _friendsForDisplay;
    bool  _needsShowMoreFooter;
    NSMutableArray * _recentPlayers;
    NSArray * _recentsForDisplay;
    UISearchController * _searchController;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) NSMutableArray *allPlayers;
@property (nonatomic, retain) NSArray *allPlayersForDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GKFriendListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *friendPlayers;
@property (nonatomic, retain) NSArray *friendsForDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsShowMoreFooter;
@property (nonatomic, retain) NSMutableArray *recentPlayers;
@property (nonatomic, retain) NSArray *recentsForDisplay;
@property (nonatomic, retain) UISearchController *searchController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityIndicator;
- (void)addFriends:(id)arg1;
- (id)allPlayers;
- (id)allPlayersForDisplay;
- (id)delegate;
- (void)deletePlayerAtIndexPath:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (id)friendPlayers;
- (id)friendsForDisplay;
- (id)getPlayerAtIndexPath:(id)arg1;
- (void)loadData;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (void)loadMoreFriends;
- (bool)needsShowMoreFooter;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)recentPlayers;
- (id)recentsForDisplay;
- (void)reportPlayerAtIndexPath:(id)arg1;
- (id)searchController;
- (void)setActivityIndicator:(id)arg1;
- (void)setAllPlayers:(id)arg1;
- (void)setAllPlayersForDisplay:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFriendPlayers:(id)arg1;
- (void)setFriendsForDisplay:(id)arg1;
- (void)setNeedsShowMoreFooter:(bool)arg1;
- (void)setRecentPlayers:(id)arg1;
- (void)setRecentsForDisplay:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setupNavBar;
- (void)setupSearchController;
- (void)showLoadingIndicator;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (bool)tableViewHasFooter:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
