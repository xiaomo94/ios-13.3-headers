/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFViewController : NSObject {
    PDFViewControllerPrivate * _private;
}

- (void).cxx_destruct;
- (void)_addControlForAnnotation:(id)arg1;
- (id)_annotationAtGestureLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_annotationFollowing:(id)arg1 wrapAround:(bool)arg2;
- (void)_annotationHit:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_annotationHitLongPress:(id)arg1 gestureState:(long long)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (id)_annotationPreceding:(id)arg1 wrapAround:(bool)arg2;
- (id)_annotationsForSelection:(id)arg1;
- (void)_clearTextSelectionMenuItems;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toPageView:(id)arg2;
- (void)_doButtonHit:(id)arg1;
- (id)_getPagePoint:(struct CGPoint { double x1; double x2; }*)arg1 forGestureLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_handleButtonHit:(id)arg1;
- (void)_hidePDFMarkupMenuView;
- (void)_hideTextSelectionMenu;
- (id)_menuItemsForTextSelectionMenu:(unsigned long long)arg1;
- (id)_pageViewForAnnotation:(id)arg1;
- (void)_performDoubleTapAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_postAnnotationHitNotification:(id)arg1;
- (void)_postAnnotationWillHitNotification:(id)arg1;
- (bool)_shouldUpdateMarkupWithStyle:(unsigned long long)arg1 onPage:(id)arg2 forIndexSet:(id)arg3;
- (void)activateNextAnnotation:(bool)arg1;
- (id)activeAnnotation;
- (void)dealloc;
- (void)deleteAnnotation:(id)arg1;
- (void)editNoteForAnnotation:(id)arg1;
- (void)handleGesture:(id)arg1;
- (void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (void)hideActiveMenus;
- (void)highlight:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)interactWithAnnotation:(id)arg1;
- (void)markupMenuController:(id)arg1 setMarkupStyle:(unsigned long long)arg2;
- (void)markupMenuControllerDeleteAnnotation:(id)arg1;
- (void)markupMenuControllerDidHide:(id)arg1;
- (void)markupMenuControllerEditNote:(id)arg1;
- (void)markupMenuControllerShowTextSelectionMenu:(id)arg1;
- (id)markupMenuPDFView:(id)arg1;
- (void)removeControlForAnnotation:(id)arg1;
- (void)removeNoteForAnnotation:(id)arg1;
- (void)setActiveAnnotation:(id)arg1;
- (void)setMarkupStyle:(unsigned long long)arg1 forAnnotation:(id)arg2;
- (void)setMarkupStyle:(unsigned long long)arg1 forSelection:(id)arg2 clearSelection:(bool)arg3;
- (void)showActiveMenus;
- (void)showMarkupMenu:(id)arg1;
- (void)showPDFMarkupMenuView;
- (unsigned long long)textSelectionMenu;
- (void)updateTextSelectionMenuAndShowMenu:(bool)arg1;

@end
