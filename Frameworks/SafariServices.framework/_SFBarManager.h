/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBarManager : NSObject {
    NSMapTable * _barToRegistrationMap;
    bool  _bookmarksItemSelected;
    id /* block */  _coalescedUpdatesBlock;
    NSTimer * _coalescedUpdatesTimer;
    bool  _deferUpdateAllRegistrations;
    <_SFBarManagerDelegate> * _delegate;
    double  _downloadsItemProgress;
    bool  _itemEnabledMap;
    bool  _itemHiddenMap;
    double  _lastCoalescedUpdatesTime;
    bool  _needsUpdateAllRegistrations;
}

@property (getter=isBookmarksItemSelected, nonatomic) bool bookmarksItemSelected;
@property (nonatomic) <_SFBarManagerDelegate> *delegate;
@property (nonatomic) double downloadsItemProgress;

- (void).cxx_destruct;
- (void)_invalidateCoalescedUpdatesTimer;
- (void)_performCoalescedUpdatesNow;
- (void)_updateAllRegistrations;
- (void)_updateRegistration:(id)arg1;
- (bool)barRegistration:(id)arg1 canHandleLongPressForBarItem:(long long)arg2;
- (void)barRegistration:(id)arg1 didReceiveLongPressForBarItem:(long long)arg2;
- (void)barRegistration:(id)arg1 didReceiveTapForBarItem:(long long)arg2;
- (void)barRegistration:(id)arg1 didReceiveTouchDownForBarItem:(long long)arg2;
- (id)delegate;
- (double)downloadsItemProgress;
- (id)init;
- (bool)isBarItemEnabled:(long long)arg1;
- (bool)isBarItemHidden:(long long)arg1;
- (bool)isBookmarksItemSelected;
- (void)performCoalescedUpdates:(id /* block */)arg1;
- (void)pulseDownloadsItem;
- (void)registerToolbar:(id)arg1 withLayout:(long long)arg2 persona:(unsigned long long)arg3;
- (void)setBarItem:(long long)arg1 enabled:(bool)arg2;
- (void)setBarItem:(long long)arg1 hidden:(bool)arg2;
- (void)setBookmarksItemSelected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloadsItemNeedsLayout;
- (void)setDownloadsItemProgress:(double)arg1;
- (unsigned long long)test_numberOfRegistrations;
- (id)test_registrationForBar:(id)arg1;
- (void)visibleBarItemsNeedUpdate;

@end
