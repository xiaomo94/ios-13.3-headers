/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAppIcon : SBLeafIcon {
    SearchUIAppIconImage * _iconImage;
    SFSearchResult * _searchResult;
    unsigned long long  _variant;
}

@property (nonatomic, retain) SearchUIAppIconImage *iconImage;
@property (nonatomic, readonly) SFSearchResult *searchResult;
@property (nonatomic, readonly) unsigned long long variant;

+ (bool)canGenerateIconsInBackground;
+ (bool)isPlaceholderIcon;

- (void).cxx_destruct;
- (void)applicationWithBundleIdentifierDidChangeIconAccessories:(id)arg1;
- (void)iconDidChange;
- (id)iconImage;
- (id)initWithSearchResult:(id)arg1 variant:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)searchResult;
- (void)setIconImage:(id)arg1;
- (id)uniqueIdentifier;
- (unsigned long long)variant;

@end
