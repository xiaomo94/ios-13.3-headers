/* Generated by RuntimeBrowser.
 */

@protocol PXBrowserSummaryControllerDataSource <NSObject>

@optional

- (NSDateInterval *)containerDateIntervalForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (NSString *)containerTitleForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (bool)isFilteringContainerContentForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (NSString *)localizedContainerItemsCountForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (<PXBrowserSelectionSnapshot> *)selectionSnapshotForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (bool)shouldShowImportDates;
- (<PXBrowserVisibleContentSnapshot> *)visibleContentSnapshotForBrowserSummaryController:(PXBrowserSummaryController *)arg1;

@end
