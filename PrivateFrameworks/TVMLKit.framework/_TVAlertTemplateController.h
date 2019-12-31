/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVAlertTemplateController : _TVBgImageLoadingViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, _TVCollectionViewDelegate> {
    IKImageElement * _bgHeroImageElement;
    IKImageElement * _bgImageElement;
    _TVCollectionView * _collectionView;
    NSArray * _collectionViewElements;
    NSIndexPath * _lastFocusedIndexPath;
    IKViewElement * _templateElement;
    bool  _updateAutoHighlight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundImageProxy;
- (struct CGSize { double x1; double x2; })_backgroundImageProxySize;
- (bool)_backgroundImageRequiresBlur;
- (long long)_blurEffectStyle;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (void)_scrollToPreferredFocusView;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (void)updateWithTemplateElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidLayoutSubviews;

@end
