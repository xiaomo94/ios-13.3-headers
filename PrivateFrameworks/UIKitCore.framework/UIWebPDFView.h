/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebPDFView : UIView <UIGestureRecognizerDelegate, UIPDFAnnotationControllerDelegate, UIPDFPageViewDelegate, UIPopoverControllerDelegate, WebPDFViewPlaceholderDelegate> {
    NSMutableArray * _backingLayerImageViews;
    struct CGPDFDocument { } * _cgPDFDocument;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffsetAtScrollStart;
    bool  _delegateRespondsToDidScroll;
    UIPDFDocument * _document;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _documentBounds;
    double  _documentScale;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _documentTransform;
    NSURL * _documentURL;
    bool  _hasScheduledCacheUpdate;
    long long  _ignoreContentOffsetChanges;
    double  _initialZoomScale;
    NSArray * _pageMinYs;
    NSMutableArray * _pageViews;
    NSObject<UIWebPDFViewDelegate> * _pdfDelegate;
    bool  _rotating;
    UITapGestureRecognizer * _tapGestureRecognizer;
    bool  _zooming;
    UIColor * backgroundColorForUnRenderedContent;
    NSString * documentPassword;
    bool  hideActivityIndicatorForUnRenderedContent;
    bool  hidePageViewsUntilReadyToRender;
    NSArray * pageRects;
    WebPDFViewPlaceholder * pdfPlaceHolderView;
    bool  readyForSnapshot;
}

@property (nonatomic, retain) UIColor *backgroundColorForUnRenderedContent;
@property (nonatomic, readonly) struct CGPDFDocument { }*cgPDFDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIPDFDocument *document;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } documentBounds;
@property (nonatomic, readonly) NSData *documentData;
@property (nonatomic, retain) NSString *documentPassword;
@property (nonatomic, readonly) double documentScale;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } documentTransform;
@property (nonatomic, retain) NSURL *documentURL;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideActivityIndicatorForUnRenderedContent;
@property (nonatomic) bool hidePageViewsUntilReadyToRender;
@property (nonatomic) long long ignoreContentOffsetChanges;
@property (nonatomic) double initialZoomScale;
@property (nonatomic, retain) NSArray *pageMinYs;
@property (nonatomic, retain) NSArray *pageRects;
@property (nonatomic) NSObject<UIWebPDFViewDelegate> *pdfDelegate;
@property WebPDFViewPlaceholder *pdfPlaceHolderView;
@property (nonatomic) bool readyForSnapshot;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalPages;

+ (void)initialize;
+ (void)setAsPDFDocRepAndView;

- (id)_addPageAtIndex:(unsigned long long)arg1;
- (void)_addSubViewsInViewCoordsBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 force:(bool)arg2;
- (bool)_checkIfDocumentNeedsUnlock;
- (void)_define:(id)arg1;
- (void)_didLongPress:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 linkingToPageIndex:(unsigned long long)arg4;
- (void)_didLongPress:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 linkingToURL:(id)arg4;
- (void)_didScroll;
- (void)_didTouch:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 linkingToPageIndex:(unsigned long long)arg4;
- (void)_didTouch:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 linkingToURL:(id)arg4;
- (bool)_hasPageRects;
- (id)_installViewAtIndex:(long long)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (unsigned long long)_pageNumberForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_pageWithSelection;
- (void)_recreateUIPDFDocument;
- (void)_removeBackgroundImageObserverIfNeeded:(id)arg1;
- (void)_removePageViewsNotInCurrentViewCoordsRect;
- (void)_removePageViewsNotInViewCoordsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_scheduleRemovePageViewsNotInViewCoordsRect;
- (id)_selection;
- (void)_share:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (bool)_tryToUnlockDocumentWithPassword:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewCachingBoundsInUIViewCoords;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewportBoundsInUIVIewCoordsWithView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewportBoundsInUIViewCoords;
- (void)annotation:(id)arg1 isBeingPressedAtPoint:(struct CGPoint { double x1; double x2; })arg2 controller:(id)arg3;
- (void)annotation:(id)arg1 wasTouchedAtPoint:(struct CGPoint { double x1; double x2; })arg2 controller:(id)arg3;
- (id)backgroundColorForUnRenderedContent;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGPDFDocument { }*)cgPDFDocument;
- (void)clearSelection;
- (void)dealloc;
- (void)didCompleteLayout;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)didZoom:(id)arg1;
- (id)document;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentBounds;
- (id)documentData;
- (id)documentPassword;
- (double)documentScale;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })documentTransform;
- (id)documentURL;
- (void)ensureCorrectPagesAreInstalled:(bool)arg1;
- (unsigned long long)firstVisiblePageNumber;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hideActivityIndicatorForUnRenderedContent;
- (bool)hidePageViewsUntilReadyToRender;
- (long long)ignoreContentOffsetChanges;
- (id)imageForContactRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onPageInViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 destinationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithWebPDFViewPlaceholder:(id)arg1;
- (double)initialZoomScale;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pageMinYs;
- (id)pageRects;
- (id)pdfDelegate;
- (id)pdfPlaceHolderView;
- (void)prepareForSnapshot:(bool)arg1;
- (bool)readyForSnapshot;
- (void)resetZoom:(id)arg1;
- (void)setBackgroundColorForUnRenderedContent:(id)arg1;
- (void)setDocumentPassword:(id)arg1;
- (void)setDocumentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setDocumentURL:(id)arg1;
- (void)setHideActivityIndicatorForUnRenderedContent:(bool)arg1;
- (void)setHidePageViewsUntilReadyToRender:(bool)arg1;
- (void)setIgnoreContentOffsetChanges:(long long)arg1;
- (void)setInitialZoomScale:(double)arg1;
- (void)setPageMinYs:(id)arg1;
- (void)setPageRects:(id)arg1;
- (void)setPdfDelegate:(id)arg1;
- (void)setPdfPlaceHolderView:(id)arg1;
- (void)setReadyForSnapshot:(bool)arg1;
- (void)snapshotComplete;
- (unsigned long long)totalPages;
- (id)uiPDFDocument;
- (id)viewAtIndex:(long long)arg1;
- (void)viewWillClose;
- (id)viewportView;
- (void)willRotate:(id)arg1;
- (void)willScroll:(id)arg1;
- (void)willZoom:(id)arg1;
- (void)zoom:(id)arg1 to:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 kind:(int)arg4;

@end