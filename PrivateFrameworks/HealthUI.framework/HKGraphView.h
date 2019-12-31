/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKGraphView : UIView <HKGraphRenderDelegate, HKGraphSeriesOverlayDelegate, HKGraphTileDrawingDelegate, HKInteractiveChartRangeProvider, HKMultiTouchPressGestureRecognizerDelegate, HKScrollPerformanceTestable, HKSeriesDelegate, UIScrollViewDelegate> {
    HKValueRange * _actualAxisRange;
    HKValueRange * _actualVisibleRange;
    HKPropertyAnimationApplier * _animationApplier;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _axisInset;
    UIImage * _bottomFeatheringImage;
    HKValueRange * _chartableValueRange;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffset;
    bool  _contentOffsetIsSet;
    bool  _contentWidthFromTimeScope;
    <HKGraphViewDelegate> * _delegate;
    HKValueRange * _destinationEffectiveVisibleRangeActive;
    UIView * _detailView;
    bool  _disableScrolling;
    bool  _disableSelection;
    bool  _disableXAxis;
    HKValueRange * _effectiveAxisRange;
    HKValueRange * _effectiveVisibleRangeActive;
    HKValueRange * _effectiveVisibleRangeCadence;
    bool  _enableInteractiveSelectionLine;
    bool  _enableStickySelection;
    bool  _enableZoomInGesture;
    unsigned long long  _featheringOptions;
    double  _hardLeftMarginWidth;
    double  _lastEndTime;
    double  _lastSingleSelectionXValue;
    UIImage * _leftFeatheringImage;
    HKBorderLineView * _leftMarginView;
    long long  _maximumDateZoom;
    bool  _measuringStartupTime;
    long long  _minimumDateZoom;
    bool  _multiSeriesSelection;
    HKMultiTouchPressGestureRecognizer * _multiTouchGestureRecognizer;
    bool  _needsUpdateGraphViewConfiguration;
    UIColor * _outlineColor;
    unsigned long long  _outlineOptions;
    HKOutsideViewTapDetector * _outsideViewTapDetector;
    NSMapTable * _overlayInteractiveViews;
    _HKGraphViewOverlayView * _overlayView;
    long long  _previousOverlayType;
    UIView<HKGraphRenderer> * _renderView;
    UIImage * _rightFeatheringImage;
    UIScrollView * _scrollView;
    long long  _scrollingOptions;
    HKGraphViewSelectionStyle * _selectionStyle;
    NSMutableArray * _seriesGroupRows;
    bool  _shouldInformDelegateOfUpdates;
    bool  _shouldListenToScrollViewDelegate;
    double  _startTime;
    NSTimer * _startupTimer;
    bool  _subviewsHaveBeenLaidOut;
    long long  _tileColumnHysteresis;
    long long  _tileColumns;
    struct CGPoint { 
        double x; 
        double y; 
    }  _tileContentOffsetOverride;
    long long  _tileFirstColumn;
    long long  _tileInitialRedrawCount;
    long long  _tileLastColumn;
    id /* block */  _tileMarkDirtyCompletion;
    bool  _tileScrollingOverride;
    double  _tileWidthInPoints;
    double  _tileZoomScaleOverride;
    NSMutableDictionary * _tilesByColumnNumber;
    bool  _tilesHidden;
    bool  _tilesTransientDisabled;
    bool  _tilesWaitingForInitialRender;
    bool  _tilingDisabled;
    UIImage * _topFeatheringImage;
    UIColor * _topMarginColor;
    long long  _virtualLeftMarginStyle;
    double  _virtualLeftMarginWidth;
    long long  _virtualRightMarginStyle;
    double  _virtualRightMarginWidth;
    HKAxis * _xAxis;
    long long  _xAxisDateZoom;
    double  _xAxisSpace;
    NSSet * _yAxisAccessoryViews;
    UIView<HKGraphRenderer> * _yAxisLabelContent;
    double  _yAxisLabelMinimumWidth;
    double  _zoomScale;
}

@property (nonatomic, readonly) HKValueRange *actualAxisRange;
@property (nonatomic, readonly) HKValueRange *actualVisibleRange;
@property (nonatomic, readonly) NSArray *allSeries;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } axisInset;
@property (nonatomic, retain) HKValueRange *chartableValueRange;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic) bool contentOffsetIsSet;
@property (nonatomic) bool contentWidthFromTimeScope;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKGraphViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKValueRange *destinationEffectiveVisibleRangeActive;
@property (nonatomic, retain) UIView *detailView;
@property (nonatomic) bool disableScrolling;
@property (nonatomic) bool disableSelection;
@property (nonatomic) bool disableXAxis;
@property (nonatomic, readonly) HKValueRange *effectiveAxisRange;
@property (nonatomic, readonly) HKValueRange *effectiveVisibleRangeActive;
@property (nonatomic, readonly) HKValueRange *effectiveVisibleRangeCadence;
@property (nonatomic) bool enableInteractiveSelectionLine;
@property (nonatomic) bool enableStickySelection;
@property (nonatomic) bool enableZoomInGesture;
@property (nonatomic) unsigned long long featheringOptions;
@property (nonatomic) double hardLeftMarginWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isScrollViewDecelerating;
@property (nonatomic) double lastEndTime;
@property (nonatomic) double lastSingleSelectionXValue;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } leftMarginViewRect;
@property (nonatomic) long long maximumDateZoom;
@property (nonatomic) bool measuringStartupTime;
@property (nonatomic) long long minimumDateZoom;
@property (nonatomic) bool multiSeriesSelection;
@property (nonatomic, readonly) HKMultiTouchPressGestureRecognizer *multiTouchGestureRecognizer;
@property (nonatomic, copy) UIColor *outlineColor;
@property (nonatomic) unsigned long long outlineOptions;
@property (nonatomic, retain) HKOutsideViewTapDetector *outsideViewTapDetector;
@property (nonatomic, retain) NSMapTable *overlayInteractiveViews;
@property (nonatomic, retain) _HKGraphViewOverlayView *overlayView;
@property (nonatomic) long long previousOverlayType;
@property (nonatomic) long long scrollingOptions;
@property (nonatomic, retain) HKGraphViewSelectionStyle *selectionStyle;
@property (nonatomic) double startTime;
@property (nonatomic, retain) NSTimer *startupTimer;
@property (readonly) Class superclass;
@property (nonatomic) long long tileColumnHysteresis;
@property (nonatomic) long long tileColumns;
@property (nonatomic) struct CGPoint { double x1; double x2; } tileContentOffsetOverride;
@property (nonatomic) long long tileFirstColumn;
@property (nonatomic) long long tileInitialRedrawCount;
@property (nonatomic) long long tileLastColumn;
@property (nonatomic, copy) id /* block */ tileMarkDirtyCompletion;
@property (nonatomic) bool tileScrollingOverride;
@property (nonatomic) double tileWidthInPoints;
@property (nonatomic) double tileZoomScaleOverride;
@property (nonatomic, retain) NSMutableDictionary *tilesByColumnNumber;
@property (nonatomic) bool tilesHidden;
@property (nonatomic) bool tilesTransientDisabled;
@property (nonatomic) bool tilesWaitingForInitialRender;
@property (nonatomic) bool tilingDisabled;
@property (nonatomic, copy) UIColor *topMarginColor;
@property (nonatomic) long long virtualLeftMarginStyle;
@property (nonatomic) double virtualLeftMarginWidth;
@property (nonatomic) long long virtualRightMarginStyle;
@property (nonatomic) double virtualRightMarginWidth;
@property (nonatomic, copy) HKAxis *xAxis;
@property (nonatomic, readonly) long long xAxisDateZoom;
@property (nonatomic) double xAxisSpace;
@property (nonatomic, retain) NSSet *yAxisAccessoryViews;
@property (nonatomic, readonly) double yAxisWidth;
@property (nonatomic) double zoomScale;

+ (double)_modelCoordinateSpanForRange:(id)arg1 axis:(id)arg2;
+ (id)_rangeFromModelCoordinateMin:(double)arg1 max:(double)arg2 axis:(id)arg3;

- (void).cxx_destruct;
- (void)_activateStickySelection;
- (id)_actualVisibleRangeFromEffectiveVisibleRange:(id)arg1 dataAreaRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_addSelectionRecognizerToView:(id)arg1;
- (void)_addTapGestureRecognizerForTapOnView:(id)arg1;
- (void)_addTapGestureRecognizerForTogglingStickyToView:(id)arg1;
- (bool)_anySeriesAnimatingDuringAutoscale;
- (void)_autoScaleXAxis;
- (void)_autoScaleYAxisIfNecessaryForAllGroupsForChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_autoScaleYAxisIfNecessaryForGroupRow:(long long)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_axisRangeIsDateRange;
- (void)_cancelAllInFlightAutoscales;
- (void)_clearRenderViewIfNecessary;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; long long x2; })_closestDataPointPathToPoint:(struct CGPoint { double x1; double x2; })arg1 seriesGroupRow:(long long)arg2 minimumXDistance:(double)arg3 xDistanceOut:(double*)arg4;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; long long x2; })_closestDataPointPathToPoint:(struct CGPoint { double x1; double x2; })arg1 seriesGroupRow:(long long)arg2 seriesInGroup:(id)arg3 minimumXDistance:(double)arg4 xDistanceOut:(double*)arg5;
- (id)_closestGraphSeriesForTouchPoint:(struct CGPoint { double x1; double x2; })arg1 seriesGroup:(id)arg2;
- (id)_closestSeriesToPoint:(struct CGPoint { double x1; double x2; })arg1 allSeries:(id)arg2;
- (bool)_compareChartDate:(id)arg1 toDate:(id)arg2;
- (bool)_compareRange:(id)arg1 toRange:(id)arg2;
- (bool)_configureYAxisViewIfNeeded;
- (struct CGPoint { double x1; double x2; })_contentOffsetForActualViewRange;
- (double)_contentWidth;
- (long long)_countOfAllSeries;
- (void)_createLegendForSeriesGroup:(id)arg1;
- (void)_createLegendsIfNecessary;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_currentLegendInsets;
- (long long)_currentSelectionStateForSeriesGroup:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_dataAreaInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dataAreaRect;
- (void)_deactivateStickySelection;
- (id)_defaultXAxisValueRange;
- (void)_deselectAllSeriesWithAlpha:(double)arg1 offScreenIndicatorAlpha:(double)arg2 seriesGroup:(id)arg3;
- (double)_detailViewWidth;
- (void)_drawOverlaysIfNeeded:(id)arg1;
- (id)_effectiveVisibleRangeFromActualVisibleRange:(id)arg1;
- (void)_enumerateSeriesSelectionRegionsForSeriesGroup:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_findActualAxisRangeFromVisibleRanges;
- (void)_finishSelection;
- (id)_firstSelectionContext;
- (void)_forceYAxisAutoScaleForSeriesGroupRow:(long long)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 animated:(bool)arg3;
- (id)_graphSeriesForZoom:(long long)arg1 seriesGroupRow:(long long)arg2;
- (bool)_graphViewIsConfigured;
- (long long)_groupRowForSeries:(id)arg1;
- (void)_handleMarkDirtyCompletion;
- (void)_handleStartTouchPoint:(struct CGPoint { double x1; double x2; })arg1 seriesGroupRow:(long long)arg2;
- (void)_handleTilesInitialRender;
- (void)_hideTiles;
- (void)_hideTilesWithForce;
- (double)_inactiveRightAreaForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_installAccessoryViews;
- (void)_layoutDetailView;
- (void)_layoutLegendsForChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_layoutOverlayView;
- (void)_layoutYAxisAccessoryViewsForChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_loadFeatheringImages;
- (void)_loadScrollView;
- (void)_loadSeriesForZoom:(long long)arg1;
- (struct _HKLocationSpan { double x1; double x2; })_locationSpanForSeriesGroupRow:(long long)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_markTilesDirtyWithCompletion:(id /* block */)arg1;
- (double)_maxTimeThreshold;
- (double)_maximumZoomScale;
- (bool)_measureStartupFlagFromEnvironment;
- (void)_moveSeriesToFront:(id)arg1;
- (id)_multiSeriesSelectionContextsWithTouchPoints:(id)arg1 updateViewStates:(bool)arg2;
- (bool)_needsYAxisUpdateDuringRender;
- (id)_newPointSelectionContextsWithTouchPoints:(id)arg1 updateViewStates:(bool)arg2;
- (id)_nonOverlappingOverlaySeriesData:(id)arg1;
- (void)_notifyDateZoomDidChangeFromValue:(long long)arg1 toValue:(long long)arg2;
- (void)_notifyDelegateOfFinishUserScrolling;
- (void)_notifyDelegateOfSizeChange;
- (void)_notifyDelegateOfTapOnYAxis;
- (void)_notifyDelegateOfVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
- (void)_notifyDelegateOfYAxisWidth:(double)arg1 toWidth:(double)arg2;
- (void)_notifyDelegateSeriesUpdate:(id)arg1 newDataArrived:(bool)arg2;
- (void)_notifyDidBeginSelection;
- (void)_notifyDidEndSelection;
- (void)_notifyDidUpdateSelectionWithPointContext:(id)arg1;
- (id)_oneSeriesSelectionContextsWithTouchPoints:(id)arg1 updateViewStates:(bool)arg2;
- (long long)_ordinalForOverlayType:(long long)arg1;
- (id)_overlappingOverlaySeriesData:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_overlayAreaRect;
- (long long)_overlayEnvironmentType;
- (long long)_overlayTypeForOverlaySeriesData:(id)arg1;
- (void)_overlayViewsForOverlayData:(id)arg1 overlayView:(id)arg2;
- (void)_pauseChartInteraction;
- (id)_pointSelectionContextWithPathRange:(struct { struct { struct { long long x_1_2_1; long long x_1_2_2; } x_1_1_1; long long x_1_1_2; } x1; struct { struct { long long x_1_2_1; long long x_1_2_2; } x_2_1_1; long long x_2_1_2; } x2; })arg1 touchPoints:(id)arg2 seriesGroupRow:(long long)arg3 seriesInGroup:(id)arg4;
- (void)_preserveDestinationActiveRange:(id)arg1;
- (id)_rangeFromRange:(id)arg1 withStartOfRange:(id)arg2;
- (void)_reconfigureScrollingTiles;
- (void)_recordLastRenderTime;
- (void)_reloadViewScope;
- (void)_removeSelectionRecognizerFromView:(id)arg1;
- (void)_renderBaselineWithContext:(struct CGContext { }*)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_renderDataAreaDividersWithContext:(struct CGContext { }*)arg1;
- (void)_renderSelectionLineWithContext:(struct CGContext { }*)arg1;
- (void)_renderSeriesWithContext:(struct CGContext { }*)arg1 secondaryRenderContext:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_renderVirtualMarginGridLines:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)_renderVirtualMarginInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 marginStyle:(long long)arg3;
- (void)_renderVirtualMarginsWithContext:(struct CGContext { }*)arg1;
- (void)_renderXAxisGridlinesInContext:(struct CGContext { }*)arg1 withBlendMode:(int)arg2;
- (bool)_renderXAxisLabelAndGridsNeedsNewRendererInContext:(struct CGContext { }*)arg1;
- (double)_renderXAxisLabelsInContext:(struct CGContext { }*)arg1;
- (void)_renderYAxisDividersWithContext:(struct CGContext { }*)arg1;
- (void)_renderYAxisGridlinesInContext:(struct CGContext { }*)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withBlendMode:(int)arg3;
- (void)_renderYAxisLabelsInContext:(struct CGContext { }*)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_resetSingleSelectionXValue;
- (void)_restoreDestinationActiveRange;
- (void)_resumeChartInteraction;
- (void)_scrollToCurrentVisibleRangeAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scrollingAreaRect;
- (bool)_selectionContextsNotPreviouslySelected:(id)arg1;
- (void)_selectionRecognizerDidBegin:(id)arg1;
- (void)_selectionRecognizerDidBeginWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_selectionRecognizerDidFinish:(id)arg1;
- (void)_selectionRecognizerDidMove:(id)arg1;
- (void)_selectionRecognizerDidMoveWithTouchPoints:(id)arg1;
- (void)_selectionRecognizerDidUpdate:(id)arg1;
- (id)_seriesForCommonAxesForSeriesGroup:(id)arg1;
- (bool)_seriesGroupHasLegendEntries:(id)arg1;
- (void)_setNeedsUpdateGraphViewConfiguration;
- (bool)_setRangesForActiveVisibleRange:(id)arg1;
- (void)_setVisibleRangesForEffectiveRangeCadence:(id)arg1;
- (void)_setYAxisAccessoryViews:(id)arg1;
- (void)_showTiles;
- (bool)_simultaneousAxesAreEqualForSeriesGroup:(id)arg1;
- (void)_snapXAxisRangeToPreservedRange;
- (void)_startupTimerCallback:(id)arg1;
- (bool)_stickySelectionActive;
- (void)_tapOnViewAction:(id)arg1;
- (void)_tileHiddenFlag:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tileScreenRectForColumn:(long long)arg1;
- (bool)_tilesAreEnabled;
- (bool)_tilesConfigurableAfterInitialRender;
- (bool)_tilesReconfigurableAfterInitialRender;
- (void)_toggleStickySelectionAction:(id)arg1;
- (struct CGPoint { double x1; double x2; })_touchPointForSeriesGroupIndex:(long long)arg1 originalTouchPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_touchTilesForContentOffset:(struct CGPoint { double x1; double x2; })arg1 applyHysteresis:(bool)arg2;
- (bool)_touchesActuallyMoved:(id)arg1;
- (void)_updateAxisZoomScaleValueRange;
- (void)_updateDateZoomIfNecessary;
- (void)_updateEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3 virtualLeftMarginWidth:(double)arg4 virtualRightMarginWidth:(double)arg5;
- (void)_updateGraphViewConfiguration;
- (void)_updateGraphViewConfigurationIfNecessary;
- (void)_updateLegendForSeriesGroup:(id)arg1;
- (void)_updateLegendsForAllSeriesGroups;
- (void)_updateRangesForEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3;
- (void)_updateScene;
- (void)_updateScrollViewPropertiesIgnoringScrollViewCallbacks:(id /* block */)arg1;
- (void)_updateSelectionContextStateWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1 seriesGroup:(id)arg2;
- (void)_updateZoomForParameters;
- (id)_valueForXAxisLocation:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_verticalAxisRect;
- (id)_visibleSeriesForSeriesGroup:(id)arg1;
- (void)_walkAllSeries:(id /* block */)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_xAxisCoordinateTransform;
- (id)_yAxisRangeForSynchronizedAxesForDateZoom:(long long)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 seriesGroup:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_yAxisRectForSeriesGroupRow:(long long)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)actualAxisRange;
- (id)actualVisibleRange;
- (id)allSeries;
- (void)autoscaleStateChangedForSeries:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })axisInset;
- (id)chartableValueRange;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (bool)contentOffsetIsSet;
- (bool)contentWidthFromTimeScope;
- (id)delegate;
- (id)destinationEffectiveVisibleRangeActive;
- (id)detailView;
- (void)didMoveToWindow;
- (bool)disableScrolling;
- (bool)disableSelection;
- (bool)disableXAxis;
- (void)drawToContext:(struct CGContext { }*)arg1 tileRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 column:(long long)arg3;
- (id)effectiveAxisRange;
- (id)effectiveVisibleRangeActive;
- (id)effectiveVisibleRangeCadence;
- (bool)enableInteractiveSelectionLine;
- (bool)enableStickySelection;
- (bool)enableZoomInGesture;
- (void)enumerateVisibleCoordinatesForSeries:(id)arg1 block:(id /* block */)arg2;
- (unsigned long long)featheringOptions;
- (id)findVisibleBlockCoordinatesForPrimarySeries;
- (void)forceYAxisAutoScaleAnimated:(bool)arg1;
- (void)forceYAxisScaleToRange:(id)arg1 animated:(bool)arg2;
- (void)gestureWillBeginWithRecognizer:(id)arg1;
- (void)graphRenderer:(id)arg1 shouldRenderSceneWithContext:(struct CGContext { }*)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)hardLeftMarginWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateDataSourceCaches;
- (bool)isScrollViewDecelerating;
- (double)lastEndTime;
- (double)lastSingleSelectionXValue;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftMarginViewRect;
- (long long)maximumDateZoom;
- (bool)measuringStartupTime;
- (long long)minimumDateZoom;
- (bool)multiSeriesSelection;
- (id)multiTouchGestureRecognizer;
- (id)outlineColor;
- (unsigned long long)outlineOptions;
- (id)outsideViewTapDetector;
- (id)overlayInteractiveViews;
- (void)overlayNeedsRedisplay;
- (id)overlayView;
- (long long)previousOverlayType;
- (id)primarySeries;
- (void)removeSeries;
- (void)resetAndRedraw;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenRectForSeries:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (long long)scrollingOptions;
- (id)selectionStyle;
- (void)seriesDidInvalidatePaths:(id)arg1 newDataArrived:(bool)arg2;
- (bool)seriesDrawingDuringAutoscale;
- (bool)seriesDrawingDuringScrolling;
- (bool)seriesDrawingDuringTiling;
- (void)setAxesToShowSimultaneously:(id)arg1 stackOffset:(long long)arg2;
- (void)setAxisInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChartableValueRange:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setContentOffsetIsSet:(bool)arg1;
- (void)setContentWidthFromTimeScope:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestinationEffectiveVisibleRangeActive:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setDisableScrolling:(bool)arg1;
- (void)setDisableSelection:(bool)arg1;
- (void)setDisableXAxis:(bool)arg1;
- (void)setEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3;
- (void)setEffectiveVisibleRangeActive:(id)arg1 animated:(bool)arg2;
- (void)setEnableInteractiveSelectionLine:(bool)arg1;
- (void)setEnableStickySelection:(bool)arg1;
- (void)setEnableZoomInGesture:(bool)arg1;
- (void)setFeatheringOptions:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHardLeftMarginWidth:(double)arg1;
- (void)setLastEndTime:(double)arg1;
- (void)setLastSingleSelectionXValue:(double)arg1;
- (void)setMaximumDateZoom:(long long)arg1;
- (void)setMeasuringStartupTime:(bool)arg1;
- (void)setMinimumDateZoom:(long long)arg1;
- (void)setMultiSeriesSelection:(bool)arg1;
- (void)setNeedsReloadSeries;
- (void)setOutlineColor:(id)arg1;
- (void)setOutlineOptions:(unsigned long long)arg1;
- (void)setOutsideViewTapDetector:(id)arg1;
- (void)setOverlayInteractiveViews:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPreviousDateZoom:(long long)arg1;
- (void)setPreviousOverlayType:(long long)arg1;
- (void)setRenderView:(id)arg1;
- (void)setScrollingOptions:(long long)arg1;
- (void)setSelectionStyle:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStartupTimer:(id)arg1;
- (void)setTileColumnHysteresis:(long long)arg1;
- (void)setTileColumns:(long long)arg1;
- (void)setTileContentOffsetOverride:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTileFirstColumn:(long long)arg1;
- (void)setTileInitialRedrawCount:(long long)arg1;
- (void)setTileLastColumn:(long long)arg1;
- (void)setTileMarkDirtyCompletion:(id /* block */)arg1;
- (void)setTileScrollingOverride:(bool)arg1;
- (void)setTileWidthInPoints:(double)arg1;
- (void)setTileZoomScaleOverride:(double)arg1;
- (void)setTilesByColumnNumber:(id)arg1;
- (void)setTilesHidden:(bool)arg1;
- (void)setTilesTransientDisabled:(bool)arg1;
- (void)setTilesWaitingForInitialRender:(bool)arg1;
- (void)setTilingDisabled:(bool)arg1;
- (void)setTopMarginColor:(id)arg1;
- (void)setVirtualLeftMargin:(double)arg1;
- (void)setVirtualLeftMarginStyle:(long long)arg1;
- (void)setVirtualLeftMarginWidth:(double)arg1;
- (void)setVirtualRightMargin:(double)arg1;
- (void)setVirtualRightMarginStyle:(long long)arg1;
- (void)setVirtualRightMarginWidth:(double)arg1;
- (void)setXAxis:(id)arg1;
- (void)setXAxisSpace:(double)arg1;
- (void)setYAxisAccessoryViews:(id)arg1;
- (void)setZoomScale:(double)arg1;
- (void)setZoomScale:(double)arg1 animated:(bool)arg2;
- (double)startTime;
- (id)startupTimer;
- (bool)stillAnimating:(id)arg1;
- (void)testScrollPerformanceWithTestName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (void)testScrollPerformanceWithTestName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 options:(id)arg4;
- (long long)tileColumnHysteresis;
- (long long)tileColumns;
- (struct CGPoint { double x1; double x2; })tileContentOffsetOverride;
- (long long)tileFirstColumn;
- (long long)tileInitialRedrawCount;
- (long long)tileLastColumn;
- (id /* block */)tileMarkDirtyCompletion;
- (bool)tileScrollingOverride;
- (double)tileWidthInPoints;
- (double)tileZoomScaleOverride;
- (id)tilesByColumnNumber;
- (bool)tilesHidden;
- (bool)tilesTransientDisabled;
- (bool)tilesWaitingForInitialRender;
- (bool)tilingDisabled;
- (id)topMarginColor;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)virtualLeftMarginStyle;
- (double)virtualLeftMarginWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })virtualMarginInsets;
- (long long)virtualRightMarginStyle;
- (double)virtualRightMarginWidth;
- (void)willMoveToWindow:(id)arg1;
- (id)xAxis;
- (long long)xAxisDateZoom;
- (double)xAxisSpace;
- (id)yAxisAccessoryViews;
- (double)yAxisWidth;
- (double)zoomScale;

@end
