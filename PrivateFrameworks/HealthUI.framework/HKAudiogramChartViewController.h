/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAudiogramChartViewController : HKViewController <HKDisplayTypeSectionedContextViewDelegate, HKLollipopDelegate, HKSampleTypeUpdateControllerObserver, HKScalarGraphCollectionViewDelegate> {
    _HKAudiogramAnnotationViewDataSource * _annotationViewDataSource;
    _HKAudiogramHeader * _audiogramHeader;
    NSMutableArray * _audiograms;
    bool  _audiogramsFetched;
    HKDisplayTypeSectionedContextView * _contextView;
    long long  _currentAudiogramIndex;
    HKLollipopController * _lollipopController;
    double  _minimumAudiogramHeight;
    HKScalarGraphCollectionViewController * _scalarGraphCollectionController;
    NSArray * _sections;
    long long  _selectedOverlayEar;
    UIButton * _showAllFiltersButton;
    UIStackView * _stackView;
    NSLayoutConstraint * _stackViewHeightConstraint;
    HKUnitPreferenceController * _unitController;
    HKSampleTypeUpdateController * _updateController;
    HKAxis * _yAxis;
}

@property (nonatomic, retain) _HKAudiogramAnnotationViewDataSource *annotationViewDataSource;
@property (nonatomic, retain) _HKAudiogramHeader *audiogramHeader;
@property (nonatomic, retain) NSArray *audiograms;
@property (nonatomic) bool audiogramsFetched;
@property (nonatomic, retain) HKDisplayTypeSectionedContextView *contextView;
@property (nonatomic) long long currentAudiogramIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKLollipopController *lollipopController;
@property (nonatomic) double minimumAudiogramHeight;
@property (nonatomic, retain) HKScalarGraphCollectionViewController *scalarGraphCollectionController;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic) long long selectedOverlayEar;
@property (nonatomic, retain) UIButton *showAllFiltersButton;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) NSLayoutConstraint *stackViewHeightConstraint;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKUnitPreferenceController *unitController;
@property (nonatomic, retain) HKSampleTypeUpdateController *updateController;
@property (nonatomic, retain) HKAxis *yAxis;

+ (id)_chartPointsFromSensitivityData:(id)arg1 leftEarSeries:(bool)arg2;
+ (bool)testChartPointCreation:(id)arg1 leftEarSeries:(bool)arg2 expectedChartPoints:(id)arg3 failureMessage:(id*)arg4;

- (void).cxx_destruct;
- (id)_accessibleColorFromColor:(id)arg1;
- (void)_addContextView;
- (void)_addControllerAsChildController:(id)arg1;
- (id)_audiogramDisplayType;
- (id)_audiogramLabelColorForStyle:(long long)arg1;
- (id)_audiogramLineColorForStyle:(long long)arg1;
- (id)_audiogramPointMarkerColorForStyle:(long long)arg1;
- (id)_audiogramPresentationStyleWithStyle:(long long)arg1 isOverlay:(bool)arg2;
- (id)_audiogramSeriesForOverlay:(id)arg1 forLeftEar:(bool)arg2;
- (id)_audiogramSeriesWithAudiogram:(id)arg1 forLeftEar:(bool)arg2 withLineStyle:(long long)arg3 legendAnnotation:(bool)arg4;
- (id)_audiogramStrokeStyleWithColor:(id)arg1 dottedLines:(bool)arg2;
- (id)_averageLineColor;
- (id)_averageSectionFromAudiogram:(id)arg1;
- (id)_buildAnnotationViewDataSourceWithUnitController:(id)arg1;
- (id)_buildAudiogramHeader;
- (id)_buildContextItem;
- (id)_buildYAxisForSensitivity;
- (id)_currentValueTitleStringFromSample:(id)arg1;
- (id)_currentValueValueStringFromSample:(id)arg1;
- (id)_defaultLabelStyleForStyle:(long long)arg1 axis:(bool)arg2;
- (long long)_defaultLineStyleForLeftEar:(bool)arg1;
- (id)_disabledLineColor;
- (id)_disabledPointMarkerColor;
- (id)_findNavigationController;
- (id)_indexPathForCurrentSelections;
- (id)_leftEarSensitivityForAudiogram:(id)arg1;
- (id)_localizedLegendEntryKey:(bool)arg1;
- (id)_numberFromSensitivity:(id)arg1;
- (void)_pinView:(id)arg1 toParentGuide:(id)arg2;
- (id)_primaryAnnotationColor;
- (id)_primaryLineColor;
- (id)_primaryPointMarkerColor;
- (void)_resetCurrentGraph;
- (id)_rightEarSensitivityForAudiogram:(id)arg1;
- (id)_secondaryAnnotationColor;
- (id)_secondaryLineColor;
- (long long)_secondaryLineStyleForLeftEar:(bool)arg1;
- (id)_secondaryPointMarkerColor;
- (id)_sectionsFromAudiogram:(id)arg1;
- (void)_setupFixedFrequencyAxisForGraphView:(id)arg1;
- (void)_setupInitialUI;
- (id)_setupSeriesForAudiogramSample:(id)arg1 leftStyle:(long long)arg2 rightStyle:(long long)arg3;
- (void)_updateAudiogramSamples:(id)arg1 error:(id)arg2;
- (void)_updateHeaderState;
- (void)_updateOverlayPillsAndHeaderWithSample:(id)arg1;
- (id)annotationViewDataSource;
- (id)audiogramHeader;
- (id)audiograms;
- (bool)audiogramsFetched;
- (id)contextView;
- (void)contextView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)contextView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)currentAudiogramIndex;
- (void)dealloc;
- (void)graphCollectionView:(id)arg1 didChangeVisibleIndex:(long long)arg2;
- (id)graphSeriesForIndex:(long long)arg1;
- (id)graphViewControllerForIndex:(long long)arg1;
- (id)headerViewForLollipop;
- (id)initWithUnitController:(id)arg1 sampleTypeUpdateController:(id)arg2 minimumAudiogramHeight:(double)arg3;
- (id)lollipopAnnotationColor;
- (id)lollipopController;
- (id)lollipopControllerForGraphCollectionView;
- (double)lollipopExtensionLength;
- (id)lollipopFieldColor;
- (double)minimumAudiogramHeight;
- (long long)numberOfItemsInCollection;
- (void)queryForAudiogramsUsingHealthStore:(id)arg1;
- (id)scalarGraphCollectionController;
- (id)sections;
- (long long)selectedOverlayEar;
- (void)setAnnotationViewDataSource:(id)arg1;
- (void)setAudiogramHeader:(id)arg1;
- (void)setAudiograms:(id)arg1;
- (void)setAudiogramsFetched:(bool)arg1;
- (void)setContextView:(id)arg1;
- (void)setCurrentAudiogramIndex:(long long)arg1;
- (void)setLollipopController:(id)arg1;
- (void)setMinimumAudiogramHeight:(double)arg1;
- (void)setScalarGraphCollectionController:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSelectedOverlayEar:(long long)arg1;
- (void)setShowAllFiltersButton:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setStackViewHeightConstraint:(id)arg1;
- (void)setUnitController:(id)arg1;
- (void)setUpdateController:(id)arg1;
- (void)setYAxis:(id)arg1;
- (id)showAllFiltersButton;
- (id)stackView;
- (id)stackViewHeightConstraint;
- (id)unitController;
- (void)updateAnnotationDataSource:(id)arg1 pointContexts:(id)arg2;
- (id)updateController;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (void)viewDidLoad;
- (id)yAxis;

@end
