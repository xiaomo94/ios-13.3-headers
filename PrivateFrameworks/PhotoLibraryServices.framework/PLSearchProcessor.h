/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchProcessor : NSObject {
    PSIDatabase * _searchIndex;
}

@property (nonatomic, readonly) PSIDatabase *searchIndex;

+ (id)_scoreByCategoryMask;
+ (id)searchProcessorLog;

- (void).cxx_destruct;
- (id)_alphabeticalSortDescriptors;
- (bool)_categoryMaskIsCombinable:(unsigned long long)arg1;
- (id)_combinedFilenameSearchResultsFromSearchResults:(id)arg1 inQuery:(id)arg2;
- (id)_completionFilenameResultsForFilenameResults:(id)arg1;
- (id)_dateSortDescriptors;
- (void)_extractSearchResultsFromGroupResults:(id)arg1 withQuery:(id)arg2 resultsHandler:(id /* block */)arg3;
- (id)_numberOfAssetsSortDescriptors;
- (id)_searchResultsByCategoryMasksForSearchResults:(id)arg1;
- (bool)_shouldOmitSectionForCategoryMask:(unsigned long long)arg1;
- (id)_sortDescriptorsForCategoryMask:(unsigned long long)arg1;
- (id)completionSuggestionsForQuery:(id)arg1 withSearchSections:(id)arg2 numberOfSuggestions:(unsigned long long)arg3;
- (id)initWithDatabase:(id)arg1;
- (void)performQuery:(id)arg1 withResultsHandler:(id /* block */)arg2;
- (id)searchIndex;
- (id)searchResultSectionsForQuery:(id)arg1 withAssetResults:(id)arg2 collectionResults:(id)arg3 combineAssetSections:(bool)arg4;
- (id)updatedSearchSections:(id)arg1 withTopCollectionResults:(id)arg2;

@end
