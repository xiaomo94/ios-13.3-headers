/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface CFXEffectPickerViewController : UIViewController <CFXEffectPickerViewDataSource, CFXEffectPickerViewDelegate, CFXFilterEffectPickerViewDataSource, CFXFilterEffectPickerViewDelegate, FunCamFilterPickerPresentationDelegate> {
    <CFXEffectPickerViewControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _effectLoadingQueue;
    CFXEffectType * _effectType;
    NSArray * _effects;
    CFXEffectPickerView * _pickerView;
    UIImage * _previewBackgroundImage;
    bool  _previewing;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CFXEffectPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *effectLoadingQueue;
@property (nonatomic, retain) CFXEffectType *effectType;
@property (nonatomic, retain) NSArray *effects;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CFXEffectPickerView *pickerView;
@property (nonatomic, retain) UIImage *previewBackgroundImage;
@property (getter=isPreviewing, nonatomic) bool previewing;
@property (readonly) Class superclass;

+ (id)effectPickerViewController;

- (void).cxx_destruct;
- (void)CFX_configureEffect:(id)arg1 previewSizeInPixels:(struct CGSize { double x1; double x2; })arg2;
- (id)CFX_createPickerViewForEffectType:(id)arg1;
- (unsigned long long)CFX_indexForEffectIdentifier:(id)arg1;
- (void)CFX_loadEffectsForType:(id)arg1;
- (void)CFX_restartPreviewing;
- (void)CFX_stopPreviewing;
- (bool)_canShowWhileLocked;
- (id)delegate;
- (id)effectLoadingQueue;
- (void)effectPickerView:(id)arg1 didPickEffectAtIndex:(long long)arg2;
- (id)effectPickerView:(id)arg1 effectAtIndex:(long long)arg2;
- (void)effectPickerView:(id)arg1 effectAtIndex:(long long)arg2 forPreviewingAtSizeInPixels:(struct CGSize { double x1; double x2; })arg3 completionBlock:(id /* block */)arg4;
- (id)effectPickerView:(id)arg1 effectIdentifierAtIndex:(long long)arg2;
- (id)effectPickerView:(id)arg1 effectTitleAtIndex:(long long)arg2;
- (unsigned long long)effectPickerView:(id)arg1 indexForEffectID:(id)arg2;
- (id)effectType;
- (id)effects;
- (void)filterPickerPresentationModeDidChange;
- (bool)isPreviewing;
- (unsigned long long)numberOfEffectsInPickerView:(id)arg1;
- (id)pickerView;
- (id)previewBackgroundImage;
- (unsigned long long)selectedFilterIndexForFilterPickerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectLoadingQueue:(id)arg1;
- (void)setEffectType:(id)arg1;
- (void)setEffects:(id)arg1;
- (void)setPickerView:(id)arg1;
- (void)setPreviewBackgroundImage:(id)arg1;
- (void)setPreviewing:(bool)arg1;
- (bool)shouldDisplayExpandedModeForFilterPickerView:(id)arg1;
- (bool)shouldRotateCellsForDeviceOrientation;
- (void)startPreviewing;
- (void)stopPreviewing;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;

@end
