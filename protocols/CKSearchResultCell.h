/* Generated by RuntimeBrowser.
 */

@protocol CKSearchResultCell <NSObject>

@required

+ (NSString *)reuseIdentifier;

- (void)configureWithQueryResult:(CKSpotlightQueryResult *)arg1 searchText:(NSString *)arg2 mode:(unsigned long long)arg3;
- (bool)isEditing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)refreshForSearchTextIfNeeded:(NSString *)arg1;
- (void)setEditing:(bool)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end