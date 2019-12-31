/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKCollectionDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate_Private> {
    NSString * _analyticsKey;
    bool  _onDarkBackground;
    UIViewController * _presentationViewController;
    NSArray * _searchTerms;
    NSString * _searchText;
    bool  _useStandardHeaders;
}

@property (nonatomic) NSString *analyticsKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSearching;
@property (nonatomic, readonly) long long itemCount;
@property (nonatomic) bool onDarkBackground;
@property (nonatomic, readonly) double preferredCollectionHeight;
@property (nonatomic) UIViewController *presentationViewController;
@property (nonatomic, retain) NSArray *searchTerms;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic, readonly) NSString *sectionHeaderText;
@property (readonly) Class superclass;
@property (nonatomic) bool useStandardHeaders;

- (id)analyticsKey;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (void)dismissViewController:(id)arg1;
- (id)headerTextForSection:(long long)arg1;
- (bool)isSearching;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (bool)onDarkBackground;
- (double)preferredCollectionHeight;
- (id)presentationViewController;
- (id)searchKeyForSection:(long long)arg1;
- (bool)searchMatchesItem:(id)arg1 inSection:(long long)arg2;
- (id)searchTerms;
- (id)searchText;
- (void)searchTextHasChanged;
- (id)sectionHeaderText;
- (void)setAnalyticsKey:(id)arg1;
- (void)setOnDarkBackground:(bool)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setUseStandardHeaders:(bool)arg1;
- (void)setupCollectionView:(id)arg1;
- (void)showViewController:(id)arg1 popoverSourceView:(id)arg2;
- (bool)useStandardHeaders;

@end
