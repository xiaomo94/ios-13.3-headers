/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPExtensionCollection : FPItemCollection {
    FPItemID * _alternateID;
    FPExtensionEnumerationSettings * _settings;
}

@property (readonly) FPItemID *enumeratedItemID;
@property (copy) FPExtensionEnumerationSettings *settings;

+ (bool)_item:(id)arg1 isCollectionRootForObservedItemID:(id)arg2;
+ (bool)item:(id)arg1 isValidForObservedItemID:(id)arg2;

- (void).cxx_destruct;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (id)description;
- (id)enumeratedItemID;
- (id)initWithSettings:(id)arg1;
- (bool)isCollectionValidForItem:(id)arg1;
- (bool)isRootItem:(id)arg1;
- (id)scopedSearchQuery;
- (void)setSettings:(id)arg1;
- (id)settings;
- (void)updateRootItem:(id)arg1;

@end
