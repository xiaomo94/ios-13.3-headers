/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarCellularCondensedItem : _UIStatusBarCellularItem {
    _UIStatusBarMultilineStringView * _dualNameView;
    _UIStatusBarDualCellularSignalView * _dualSignalView;
    bool  _reducesFontSize;
}

@property (nonatomic, retain) _UIStatusBarMultilineStringView *dualNameView;
@property (nonatomic, retain) _UIStatusBarDualCellularSignalView *dualSignalView;
@property (nonatomic) bool reducesFontSize;

+ (id)dualNameDisplayIdentifier;
+ (id)dualSignalStrengthDisplayIdentifier;

- (void).cxx_destruct;
- (void)_create_dualNameView;
- (void)_create_dualSignalView;
- (id)_fontForEntry:(id)arg1 styleAttributes:(id)arg2 baselineOffset:(double*)arg3;
- (id)_singleCellularEntryMatching:(id /* block */)arg1;
- (id)_stringForCellularType:(long long)arg1;
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)dependentEntryKeys;
- (id)dualNameView;
- (id)dualSignalView;
- (id)entryForDisplayItemWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (bool)reducesFontSize;
- (void)setDualNameView:(id)arg1;
- (void)setDualSignalView:(id)arg1;
- (void)setReducesFontSize:(bool)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
