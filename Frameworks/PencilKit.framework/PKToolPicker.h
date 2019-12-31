/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKToolPicker : NSObject <PKPaletteViewDelegate, UIInputResponderControllerVisibilityObserver> {
    <PKToolPickerPrivateDelegate> * __delegate;
    NSHashTable * __firstRespondersForVisibleUI;
    PKPaletteViewInteraction * __interaction;
    NSHashTable * __observers;
    bool  __paletteWasCompact;
    UIResponder * __previousFirstResponder;
}

@property (getter=_isBackgroundMaterialUpdatingPaused, setter=_setBackgroundMaterialUpdatingPaused:, nonatomic) bool _backgroundMaterialUpdatingPaused;
@property (nonatomic) <PKToolPickerPrivateDelegate> *_delegate;
@property (nonatomic, retain) NSHashTable *_firstRespondersForVisibleUI;
@property (nonatomic, retain) PKPaletteViewInteraction *_interaction;
@property (nonatomic, retain) NSHashTable *_observers;
@property (nonatomic, readonly) PKPaletteHostView *_paletteHostView;
@property (nonatomic) bool _paletteWasCompact;
@property (nonatomic) UIResponder *_previousFirstResponder;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isVisible;
@property (nonatomic) long long overrideUserInterfaceStyle;
@property (getter=isRulerActive, nonatomic) bool rulerActive;
@property (nonatomic, retain) PKTool *selectedTool;
@property (readonly) Class superclass;

+ (id)activeToolPickerForWindow:(id)arg1;
+ (id)sharedToolPickerForWindow:(id)arg1;

- (void).cxx_destruct;
- (id)_currentFirstResponder;
- (bool)_currentFirstResponderWantsToolPickerVisible;
- (id)_delegate;
- (id)_firstRespondersForVisibleUI;
- (id)_interaction;
- (bool)_internalClassWantsToolPickerVisibleForResponder:(id)arg1;
- (id)_internalClassesAcceptingFirstResponder;
- (bool)_isBackgroundMaterialUpdatingPaused;
- (id)_observers;
- (id)_paletteHostView;
- (id)_paletteView;
- (bool)_paletteWasCompact;
- (id)_previousFirstResponder;
- (void)_saveStateIfNecessary;
- (void)_setBackgroundMaterialUpdatingPaused:(bool)arg1;
- (void)_setVisible:(bool)arg1;
- (void)_updatePaletteTraitCollection:(id)arg1;
- (void)_updateVisibilityForFirstResponder:(id)arg1;
- (bool)_wantsPaletteToStayVisibleForPopovers;
- (void)addObserver:(id)arg1;
- (long long)colorUserInterfaceStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameObscuredInView:(id)arg1;
- (id)initWithInteraction:(id)arg1;
- (void)inputResponderController:(id)arg1 inputViewSetVisibilityDidChange:(bool)arg2 includedReset:(bool)arg3;
- (bool)isRulerActive;
- (bool)isVisible;
- (long long)overrideUserInterfaceStyle;
- (void)paletteView:(id)arg1 didChangeColor:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paletteViewColorPickerPopoverPresentationSourceRect:(id)arg1;
- (id)paletteViewColorPickerPopoverPresentationSourceView:(id)arg1;
- (void)paletteViewDidChangePosition:(id)arg1;
- (void)paletteViewDidToggleRuler:(id)arg1;
- (void)paletteViewSelectedToolInkDidChange:(id)arg1;
- (id)paletteViewUndoManager:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)selectedTool;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setOverrideUserInterfaceStyle:(long long)arg1;
- (void)setRulerActive:(bool)arg1;
- (void)setSelectedTool:(id)arg1;
- (void)setVisible:(bool)arg1 forFirstResponder:(id)arg2;
- (void)set_delegate:(id)arg1;
- (void)set_firstRespondersForVisibleUI:(id)arg1;
- (void)set_interaction:(id)arg1;
- (void)set_observers:(id)arg1;
- (void)set_paletteWasCompact:(bool)arg1;
- (void)set_previousFirstResponder:(id)arg1;

@end
