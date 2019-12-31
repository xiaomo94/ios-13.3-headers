/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusFastScrollingIndexBarEntry : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _cachedContentOffset;
    id /* block */  _contentOffsetGenerator;
    bool  _hasCachedContentOffset;
    bool  _isPlaceholder;
    NSIndexPath * _targetFocusedIndexPath;
    NSString * _title;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } contentOffset;
@property (getter=isPlaceholder, nonatomic, readonly) bool placeholder;
@property (nonatomic, copy) NSIndexPath *targetFocusedIndexPath;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)entryWithTitle:(id)arg1 contentOffset:(struct CGPoint { double x1; double x2; })arg2;
+ (id)entryWithTitle:(id)arg1 generator:(id /* block */)arg2;
+ (id)placeholderEntryWithEntryBefore:(id)arg1 after:(id)arg2;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (id)description;
- (id)initWithTitle:(id)arg1 contentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithTitle:(id)arg1 generator:(id /* block */)arg2;
- (bool)isPlaceholder;
- (void)setTargetFocusedIndexPath:(id)arg1;
- (id)targetFocusedIndexPath;
- (id)title;

@end
