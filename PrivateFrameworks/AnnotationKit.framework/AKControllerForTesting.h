/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKControllerForTesting : AKController {
    AKActionController * _testingActionController;
    AKAttributeController * _testingAttributeController;
    <AKControllerDelegateProtocol> * _testingDelegate;
    AKLegacyDoodleController * _testingIntelligentSketchController;
    AKMainEventHandler * _testingMainEventHandler;
    AKModelController * _testingModelController;
    UIView * _testingOverlayView;
    AKSignatureModelController * _testingSignatureModelController;
    AKToolController * _testingToolController;
    UIView * _testingToolbarView;
    AKUndoController * _testingUndoController;
}

@property (retain) AKActionController *testingActionController;
@property (retain) AKAttributeController *testingAttributeController;
@property (retain) <AKControllerDelegateProtocol> *testingDelegate;
@property (retain) AKLegacyDoodleController *testingIntelligentSketchController;
@property (retain) AKMainEventHandler *testingMainEventHandler;
@property (retain) AKModelController *testingModelController;
@property (retain) UIView *testingOverlayView;
@property (retain) AKSignatureModelController *testingSignatureModelController;
@property (retain) AKToolController *testingToolController;
@property (retain) UIView *testingToolbarView;
@property (retain) AKUndoController *testingUndoController;

+ (void)renderAnnotation:(id)arg1 inContext:(struct CGContext { }*)arg2;

- (void).cxx_destruct;
- (id)actionController;
- (id)attributeController;
- (id)delegate;
- (id)init;
- (id)legacyDoodleController;
- (id)mainEventHandler;
- (id)modelController;
- (id)overlayView;
- (void)performActionForSender:(id)arg1;
- (void)reloadVisibleToolbarItemIdentifiers;
- (void)setOverlayShouldPixelate:(bool)arg1;
- (void)setTestingActionController:(id)arg1;
- (void)setTestingAttributeController:(id)arg1;
- (void)setTestingDelegate:(id)arg1;
- (void)setTestingIntelligentSketchController:(id)arg1;
- (void)setTestingMainEventHandler:(id)arg1;
- (void)setTestingModelController:(id)arg1;
- (void)setTestingOverlayView:(id)arg1;
- (void)setTestingSignatureModelController:(id)arg1;
- (void)setTestingToolController:(id)arg1;
- (void)setTestingToolbarView:(id)arg1;
- (void)setTestingUndoController:(id)arg1;
- (id)signatureModelController;
- (id)testingActionController;
- (id)testingAttributeController;
- (id)testingDelegate;
- (id)testingIntelligentSketchController;
- (id)testingMainEventHandler;
- (id)testingModelController;
- (id)testingOverlayView;
- (id)testingSignatureModelController;
- (id)testingToolController;
- (id)testingToolbarView;
- (id)testingUndoController;
- (id)toolController;
- (id)toolbarView;
- (id)undoController;
- (void)updateOverlayViewAtIndex:(unsigned long long)arg1;
- (bool)validateSender:(id)arg1;

@end
