/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKLocalTimelineComplicationController : NTKTimelineComplicationController <CLKCComplicationDataSourceDelegate, NTKComplicationTimelineDelegate, NTKTimeTravel> {
    NTKTimelineDataOperation * _currentOperation;
    CLKCComplicationDataSource * _dataSource;
    long long  _dataSourceState;
    NSMutableSet * _delayedBlocks;
    bool  _hasBeenLive;
    bool  _hasQueuedAnimation;
    unsigned long long  _queuedAnimation;
    bool  _supportsTimeTravelBackward;
    bool  _supportsTimeTravelForward;
    NSMutableSet * _suspendedLeftBoundaryDates;
    NSMutableSet * _suspendedRightBoundaryDates;
    CLKComplicationTemplate * _switcherTemplate;
    NSDate * _timeTravelDate;
    NTKComplicationTimeline * _timeline;
    NSDate * _timelineEndDate;
    NSDate * _timelineStartDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_acceptsComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;
+ (Class)complicationDataSourceClassForComplication:(id)arg1 family:(long long)arg2 device:(id)arg3;

- (void).cxx_destruct;
- (void)_activate;
- (void)_applyAnimationMode;
- (void)_applyCachingMode;
- (void)_applyUpdatingMode;
- (void)_cancelDelayedBlocks;
- (void)_completeExtendLeftOperationWithBoundaryDate:(id)arg1 entries:(id)arg2;
- (void)_completeExtendRightOperationWithBoundaryDate:(id)arg1 entries:(id)arg2;
- (void)_completeSetupOperationWithDirections:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 currentEntry:(id)arg4 priority:(long long)arg5;
- (id)_currentEntry;
- (void)_deactivate;
- (void)_extendTimelineIfNecessaryAndPossible;
- (void)_queueAnimationForNextUpdate:(unsigned long long)arg1;
- (void)_requestDataSourceToUpdateToState:(long long)arg1;
- (void)_resetTimelineForCachingChange;
- (void)_startExtendLeftOperationFromDate:(id)arg1;
- (void)_startExtendOperationIfNecessaryForWindow:(id)arg1 withDate:(id)arg2 minBuffer:(double)arg3;
- (void)_startExtendRightOperationFromDate:(id)arg1;
- (void)_startSetupOperationIfPossibleWithPriority:(long long)arg1;
- (void)_suspendLeftBoundaryDate:(id)arg1;
- (void)_suspendRightBoundaryDate:(id)arg1;
- (void)_updateCurrentTemplateWithReason:(long long)arg1;
- (void)_updateDimStateForCurrentTimeline;
- (void)_updateIsComplicationActive:(bool)arg1;
- (void)_updateTimeTravelBoundaries;
- (id)activeDisplayTemplate;
- (void)addDisplayWrapper:(id)arg1;
- (id)alwaysOnTemplate;
- (void)appendEntries:(id)arg1;
- (void)appendEntries:(id)arg1 withTritiumUpdatePriority:(long long)arg2;
- (id)complicationApplicationIdentifier;
- (void)didTouchDownInView:(id)arg1;
- (void)didTouchUpInsideView:(id)arg1;
- (void)entriesDidChangeInTimeline:(id)arg1 withTritiumUpdatePriority:(long long)arg2;
- (bool)hasTapAction;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (void)invalidateEntries;
- (void)invalidateEntriesWithTritiumUpdatePriority:(long long)arg1;
- (void)invalidateSwitcherTemplate;
- (id)lockedTemplate;
- (double)minimumIntervalBetweenTimelineEntries;
- (void)nowEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)performTapAction;
- (Class)richComplicationDisplayViewClass;
- (void)setCurrentTemplate:(id)arg1 reason:(long long)arg2 animation:(unsigned long long)arg3;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)setShowsLockedUI:(bool)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (void)setTimelineEndDate:(id)arg1;
- (void)setTimelineStartDate:(id)arg1;
- (void)timeTravelEntryDidChangeFrom:(id)arg1 to:(id)arg2;

@end
