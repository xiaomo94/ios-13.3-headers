/* Generated by RuntimeBrowser.
 */

@protocol PXGDataSourceDrivenLayout <NSObject>

@required

- (void)applySectionedChangeDetails:(void *)arg1 dataSourceAfterChanges:(void *)arg2 sublayoutProvider:(void *)arg3 outChangedSections:(void *)arg4 outSectionsWithItemChanges:(void *)arg5 changeMediaVersionHandler:(void *)arg6; // needs 6 arg types, found 12: NSArray *, PXSectionedDataSource *, <PXGSublayoutProvider> *, id*, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; }, struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; }, void*
- (void)applySectionedChangedDetailsForSingleSection:(void *)arg1 dataSourceAfterChanges:(void *)arg2 changeMediaVersionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, PXSectionedDataSource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; }, struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; }, void*

@end
