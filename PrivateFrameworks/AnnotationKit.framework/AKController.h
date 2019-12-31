/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKController : NSObject {
    bool  __isInDFRAction;
    AKActionController * _actionController;
    double  _akModelToCanvasFixedPixelScaleOfFirstEncounteredPage;
    bool  _allEditingDisabled;
    bool  _annotationEditingEnabled;
    AKAttributeController * _attributeController;
    NSString * _author;
    unsigned long long  _creationCascadingMultiplier;
    unsigned long long  _currentPageIndex;
    <AKControllerDelegateProtocol> * _delegate;
    AKFormFeatureDetectorController * _formDetectionController;
    bool  _hideAllAdornments;
    AKHighlightAnnotationController * _highlightAnnotationController;
    bool  _isLogging;
    bool  _isTestingInstance;
    bool  _isTornDown;
    bool  _isUsedOnDarkBackground;
    AKPageController * _lastCreationCascadingPageController;
    long long  _lastPasteboardChangeCount;
    AKLegacyDoodleController * _legacyDoodleController;
    AKMainEventHandler * _mainEventHandler;
    AKModelController * _modelController;
    AKToolbarView * _modernToolbarView;
    AKSparseMutableControllerArray * _pageControllers;
    NSMapTable * _pageModelControllersToPageControllers;
    unsigned long long  _pasteCascadingMultiplier;
    bool  _pencilAlwaysDraws;
    AKPeripheralAvailabilityManager_iOS * _peripheralAvailabilityManager;
    <PKRulerHostingDelegate> * _rulerHostingDelegate;
    double  _screenPixelsToCanvasPixelsDownscale;
    bool  _selectNewlyCreatedAnnotations;
    bool  _shapeDetectionEnabled;
    bool  _showingMenu;
    AKSidecarController * _sidecarController;
    AKSignatureModelController * _signatureModelController;
    AKStatistics * _statisticsLogger;
    AKTextEditorController * _textEditorController;
    AKToolController * _toolController;
    UIView * _toolbarView;
    AKToolbarViewController * _toolbarViewController;
    AKUndoController * _undoController;
    bool  _useHighVisibilityDefaultInks;
    bool  overlayShouldPixelate;
}

@property (readonly) bool _isInDFRAction;
@property (retain) AKActionController *actionController;
@property double akModelToCanvasFixedPixelScaleOfFirstEncounteredPage;
@property (nonatomic) bool allEditingDisabled;
@property (nonatomic) bool annotationEditingEnabled;
@property (retain) AKAttributeController *attributeController;
@property (copy) NSString *author;
@property unsigned long long creationCascadingMultiplier;
@property unsigned long long currentPageIndex;
@property <AKControllerDelegateProtocol> *delegate;
@property (retain) AKFormFeatureDetectorController *formDetectionController;
@property (nonatomic) bool hideAllAdornments;
@property (retain) AKHighlightAnnotationController *highlightAnnotationController;
@property (nonatomic) bool isLogging;
@property bool isTestingInstance;
@property bool isTornDown;
@property (nonatomic) bool isUsedOnDarkBackground;
@property AKPageController *lastCreationCascadingPageController;
@property long long lastPasteboardChangeCount;
@property (retain) AKLegacyDoodleController *legacyDoodleController;
@property (retain) AKMainEventHandler *mainEventHandler;
@property (retain) AKModelController *modelController;
@property (nonatomic) AKToolbarView *modernToolbarView;
@property (nonatomic, readonly) bool onlyDrawWithApplePencil;
@property (nonatomic) bool overlayShouldPixelate;
@property (retain) AKSparseMutableControllerArray *pageControllers;
@property (retain) NSMapTable *pageModelControllersToPageControllers;
@property unsigned long long pasteCascadingMultiplier;
@property (nonatomic) bool pencilAlwaysDraws;
@property (retain) AKPeripheralAvailabilityManager_iOS *peripheralAvailabilityManager;
@property (nonatomic) <PKRulerHostingDelegate> *rulerHostingDelegate;
@property double screenPixelsToCanvasPixelsDownscale;
@property (nonatomic) bool selectNewlyCreatedAnnotations;
@property (nonatomic) bool shapeDetectionEnabled;
@property (getter=isShowingMenu) bool showingMenu;
@property (retain) AKSidecarController *sidecarController;
@property (retain) AKSignatureModelController *signatureModelController;
@property (retain) AKStatistics *statisticsLogger;
@property (retain) AKTextEditorController *textEditorController;
@property (retain) AKToolController *toolController;
@property (retain) UIView *toolbarView;
@property (retain) AKToolbarViewController *toolbarViewController;
@property (retain) AKUndoController *undoController;
@property (nonatomic) bool useHighVisibilityDefaultInks;

+ (bool)_isInLowMemoryEnvironment;
+ (void)adjustAnnotationBoundsToFitText:(id)arg1;
+ (id)akBundle;
+ (id)akBundleIdentifier;
+ (bool)canConnectToStylus;
+ (id)colorForHighlightAttributeWithTag:(long long)arg1;
+ (id)controllerWithDelegate:(id)arg1;
+ (bool)hasPressureCapableHardware;
+ (id)markupBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (void)renderAnnotation:(id)arg1 inContext:(struct CGContext { }*)arg2;

- (void).cxx_destruct;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (bool)_isInDFRAction;
- (void)_pageModelControllerSelectedAnnotationsChangedNotification:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_popoverAnchorFrameInModelForAnnotations:(id)arg1;
- (void)_setupPageModelController:(id)arg1;
- (id)_toolpicker_color;
- (id)_toolpicker_inkIdentifier;
- (void)_toolpicker_setColor:(id)arg1;
- (void)_toolpicker_setInkIdentifier:(id)arg1;
- (void)_updateGestureDependencyPriority;
- (bool)_validateCutCopyDelete;
- (id)actionController;
- (void)addPopupToAnnotation:(id)arg1 openPopup:(bool)arg2;
- (double)akModelToCanvasFixedPixelScaleOfFirstEncounteredPage;
- (bool)allEditingDisabled;
- (bool)annotationEditingEnabled;
- (void)applyCurrentCrop;
- (id)attributeController;
- (id)author;
- (void)beginLogging:(id)arg1 documentType:(id)arg2;
- (bool)canBeginEditingTextAnnotation:(id)arg1;
- (void)clearUndoStack;
- (void)commitEditing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentAlignedRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onPageAtIndex:(unsigned long long)arg2;
- (void)copy:(id)arg1;
- (unsigned long long)creationCascadingMultiplier;
- (long long)currentExifOrientationForPageAtIndex:(unsigned long long)arg1;
- (double)currentModelBaseScaleFactorForPageAtIndex:(unsigned long long)arg1;
- (id)currentPageController;
- (unsigned long long)currentPageIndex;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)delayedUndoControllerSetup;
- (id)delegate;
- (void)delete:(id)arg1;
- (id)doubleTapGestureRecognizer;
- (void)duplicate:(id)arg1;
- (void)editTextAnnotation:(id)arg1;
- (void)enclosingScrollViewDidScroll:(id)arg1;
- (void)endLogging;
- (id)formDetectionController;
- (bool)handleEvent:(id)arg1;
- (bool)hideAllAdornments;
- (void)hideSelectionMenu:(id)arg1;
- (id)highlightAnnotationController;
- (void)highlightableSelectionChanged;
- (void)highlightableSelectionDidEndChanging;
- (void)highlightableSelectionWillBeginChanging;
- (id)imageForToolbarButtonItemOfType:(unsigned long long)arg1;
- (id)initForTesting;
- (id)initWithDelegate:(id)arg1;
- (bool)isLogging;
- (bool)isOverlayViewLoadedAtIndex:(unsigned long long)arg1;
- (bool)isPresentingPopover;
- (bool)isShowingMenu;
- (bool)isTestingInstance;
- (bool)isTornDown;
- (bool)isUsedOnDarkBackground;
- (id)lastCreationCascadingPageController;
- (long long)lastPasteboardChangeCount;
- (id)legacyDoodleController;
- (id)mainEventHandler;
- (id)modelController;
- (id)modernToolbarView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)onlyDrawWithApplePencil;
- (bool)overlayShouldPixelate;
- (id)overlayViewAtIndex:(unsigned long long)arg1;
- (id)pageControllerForAnnotation:(id)arg1;
- (id)pageControllerForPageModelController:(id)arg1;
- (id)pageControllers;
- (id)pageModelControllersToPageControllers;
- (id)panGestureRecognizer;
- (void)paste:(id)arg1;
- (unsigned long long)pasteCascadingMultiplier;
- (bool)pencilAlwaysDraws;
- (void)performActionForSender:(id)arg1;
- (id)peripheralAvailabilityManager;
- (void)prepareOverlayAtIndex:(unsigned long long)arg1;
- (id)pressGestureRecognizer;
- (void)redo:(id)arg1;
- (void)relinquishOverlayAtIndex:(unsigned long long)arg1;
- (void)reloadVisibleToolbarItemIdentifiers;
- (void)removeNoteFromAnnotation:(id)arg1;
- (void)renderAnnotation:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)resetToDefaultToolMode;
- (id)rotationGestureRecognizer;
- (id)rulerHostingDelegate;
- (double)screenPixelsToCanvasPixelsDownscale;
- (void)selectAll:(id)arg1;
- (bool)selectNewlyCreatedAnnotations;
- (void)setActionController:(id)arg1;
- (void)setAkModelToCanvasFixedPixelScaleOfFirstEncounteredPage:(double)arg1;
- (void)setAllEditingDisabled:(bool)arg1;
- (void)setAnnotationEditingEnabled:(bool)arg1;
- (void)setAttributeController:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setCreationCascadingMultiplier:(unsigned long long)arg1;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFormDetectionController:(id)arg1;
- (void)setHideAllAdornments:(bool)arg1;
- (void)setHighlightAnnotationController:(id)arg1;
- (void)setIsLogging:(bool)arg1;
- (void)setIsTestingInstance:(bool)arg1;
- (void)setIsTornDown:(bool)arg1;
- (void)setIsUsedOnDarkBackground:(bool)arg1;
- (void)setLastCreationCascadingPageController:(id)arg1;
- (void)setLastPasteboardChangeCount:(long long)arg1;
- (void)setLegacyDoodleController:(id)arg1;
- (void)setMainEventHandler:(id)arg1;
- (void)setModelController:(id)arg1;
- (void)setModernToolbarView:(id)arg1;
- (void)setOverlayShouldPixelate:(bool)arg1;
- (void)setPageControllers:(id)arg1;
- (void)setPageModelControllersToPageControllers:(id)arg1;
- (void)setPasteCascadingMultiplier:(unsigned long long)arg1;
- (void)setPencilAlwaysDraws:(bool)arg1;
- (void)setPeripheralAvailabilityManager:(id)arg1;
- (void)setRulerHostingDelegate:(id)arg1;
- (void)setScreenPixelsToCanvasPixelsDownscale:(double)arg1;
- (void)setSelectNewlyCreatedAnnotations:(bool)arg1;
- (void)setShapeDetectionEnabled:(bool)arg1;
- (void)setShowingMenu:(bool)arg1;
- (void)setSidecarController:(id)arg1;
- (void)setSignatureModelController:(id)arg1;
- (void)setStatisticsLogger:(id)arg1;
- (void)setTextEditorController:(id)arg1;
- (void)setToolController:(id)arg1;
- (void)setToolMode:(unsigned long long)arg1;
- (void)setToolbarView:(id)arg1;
- (void)setToolbarViewController:(id)arg1;
- (void)setUndoController:(id)arg1;
- (void)setUseHighVisibilityDefaultInks:(bool)arg1;
- (bool)shapeDetectionEnabled;
- (bool)shouldDrawVariableStrokeDoodles;
- (void)showAttributeInspector:(id)arg1;
- (void)showSelectionMenu:(id)arg1;
- (id)sidecarController;
- (id)signatureModelController;
- (id)statisticsLogger;
- (void)strokeAddedNotification:(id)arg1;
- (bool)supportForPencilAlwaysDrawsSatisfied;
- (id)tapGestureRecognizer;
- (void)teardown;
- (id)textEditorController;
- (id)toolController;
- (unsigned long long)toolMode;
- (id)toolbarButtonItemOfType:(unsigned long long)arg1;
- (id)toolbarView;
- (id)toolbarViewController;
- (void)undo:(id)arg1;
- (id)undoController;
- (void)updateOverlayViewAtIndex:(unsigned long long)arg1;
- (bool)useHighVisibilityDefaultInks;
- (bool)validateCopy:(id)arg1;
- (bool)validateCut:(id)arg1;
- (bool)validateDelete:(id)arg1;
- (bool)validateDuplicate:(id)arg1;
- (bool)validateEditTextAnnotation:(id)arg1;
- (bool)validatePaste:(id)arg1;
- (bool)validateRedo:(id)arg1;
- (bool)validateSelectAll:(id)arg1;
- (bool)validateSender:(id)arg1;
- (bool)validateShowAttributeInspector:(id)arg1;
- (bool)validateUndo:(id)arg1;
- (void)willHideMenu:(id)arg1;
- (void)willShowMenu:(id)arg1;

@end
