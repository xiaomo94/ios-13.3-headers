/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCUserInterfaceStateStore : NSObject {
    NSMutableDictionary * _uiStateMap;
}

@property (retain) NSMutableDictionary *uiStateMap;

+ (id)sharedStore;

- (void).cxx_destruct;
- (id)_loadUserInterfaceStateFromDefaultsForConfiguration:(id)arg1;
- (void)_pruneOldState;
- (id)_sortedInterfaceStateKeys;
- (void)_writeMostRecentUserInterfaceStateToDefaultsForConfiguration:(id)arg1;
- (void)_writeUserInterfaceStateToDefaultsForConfiguration:(id)arg1;
- (id)docUserDefaults;
- (id)init;
- (id)interfaceStateForConfiguration:(id)arg1;
- (id)mostRecentInterfaceStateForConfiguration:(id)arg1;
- (void)purgeStateForConfiguration:(id)arg1;
- (void)setUiStateMap:(id)arg1;
- (id)uiStateMap;
- (void)updateInterfaceState:(id)arg1 forConfiguration:(id)arg2;

@end
