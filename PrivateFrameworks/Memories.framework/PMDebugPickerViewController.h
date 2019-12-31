/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMDebugPickerViewController : UITableViewController {
    NSDictionary * _displayNamesByEntryID;
    NSDictionary * _entryIDsByMood;
    NSString * _moodID;
    NSObject<NSCopying> * _originalEntryID;
    <PMPlayerControlling> * _playerController;
    id /* block */  _replaceMoodPartForEntryIDBlock;
    long long  _selectedRow;
    long long  _selectedSection;
    NSArray * _sortedMoodIDs;
}

@property (nonatomic, retain) NSDictionary *displayNamesByEntryID;
@property (nonatomic, retain) NSDictionary *entryIDsByMood;
@property (nonatomic, copy) NSString *moodID;
@property (nonatomic, copy) NSObject<NSCopying> *originalEntryID;
@property (nonatomic) <PMPlayerControlling> *playerController;
@property (nonatomic, copy) id /* block */ replaceMoodPartForEntryIDBlock;
@property (nonatomic) long long selectedRow;
@property (nonatomic) long long selectedSection;
@property (nonatomic, retain) NSArray *sortedMoodIDs;

- (void).cxx_destruct;
- (void)_addObserverForTextSizeDidChange;
- (id)_entryIDForIndexPath:(id)arg1;
- (id)_indexPathForEntryID:(id)arg1;
- (id)_moodIDForSection:(long long)arg1;
- (void)_removeObserverForTextSizeDidChange;
- (bool)_setSelected:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)displayNamesByEntryID;
- (id)entryIDsByMood;
- (id)moodID;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)originalEntryID;
- (id)playerController;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (id /* block */)replaceMoodPartForEntryIDBlock;
- (long long)selectedRow;
- (long long)selectedSection;
- (void)setDisplayNamesByEntryID:(id)arg1;
- (void)setEntryIDsByMood:(id)arg1;
- (void)setMoodID:(id)arg1;
- (void)setOriginalEntryID:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setReplaceMoodPartForEntryIDBlock:(id /* block */)arg1;
- (void)setSelectedRow:(long long)arg1;
- (void)setSelectedSection:(long long)arg1;
- (void)setSortedMoodIDs:(id)arg1;
- (id)sortedMoodIDs;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)userTextSizeDidChange;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
