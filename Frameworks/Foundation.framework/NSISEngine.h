/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISEngine : NSObject <NSISVariableDelegate> {
    bool  _accessedFromMainThread;
    bool  _accumulatingRemovals;
    bool  _allowUnoptimizedReads;
    NSThread * _allowedBGThread;
    NSISObjectiveLinearExpression * _artificialObjectiveRowBody;
    NSISVariable * _artificialObjectiveRowHead;
    NSISVariable * _artificialRowHead;
    int  _automaticOptimizationDisabledCount;
    NSMapTable * _brokenConstraintNegativeErrors;
    NSMapTable * _brokenConstraintPositiveErrors;
    unsigned int  _changeCountAtLastOptimization;
    bool  _changeNotificationsDirty;
    struct { 
        struct { /* ? */ } *blocks; 
        unsigned long long blocksCount; 
        unsigned long long blocksCapacity; 
        struct { 
            union { 
                unsigned long long _data; 
                unsigned long long *_buckets; 
            } ; 
            unsigned int _bucketCount; 
        } freeIndexes; 
    }  _colTables;
    <NSISEngineDelegate> * _delegate;
    _NSISVariableObservable * _dirtyObservables;
    NSMutableSet * _dirtyVariables;
    int  _engineDelegateCallsDisabledCount;
    bool  _engineNeedsOptimization;
    bool  _engineNeedsRebuildFromConstraints;
    struct CGSize { 
        double width; 
        double height; 
    }  _engineScalingCoefficients;
    struct { 
        struct { /* ? */ } *blocks; 
        unsigned long long blocksCount; 
        unsigned long long blocksCapacity; 
        struct { 
            union { 
                unsigned long long _data; 
                unsigned long long *_buckets; 
            } ; 
            unsigned int _bucketCount; 
        } freeIndexes; 
    }  _engineVarTable;
    NSISVariable * _headForObjectiveRow;
    struct { 
        NSISEngine *engine; 
        struct { /* ? */ } *storage; 
    }  _objectiveRow;
    bool  _optimizationInProgress;
    NSHashTable * _pendingMarkerDelegates;
    NSMutableArray * _pendingRemovals;
    unsigned long long  _pivotCount;
    NSISVariable * _placeholderHeadForExpressionBeingAdded;
    NSMutableDictionary * _recordedOperations;
    bool  _revertsAfterUnsatisfiabilityHandler;
    struct { 
        struct { /* ? */ } *blocks; 
        unsigned long long blocksCount; 
        unsigned long long blocksCapacity; 
        struct { 
            union { 
                unsigned long long _data; 
                unsigned long long *_buckets; 
            } ; 
            unsigned int _bucketCount; 
        } freeIndexes; 
    }  _rowTables;
    NSMapTable * _rows;
    unsigned int  _totalChangeCount;
    id /* block */  _unsatisfiabilityHandler;
    unsigned long long  _variableChangeCount;
    NSObject<NSObservable> * _variableChangeTransactionSignal;
    int  _variableDelegateCallsDisabledCount;
    NSMapTable * _variableObservables;
    NSMapTable * _variablesObservations;
    NSMutableArray * _variablesWithValueRestrictionViolations;
}

@property (retain) NSISObjectiveLinearExpression *artificialObjectiveRowBody;
@property (retain) NSISVariable *artificialObjectiveRowHead;
@property (retain) NSISVariable *artificialRowHead;
@property (readonly, copy) NSString *debugDescription;
@property <NSISEngineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } engineScalingCoefficients;
@property (readonly) unsigned long long hash;
@property bool revertsAfterUnsatisfiabilityHandler;
@property bool shouldIntegralize;
@property (readonly) Class superclass;
@property (readonly) unsigned long long variableChangeCount;
@property (retain) NSMutableArray *variablesWithValueRestrictionViolations;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)_dbg_anyEngineContainsVariable:(id)arg1;
+ (bool)enableEngineTrace;
+ (void)setEnableEngineTrace:(bool)arg1;
+ (void)setLogOnInvalidUseFromBGThread:(bool)arg1;
+ (void)setTraceFileSuffix:(id)arg1;
+ (id)traceFileSuffix;

- (void)_addObjectiveRow;
- (id)_brokenConstraintNegativeErrors;
- (id)_brokenConstraintNegativeErrorsIfAvailable;
- (id)_brokenConstraintPositiveErrors;
- (id)_brokenConstraintPositiveErrorsIfAvailable;
- (void)_coreReplaceMarker:(id)arg1 withMarkerPlusDelta:(double)arg2;
- (bool)_dirtyListContainsObservable:(id)arg1;
- (void)_dirtyListPrependObservable:(id)arg1;
- (void)_dirtyListRemoveObservable:(id)arg1;
- (bool)_disambiguateFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forAmbiguousItem:(id)arg2 withOldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_flushPendingRemovals;
- (bool)_optimizeIfNotDisabled;
- (unsigned long long)_optimizeWithoutRebuilding;
- (void)_removeAllVariables;
- (bool)_tryToAddConstraintWithMarkerEngineVar:(struct { id x1; struct { /* ? */ } *x2; })arg1 row:(struct { id x1; struct { /* ? */ } *x2; })arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (void)addVariableToBeOptimized:(id)arg1 priority:(double)arg2;
- (id)allRowHeads;
- (id)allVariableValues;
- (id)artificialObjectiveRowBody;
- (id)artificialObjectiveRowHead;
- (id)artificialRowHead;
- (void)beginBookkeepingForVariableIfNeeded:(id)arg1;
- (void)beginRecording;
- (bool)bodyVarIsAmbiguous:(struct { id x1; struct { /* ? */ } *x2; })arg1 withPivotOfOutgoingRowHead:(struct { id x1; struct { /* ? */ } *x2; }*)arg2 foundOutgoingRowHead:(bool*)arg3;
- (id)candidateRedundantConstraints;
- (void)changeVariableToBeOptimized:(id)arg1 fromPriority:(double)arg2 toPriority:(double)arg3;
- (bool)chooseHeadForRow:(struct { id x1; struct { /* ? */ } *x2; })arg1 chosenCol:(struct { id x1; struct { /* ? */ } *x2; }*)arg2 outNewToEngine:(bool*)arg3;
- (unsigned long long)colCount;
- (void)constraintDidChangeSuchThatMarker:(id)arg1 shouldBeReplacedByMarkerPlusDelta:(double)arg2;
- (id)constraints;
- (id)constraintsAffectingValueOfVariable:(id)arg1;
- (bool)containsConstraintWithMarker:(id)arg1;
- (bool)containsVariable:(id)arg1;
- (void)copyExpressionSubstitutingRowHeadVariables:(id)arg1 intoRow:(struct { id x1; struct { /* ? */ } *x2; })arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endBookkeepingForVariableIfUnused:(id)arg1;
- (struct CGSize { double x1; double x2; })engineScalingCoefficients;
- (struct { unsigned int x1; })engineVarIndexForVariable:(id)arg1;
- (void)enumerateCols:(id /* block */)arg1;
- (void)enumerateEngineVars:(id /* block */)arg1;
- (void)enumerateOriginalConstraints:(id /* block */)arg1;
- (void)enumerateRows:(id /* block */)arg1;
- (id)errorVariableIntroducedByBreakingConstraintWithMarker:(id)arg1 errorIsPositive:(bool)arg2;
- (bool)exerciseAmbiguityInVariable:(id)arg1;
- (id)fixUpValueRestrictionViolationsWithInfeasibilityHandlingBehavior:(long long)arg1;
- (bool)handleUnsatisfiableRow:(struct { id x1; struct { /* ? */ } *x2; })arg1 usingInfeasibilityHandlingBehavior:(long long)arg2 prospectiveRowHead:(struct { id x1; struct { /* ? */ } *x2; }*)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (bool)hasObservableForVariable:(id)arg1;
- (bool)hasValue:(double*)arg1 forEngineVar:(struct { id x1; struct { /* ? */ } *x2; })arg2;
- (bool)hasValue:(double*)arg1 forExpression:(id)arg2;
- (bool)hasValue:(double*)arg1 forVariable:(id)arg2;
- (bool)hasValueForPossiblyDeallocatedVariable:(id)arg1;
- (bool)incoming:(struct { id x1; struct { /* ? */ } *x2; }*)arg1 andOutgoing:(struct { id x1; struct { /* ? */ } *x2; }*)arg2 foundOutgoing:(bool*)arg3 rowHeadsThatMakeValueAmbiguousForVariable:(struct { id x1; struct { /* ? */ } *x2; })arg4;
- (id)init;
- (double)integralizationAdjustmentForMarker:(id)arg1;
- (bool)isObservingChangesForVariable:(id)arg1;
- (bool)isTrackingVariableChanges;
- (id)markerForBrokenConstraintWithNegativeErrorVar:(id)arg1;
- (id)markerForBrokenConstraintWithPositiveErrorVar:(id)arg1;
- (bool)negativeErrorVarForBrokenConstraintWithMarker:(id)arg1 errorVar:(struct { id x1; struct { /* ? */ } *x2; }*)arg2;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (id)observableForVariable:(id)arg1;
- (unsigned long long)optimize;
- (bool)outgoingRowHeadForRemovingConstraintWithMarker:(struct { id x1; struct { /* ? */ } *x2; })arg1 outgoingRowHead:(struct { id x1; struct { /* ? */ } *x2; }*)arg2;
- (void)performModifications:(id /* block */)arg1 withUnsatisfiableConstraintsHandler:(id /* block */)arg2;
- (void)performPendingChangeNotifications;
- (void)performPendingChangeNotificationsForItem:(id)arg1;
- (unsigned long long)pivotCount;
- (bool)positiveErrorVarForBrokenConstraintWithMarker:(id)arg1 errorVar:(struct { id x1; struct { /* ? */ } *x2; }*)arg2;
- (void)rebuildFromConstraints;
- (id)recordedCommandsData;
- (void)removeConstraintWithMarker:(id)arg1;
- (void)removeObservableForVariable:(id)arg1;
- (void)removeVariableToBeOptimized:(id)arg1 priority:(double)arg2;
- (void)replaceMarker:(struct { id x1; struct { /* ? */ } *x2; })arg1 withMarkerPlusCoefficient:(double)arg2 timesCol:(struct { id x1; struct { /* ? */ } *x2; })arg3;
- (unsigned long long)replayCommandsData:(id)arg1 verifyingIntegrity:(bool)arg2;
- (bool)revertsAfterUnsatisfiabilityHandler;
- (unsigned long long)rowCount;
- (void)setArtificialObjectiveRowBody:(id)arg1;
- (void)setArtificialObjectiveRowHead:(id)arg1;
- (void)setArtificialRowHead:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEngineScalingCoefficients:(struct CGSize { double x1; double x2; })arg1;
- (void)setNegativeErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2;
- (void)setPositiveErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2;
- (void)setRevertsAfterUnsatisfiabilityHandler:(bool)arg1;
- (void)setShouldIntegralize:(bool)arg1;
- (void)setVariablesWithValueRestrictionViolations:(id)arg1;
- (bool)shouldIntegralize;
- (void)startObservingChangesForVariable:(id)arg1;
- (void)stopObservingChangesForVariable:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; }*)traceState;
- (bool)tryAddingDirectly:(struct { id x1; struct { /* ? */ } *x2; })arg1;
- (bool)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 integralizationAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (bool)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (bool)tryToChangeConstraintSuchThatMarker:(id)arg1 isReplacedByMarkerPlusDelta:(double)arg2 undoHandler:(id /* block */)arg3;
- (id)tryToOptimizeReturningMutuallyExclusiveConstraints;
- (bool)tryUsingArtificialVariableToAddConstraintWithMarker:(struct { id x1; struct { /* ? */ } *x2; })arg1 row:(struct { id x1; struct { /* ? */ } *x2; })arg2 usingInfeasibilityHandlingBehavior:(long long)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (double)valueForEngineVar:(struct { id x1; struct { /* ? */ } *x2; })arg1;
- (double)valueForExpression:(id)arg1;
- (double)valueForVariable:(id)arg1;
- (bool)valueOfVariableIsAmbiguous:(id)arg1;
- (int)valueRestrictionForEngineVarIndex:(struct { unsigned int x1; })arg1;
- (unsigned long long)variableChangeCount;
- (id)variableChangeTransactionSignal;
- (id)variableForEngineVarIndex:(struct { unsigned int x1; })arg1;
- (id)variablesWithValueRestrictionViolations;
- (void)verifyInternalIntegrity;
- (void)withAutomaticOptimizationDisabled:(id /* block */)arg1;
- (void)withBehaviors:(unsigned long long)arg1 performModifications:(id /* block */)arg2;
- (void)withDelegateCallsDisabled:(id /* block */)arg1;
- (void)withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)_UIKitEngineTrackingOn;
- (void)_UIKitPerformPendingChangeNotifications;
- (unsigned long long)_UIKitRowCount;
- (void)_setUIKitEngineTrackingOn:(bool)arg1;
- (id)debugQuickLookObject;

@end
