/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVStackCommonTemplateController : _TVBgImageLoadingViewController <TVAppTemplateImpressionable, TVMediaProviding, TVObserving, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, _TVCollectionViewDelegate> {
    IKAudioElement * _audioElement;
    IKViewElement * _backgroundElement;
    UIImage * _bgImage;
    IKImageElement * _bgImgElement;
    IKMediaContentElement * _bgMediaContentElement;
    IKViewElement * _collectionListElement;
    _TVStackCollectionView * _collectionView;
    _TVFocusCaptureView * _disabledTemplateFocusCaptureView;
    UIViewController * _focusedSupplementaryViewController;
    IKImageElement * _heroImgElement;
    double  _impressionThreshold;
    <TVMediaPlaying> * _mediaPlayer;
    TVObservableEventController * _observableEventController;
    UIView * _overlayView;
    TVMediaInfo * _selectedMediaInfo;
    NSArray * _supplementaryViewControllers;
    IKImageElement * _uberImgElement;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) IKAudioElement *audioElement;
@property (nonatomic, retain) IKViewElement *backgroundElement;
@property (nonatomic, retain) UIImage *bgImage;
@property (nonatomic, retain) IKImageElement *bgImgElement;
@property (nonatomic, retain) IKMediaContentElement *bgMediaContentElement;
@property (nonatomic, retain) IKViewElement *collectionListElement;
@property (nonatomic, retain) _TVStackCollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIViewController *focusedSupplementaryViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IKImageElement *heroImgElement;
@property (nonatomic) <TVMediaPlaying> *mediaPlayer;
@property (nonatomic, readonly) TVObservableEventController *observableEventController;
@property (nonatomic, retain) TVMediaInfo *selectedMediaInfo;
@property (nonatomic, readonly, retain) _TVStackWrappingView *stackWrappingView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supplementaryViewControllers;
@property (nonatomic, retain) IKImageElement *uberImgElement;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (id)_backgroundImageProxy;
- (struct CGSize { double x1; double x2; })_backgroundImageProxySize;
- (bool)_backgroundImageRequiresBlur;
- (long long)_blurEffectStyle;
- (void)_cancelImpressionsUpdate;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (void)_disableScrollingIfNecessary:(id)arg1;
- (void)_dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)_flowLayout;
- (bool)_isBackdropNeeded;
- (void)_mediaPlayerCoverImageDidChange;
- (void)_mediaPlayerStateDidChange;
- (id)_modalPresenterPresentedViewController;
- (id)_overlayView;
- (id)_preferredFocusedSupplementaryView;
- (void)_recordImpressionsForVisibleView;
- (bool)_shouldLoadBackgroundImageAsynchronously;
- (long long)_supplementaryViewSectionIndex;
- (void)_updateBackgroundViews;
- (void)_updateImpressions;
- (bool)_updateSupplementaryViewControllersWithElements:(id)arg1 updateStyles:(bool)arg2;
- (void)_updateViewLayout;
- (void)_updateViewOverlay;
- (void)_updateViewSupplementaryViews;
- (void)addObserver:(id)arg1 forEvent:(id)arg2;
- (id)audioElement;
- (bool)automaticallyAdjustsScrollViewInsets;
- (id)backgroundElement;
- (id)bgImage;
- (id)bgImgElement;
- (id)bgMediaContentElement;
- (id)collectionListElement;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)didUpdateSupplementarySectionInfo;
- (id)focusedSupplementaryViewController;
- (void)handleEvent:(id)arg1 sender:(id)arg2 withUserInfo:(id)arg3;
- (id)heroImgElement;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)loadView;
- (id)mediaPlayer;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)observableEventController;
- (id)parsedMediaInfo;
- (id)preferredFocusEnvironments;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forEvent:(id)arg2;
- (void)scrollToTop;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectedMediaInfo;
- (void)setAudioElement:(id)arg1;
- (void)setBackgroundElement:(id)arg1;
- (void)setBgImage:(id)arg1;
- (void)setBgImgElement:(id)arg1;
- (void)setBgMediaContentElement:(id)arg1;
- (void)setCollectionListElement:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setFocusedSupplementaryViewController:(id)arg1;
- (void)setHeroImgElement:(id)arg1;
- (void)setMediaPlayer:(id)arg1;
- (void)setSelectedMediaInfo:(id)arg1;
- (void)setSupplementaryViewControllers:(id)arg1;
- (void)setUberImgElement:(id)arg1;
- (void)setViewElement:(id)arg1;
- (id)stackWrappingView;
- (id)supplementaryViewControllers;
- (void)traitCollectionDidChange:(id)arg1;
- (id)uberImgElement;
- (void)updateBackgroundAndBackdrop;
- (void)updateBackgroundAndBackdropMaskFactor;
- (void)updateWithViewElement:(id)arg1;
- (id)viewControllerWithElement:(id)arg1 layout:(id)arg2 existingController:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (id)viewElement;
- (void)viewSafeAreaInsetsDidChange;

@end
