/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewListCellReorderControl : UIView <UIGestureRecognizerDelegate> {
    <_UICollectionViewListCellReorderControlDelegate> * _delegate;
    id /* block */  _grabberImageProvider;
    UIImageView * _imageView;
    UILongPressGestureRecognizer * _reorderRecognizer;
    bool  _tracking;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UICollectionViewListCellReorderControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ grabberImageProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)beginReordering;
- (id)delegate;
- (void)endReordering:(bool)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id /* block */)grabberImageProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 grabberImageProvider:(id /* block */)arg2;
- (void)layoutSubviews;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)pan:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGrabberImageProvider:(id /* block */)arg1;

@end
