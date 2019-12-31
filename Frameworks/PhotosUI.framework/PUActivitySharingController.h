/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUActivitySharingController : NSObject <PUActivityViewControllerDelegate, PUCarouselSharingViewControllerDelegate, PXActivitySharingController, PXChangeObserver, UIActivityViewControllerAirDropDelegate, UIPresentationControllerDelegatePrivate> {
    NSArray * _activities;
    bool  _activityViewControllerWasCreated;
    const struct __CFString { } * _aggregateKey;
    bool  _allowAirPlayActivity;
    NSDictionary * _assetsFetchResultsByAssetCollection;
    PUCarouselSharingViewController * _carouselViewController;
    <PXActivitySharingControllerDelegate> * _delegate;
    bool  _excludeShareActivity;
    NSArray * _excludedActivityTypes;
    PUActivityViewController * _internalActivityViewController;
    PHPerson * _person;
    PUActivitySharingViewModel * _viewModel;
}

@property (nonatomic, copy) NSArray *activities;
@property (nonatomic, readonly) UIActivityViewController<PXActivityViewController> *activityViewController;
@property (nonatomic) const struct __CFString { }*aggregateKey;
@property (nonatomic) bool allowAirPlayActivity;
@property (nonatomic, copy) NSDictionary *assetsFetchResultsByAssetCollection;
@property (nonatomic, retain) PUCarouselSharingViewController *carouselViewController;
@property (nonatomic, readonly) PHAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXActivitySharingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool excludeShareActivity;
@property (nonatomic, copy) NSArray *excludedActivityTypes;
@property (readonly) unsigned long long hash;
@property (nonatomic) PUActivityViewController *internalActivityViewController;
@property (nonatomic, retain) PHPerson *person;
@property (nonatomic, readonly) NSArray *selectedAssets;
@property (nonatomic, readonly) NSDictionary *selectedAssetsByAssetCollection;
@property (nonatomic, readonly) PXSelectionSnapshot *selectionSnapshot;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUActivitySharingViewModel *viewModel;

- (void).cxx_destruct;
- (void)_activitySharingControllerWillDismissActivityViewController;
- (void)_activityViewControllerDidCompleteWithActivityType:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_cancel;
- (id)_createActivityViewControllerWithActivities:(id)arg1;
- (void)_createCarouselSharingViewControllerIfNeeded;
- (void)_incrementShareCountForSelectedAssets;
- (void)_updateActionSheetPresentationStyleIfNeeded;
- (void)_updateExcludedActivityTypes;
- (void)_updateSelectedAssetIdentifiers;
- (id)activities;
- (id)activityViewController;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)arg1;
- (id)activityViewControllerIfAvailable;
- (bool)activityViewControllerShouldCancelAfterPreparationCanceled:(id)arg1;
- (void)activityViewControllerWillDisappear:(id)arg1;
- (const struct __CFString { }*)aggregateKey;
- (bool)allowAirPlayActivity;
- (id)assetsFetchResultsByAssetCollection;
- (void)carouselSharingViewController:(id)arg1 addAssetItem:(id)arg2;
- (void)carouselSharingViewController:(id)arg1 removeAssetItem:(id)arg2;
- (void)carouselSharingViewController:(id)arg1 replaceAssetItem:(id)arg2 withAssetItem:(id)arg3;
- (void)carouselSharingViewController:(id)arg1 setAssetItems:(id)arg2;
- (id)carouselViewController;
- (id)currentAsset;
- (void)dealloc;
- (id)delegate;
- (bool)excludeShareActivity;
- (id)excludedActivityTypes;
- (id)init;
- (id)initWithActivitySharingConfiguration:(id)arg1;
- (id)internalActivityViewController;
- (id)new;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)person;
- (id)photosDataSource;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)selectedAssets;
- (id)selectedAssetsByAssetCollection;
- (id)selectionSnapshot;
- (void)setActivities:(id)arg1;
- (void)setAggregateKey:(struct __CFString { }*)arg1;
- (void)setAllowAirPlayActivity:(bool)arg1;
- (void)setAssetsFetchResultsByAssetCollection:(id)arg1;
- (void)setCarouselViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setInternalActivityViewController:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
