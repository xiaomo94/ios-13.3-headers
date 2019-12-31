/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPColumn : NSObject <TSWPOffscreenColumn> {
    unsigned long long  _anchoredCharCount;
    unsigned long long  _characterCount;
    unsigned long long  _columnIndex;
    double  _contentBottom;
    double  _erasableContentBottom;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameBounds;
    int  _layoutResultFlags;
    struct shared_ptr<TSWPLineFragmentArray> { 
        struct TSWPLineFragmentArray {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _lineFragmentArray;
    unsigned long long  _nextWidowPullsDownFromCharIndex;
    unsigned long long  _pageNumber;
    void * _paragraphAdornments;
    unsigned long long  _scaleTextPercent;
    unsigned long long  _startAnchoredCharIndex;
    unsigned long long  _startCharIndex;
    TSWPStorage * _storage;
    <TSWPStyleProvider> * _styleProvider;
    bool  _textIsVertical;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic) unsigned long long anchoredCharCount;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } anchoredRange;
@property (nonatomic) unsigned long long characterCount;
@property (nonatomic) unsigned long long columnIndex;
@property (nonatomic) double contentBottom;
@property (nonatomic, readonly) unsigned long long countLines;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double erasableContentBottom;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameBounds;
@property (readonly) unsigned long long hash;
@property (nonatomic) int layoutResultFlags;
@property (nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property (nonatomic) unsigned long long pageNumber;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) unsigned long long scaleTextPercent;
@property (nonatomic) unsigned long long startAnchoredCharIndex;
@property (nonatomic) unsigned long long startCharIndex;
@property (nonatomic, readonly) TSWPStorage *storage;
@property (nonatomic, retain) <TSWPStyleProvider> *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double textBottom;
@property (nonatomic) bool textIsVertical;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformFromWP;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformToWP;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } typographicBounds;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } typographicBoundsForCell;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } wpBounds;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRectForSelection:(id)arg1 columnArray:(id)arg2 includeRuby:(bool)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForInsertionPoint:(id)arg1 withColumns:(id)arg2;
+ (unsigned long long)charIndexForPoint:(struct CGPoint { double x1; double x2; })arg1 inColumnsArray:(id)arg2 allowPastBreak:(bool)arg3 allowNotFound:(bool)arg4 isAtEndOfLine:(bool*)arg5 leadingEdge:(bool*)arg6;
+ (unsigned long long)charIndexForPoint:(struct CGPoint { double x1; double x2; })arg1 inColumnsArray:(id)arg2 allowPastBreak:(bool)arg3 allowNotFound:(bool)arg4 pastCenterGoesToNextChar:(bool)arg5 isAtEndOfLine:(bool*)arg6 leadingEdge:(bool*)arg7;
+ (unsigned long long)charIndexForTopicDragAtPoint:(struct CGPoint { double x1; double x2; })arg1 inColumnsArray:(id)arg2;
+ (id)closestColumnInColumnsArray:(id)arg1 forPoint:(struct CGPoint { double x1; double x2; })arg2 ignoreEmptyColumns:(bool)arg3 ignoreDrawableOnlyColumns:(bool)arg4;
+ (id)columnForCharIndex:(unsigned long long)arg1 eol:(bool)arg2 withColumns:(id)arg3;
+ (struct CGColor { }*)computeSingleColorWithColumns:(id)arg1;
+ (id)footnoteMarkAttachmentInColumnArray:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (id)footnoteReferenceAttachmentInColumnArray:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (id)pathForHighlightWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 columnArray:(id)arg2 pathStyle:(int)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection:(id)arg1 withColumns:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection:(id)arg1 withColumns:(id)arg2 useParagraphModeRects:(bool)arg3;
+ (id)smartFieldWithAttributeKind:(unsigned int)arg1 inColumnArray:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAdornmentRect:(const struct TSWPAdornmentRect { int x1; id x2; id x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; }*)arg1;
- (unsigned long long)anchoredCharCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })anchoredRange;
- (double)baselineOfLineFragmentAtCharIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsOfLineFragmentAtIndex:(unsigned long long)arg1;
- (struct _TSWPCharIndexAndPosition { unsigned long long x1; int x2; double x3; int x4; double x5; })calcAttachmentPositionForDrawable:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 inTextLayoutTarget:(id)arg3 tlBoundsInfluencingWrap:(struct CGPoint { double x1; double x2; })arg4 wrapOutset:(struct CGSize { double x1; double x2; })arg5 wrapMargin:(double)arg6 makeInline:(bool)arg7;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForSelection:(id)arg1;
- (unsigned long long)charIndexForSelectionFromPoint:(struct CGPoint { double x1; double x2; })arg1 isTail:(bool)arg2;
- (unsigned long long)charIndexFromPoint:(struct CGPoint { double x1; double x2; })arg1 allowPastBreak:(bool)arg2 pastCenterGoesToNextChar:(bool)arg3 allowNotFound:(bool)arg4 isAtEndOfLine:(bool*)arg5 leadingEdge:(bool*)arg6;
- (unsigned long long)charIndexFromPoint:(struct CGPoint { double x1; double x2; })arg1 allowPastBreak:(bool)arg2 pastCenterGoesToNextChar:(bool)arg3 allowNotFound:(bool)arg4 isAtEndOfLine:(bool*)arg5 outFragment:(const struct TSWPLineFragment {}**)arg6 leadingEdge:(bool*)arg7;
- (unsigned long long)charIndexFromWPPoint:(struct CGPoint { double x1; double x2; })arg1 pastCenterGoesToNextChar:(bool)arg2 allowNotFound:(bool)arg3 outFragment:(const struct TSWPLineFragment {}**)arg4 leadingEdge:(bool*)arg5;
- (unsigned long long)characterCount;
- (void)clearAdornments;
- (unsigned long long)columnIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })columnRectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (double)contentBottom;
- (unsigned long long)countLines;
- (void)dealloc;
- (id)drawableIntersectionRectsForSelection:(id)arg1 inTarget:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })erasableBounds:(unsigned int)arg1;
- (double)erasableContentBottom;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })erasableRectForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForSelection:(id)arg1 includeSpaceAfter:(bool)arg2 includeSpaceBefore:(bool)arg3 includeLeading:(bool)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameBounds;
- (unsigned long long)glyphCountForRubyFieldAtCharIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })glyphRectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 includingLabel:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })glyphRectForRubyFieldAtCharIndex:(unsigned long long)arg1 glyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })heightInfoOfLineFragmentAtIndex:(unsigned long long)arg1;
- (double)horizontalOffsetForCharIndex:(unsigned long long)arg1 lineFragmentIndex:(unsigned long long)arg2 bumpPastHyphen:(bool)arg3 allowPastLineBounds:(bool)arg4;
- (void)incrementRanges:(long long)arg1;
- (id)initWithStorage:(id)arg1 frameBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)isEmptyLineFragmentAtIndex:(unsigned long long)arg1;
- (bool)isTruncatedLineFragmentAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelBoundsOfLineFragmentAtIndex:(unsigned long long)arg1;
- (int)layoutResultFlags;
- (const struct shared_ptr<TSWPLineFragmentArray> { struct TSWPLineFragmentArray {} *x1; struct __shared_weak_count {} *x2; }*)lineFragmentArray;
- (const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; double x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; double x_9_1_5; double x_9_1_6; double x_9_1_7; double x_9_1_8; } x9; struct TSWPListLabel {} *x10; id x11; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_12_1_1; struct TSWPLineRef {} *x_12_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_12_1_3; } x12; double x13; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_14_1_1; struct TSWPLineRef {} *x_14_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_14_1_3; } x14; }*)lineFragmentAtIndex:(unsigned long long)arg1;
- (const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; double x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; double x_9_1_5; double x_9_1_6; double x_9_1_7; double x_9_1_8; } x9; struct TSWPListLabel {} *x10; id x11; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_12_1_1; struct TSWPLineRef {} *x_12_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_12_1_3; } x12; double x13; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_14_1_1; struct TSWPLineRef {} *x_14_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_14_1_3; } x14; }*)lineFragmentClosestToPoint:(struct CGPoint { double x1; double x2; })arg1 knobTag:(unsigned long long)arg2;
- (unsigned long long)lineFragmentCountForBaseline:(double)arg1;
- (const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; double x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; double x_9_1_5; double x_9_1_6; double x_9_1_7; double x_9_1_8; } x9; struct TSWPListLabel {} *x10; id x11; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_12_1_1; struct TSWPLineRef {} *x_12_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_12_1_3; } x12; double x13; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_14_1_1; struct TSWPLineRef {} *x_14_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_14_1_3; } x14; }*)lineFragmentForCharIndex:(unsigned long long)arg1 knobTag:(unsigned long long)arg2 selectionType:(int)arg3;
- (unsigned long long)lineIndexForCharIndex:(unsigned long long)arg1 eol:(bool)arg2;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; })lineMetricsAtCharIndex:(unsigned long long)arg1 allowEndOfLine:(bool)arg2;
- (id)lineSelectionsForSelection:(id)arg1;
- (double)logicalBoundsBottom;
- (double)logicalBoundsTop;
- (void)makeEmpty:(unsigned long long)arg1 layoutResultFlags:(int)arg2;
- (struct CGSize { double x1; double x2; })maxSize;
- (double)minimumHeightForLayoutOnPage;
- (unsigned long long)nextWidowPullsDownFromCharIndex;
- (void)normalizeLineFragmentOrigins:(struct CGPoint { double x1; double x2; })arg1;
- (void)offsetLineFragmentsByPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)onlyHasAnchoredDrawable;
- (const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; double x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; double x_9_1_5; double x_9_1_6; double x_9_1_7; double x_9_1_8; } x9; struct TSWPListLabel {} *x10; id x11; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_12_1_1; struct TSWPLineRef {} *x_12_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_12_1_3; } x12; double x13; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_14_1_1; struct TSWPLineRef {} *x_14_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_14_1_3; } x14; }*)pColumnEndingPartitionedLineFragmentInSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)pMutableRectsForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 selectionType:(int)arg2 includeSpaceAfter:(bool)arg3 includeSpaceBefore:(bool)arg4 includeLeading:(bool)arg5 forParagraphMode:(bool)arg6 includeRuby:(bool)arg7 inranges:(id)arg8 outranges:(id*)arg9;
- (unsigned long long)pageNumber;
- (id)partitionedLayoutForInfo:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfLineFragmentAtIndex:(unsigned long long)arg1;
- (id)rectsForSelection:(id)arg1;
- (id)rectsForSelection:(id)arg1 ranges:(id*)arg2;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 selectionType:(int)arg2;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 selectionType:(int)arg2 forParagraphMode:(bool)arg3;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 selectionType:(int)arg2 forParagraphMode:(bool)arg3 includeRuby:(bool)arg4;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 selectionType:(int)arg2 includeSpaceAfter:(bool)arg3 includeSpaceBefore:(bool)arg4 includeLeading:(bool)arg5 forParagraphMode:(bool)arg6 includeRuby:(bool)arg7;
- (id)rectsForSelectionRanges:(id)arg1 selectionType:(int)arg2;
- (void)renderWithRenderer:(id)arg1 currentSelection:(id)arg2 limitSelection:(id)arg3 listRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 rubyGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 isCanvasInteractive:(bool)arg6 spellChecker:(id)arg7 suppressedMisspellingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg8 blackAndWhite:(bool)arg9 dictationInterpretations:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg10 autocorrections:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg11 markedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg12 markedText:(id)arg13 renderMode:(int)arg14 pageCount:(unsigned long long)arg15 suppressInvisibles:(bool)arg16 currentCanvasSelection:(id)arg17;
- (void)renderWithRenderer:(id)arg1 pageCount:(unsigned long long)arg2;
- (bool)requiresGlyphVectorsForHeightMeasurement;
- (unsigned long long)scaleTextPercent;
- (void)setAnchoredCharCount:(unsigned long long)arg1;
- (void)setAnchoredRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setCharacterCount:(unsigned long long)arg1;
- (void)setColumnIndex:(unsigned long long)arg1;
- (void)setContentBottom:(double)arg1;
- (void)setErasableContentBottom:(double)arg1;
- (void)setLayoutResultFlags:(int)arg1;
- (void)setLineFragmentArray:(const struct shared_ptr<TSWPLineFragmentArray> { struct TSWPLineFragmentArray {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)setNextWidowPullsDownFromCharIndex:(unsigned long long)arg1;
- (void)setPageNumber:(unsigned long long)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setScaleTextPercent:(unsigned long long)arg1;
- (void)setStartAnchoredCharIndex:(unsigned long long)arg1;
- (void)setStartCharIndex:(unsigned long long)arg1;
- (void)setStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setStyleProvider:(id)arg1;
- (void)setTextIsVertical:(bool)arg1;
- (void)setTransformFromWP:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setWpBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)singleLinePartitionedInfoAtStart:(bool)arg1;
- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned int)arg2;
- (unsigned long long)startAnchoredCharIndex;
- (unsigned long long)startCharIndex;
- (id)storage;
- (id)styleProvider;
- (double)textBottom;
- (double)textHeight;
- (bool)textIsVertical;
- (double)topOfLineAtCharIndex:(unsigned long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromWP;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToWP;
- (void)trimFromCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 layoutChore:(struct TSWPLayoutChore { int (**x1)(); id x2; id x3; id x4; int x5; unsigned long long x6; unsigned long long x7; int x8; unsigned long long x9; unsigned long long x10; struct TSWPLayoutState { unsigned long long x_11_1_1; unsigned long long x_11_1_2; unsigned long long x_11_1_3; struct TSWPParagraphEnumerator { id x_4_2_1; id x_4_2_2; unsigned long long x_4_2_3; unsigned long long x_4_2_4; unsigned long long x_4_2_5; unsigned long long x_4_2_6; bool x_4_2_7; } x_11_1_4; struct _NSRange { unsigned long long x_5_2_1; unsigned long long x_5_2_2; } x_11_1_5; id x_11_1_6; id x_11_1_7; id x_11_1_8; struct _NSRange { unsigned long long x_9_2_1; unsigned long long x_9_2_2; } x_11_1_9; double x_11_1_10; struct _NSRange { unsigned long long x_11_2_1; unsigned long long x_11_2_2; } x_11_1_11; unsigned long long x_11_1_12; bool x_11_1_13; bool x_11_1_14; double x_11_1_15; id x_11_1_16; unsigned long long x_11_1_17; id x_11_1_18; double x_11_1_19; double x_11_1_20; double x_11_1_21; double x_11_1_22; double x_11_1_23; double x_11_1_24; int x_11_1_25; double x_11_1_26; double x_11_1_27; double x_11_1_28; double x_11_1_29; double x_11_1_30; double x_11_1_31; double x_11_1_32; double x_11_1_33; bool x_11_1_34; bool x_11_1_35; } x11; }*)arg3;
- (double)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeAutoNumberFootnoteCount:(unsigned long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })typographicBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })typographicBoundsForCell;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })typographicBoundsOfLineFragmentAtIndex:(unsigned long long)arg1;
- (double)typographicGlyphExtentOfLineFragmentAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })wpBounds;

@end
