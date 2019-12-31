/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBrowserSavedState : NSObject {
    SFBrowserStateSQLiteStore * _browserStateSQLiteStore;
    NSArray * _browserWindows;
    bool  _checkPointWriteAheadLogOnNextUpdate;
    bool  _haveLoadedRecentlyClosedTabs;
    NSMutableArray * _recentlyClosedTabs;
    bool  _secureDeleteEnabled;
    NSCountedSet * _tabCountByWindowUUID;
}

@property (nonatomic, copy) NSArray *browserWindows;
@property (nonatomic, retain) NSArray *recentlyClosedTabs;
@property (nonatomic) bool secureDeleteEnabled;

+ (id)ephemeralSavedState;
+ (void)setSharedBrowserSavedState:(id)arg1;
+ (void)setShouldMergeAllWindowsIfNeeded:(bool)arg1;
+ (id)sharedBrowserSavedState;
+ (bool)shouldMergeAllWindowsIfNeeded;

- (void).cxx_destruct;
- (void)_checkPointWriteAheadLogIfNeeded;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_notifyThatRecentlyClosedTabsWereRemoved:(id)arg1;
- (void)_readBrowserControllersSavedState;
- (void)_readRecentlyClosedTabsStateIfNecessary;
- (void)_removeRecentlyClosedTabStateData:(id)arg1;
- (bool)activeDocumentIsValidForBrowserControllerWithUUID:(id)arg1;
- (void)addRecentlyClosedTabs:(id)arg1;
- (id)browserWindows;
- (void)clearAllSavedStatesAndCloseDatabase;
- (void)clearAllSavedStatesClosingDatabase:(bool)arg1;
- (void)clearRecentlyClosedTabs;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1;
- (id)initWithDefaultBrowserStateDatabase;
- (id)initWithInMemoryDatabase;
- (void)loadSessionStateDataAndRemoveRecentlyClosedTab:(id)arg1;
- (id)readSavedSessionStateDataForTabWithUUID:(id)arg1;
- (id)recentlyClosedTabs;
- (void)removeRecentlyClosedTabWithStateData:(id)arg1;
- (void)removeTabStateWithTabData:(id)arg1;
- (void)removeTabsStateForBrowserControllerWithUUID:(id)arg1 andRemoveWindow:(bool)arg2;
- (void)saveTabStateData:(id)arg1;
- (void)saveTabsState:(id)arg1 forBrowserControllerWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (id)savedTabsStateForBrowserControllerWithUUID:(id)arg1;
- (bool)secureDeleteEnabled;
- (void)setActiveDocumentIsValid:(bool)arg1 forBrowserControllerWithUUID:(id)arg2;
- (void)setBrowserWindows:(id)arg1;
- (void)setRecentlyClosedTabs:(id)arg1;
- (void)setSecureDeleteEnabled:(bool)arg1;
- (id)tabStateDataForUUID:(id)arg1;
- (void)updateBrowserWindowState:(id)arg1 tabs:(id)arg2;
- (void)updateSceneID:(id)arg1;

@end
