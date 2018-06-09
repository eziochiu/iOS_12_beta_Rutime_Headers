/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISEngine : NSObject <NSISVariableDelegate> {
    bool  _accessedFromMainThread;
    bool  _accumulatingRemovals;
    bool  _allowUnoptimizedReads;
    NSThread * _allowedBGThread;
    int  _automaticOptimizationDisabledCount;
    NSMapTable * _brokenConstraintNegativeErrors;
    NSMapTable * _brokenConstraintPositiveErrors;
    unsigned int  _changeCountAtLastOptimization;
    bool  _changeNotificationsDirty;
    /* Warning: unhandled struct encoding: '{?={?=I}@}' */ struct { struct { unsigned int x_1_1_1; } x1; id x2; } * _colTable;
    unsigned long long  _colTableCapacity;
    <NSISEngineDelegate> * _delegate;
    _NSISVariableObservable * _dirtyObservables;
    int  _engineDelegateCallsDisabledCount;
    bool  _engineNeedsOptimization;
    bool  _engineNeedsRebuildFromConstraints;
    struct CGSize { 
        double width; 
        double height; 
    }  _engineScalingCoefficients;
    struct { id x1; unsigned int x2 : 1; unsigned int x3 : 2; } * _engineVarTable;
    unsigned long long  _engineVarTableCapacity;
    NSMutableIndexSet * _freeColIndexes;
    NSMutableIndexSet * _freeEngineVarIndexes;
    NSMutableIndexSet * _freeRowIndexes;
    NSISVariable * _headForObjectiveRow;
    struct { 
        NSISEngine *engine; 
        struct { 
            unsigned int value; 
        } index; 
    }  _objectiveRow;
    bool  _optimizationInProgress;
    NSHashTable * _pendingMarkerDelegates;
    NSMutableArray * _pendingRemovals;
    unsigned long long  _pivotCount;
    NSISVariable * _placeholderHeadForExpressionBeingAdded;
    NSMutableDictionary * _recordedOperations;
    bool  _revertsAfterUnsatisfiabilityHandler;
    /* Warning: unhandled struct encoding: '{?={?=I}b1@}' */ struct { struct { unsigned int x_1_1_1; } x1; unsigned int x2 : 1; id x3; } * _rowTable;
    unsigned long long  _rowTableCapacity;
    NSMapTable * _rows;
    unsigned int  _totalChangeCount;
    id /* block */  _unsatisfiabilityHandler;
    unsigned long long  _variableChangeCount;
    NSObject<NSObservable> * _variableChangeTransactionSignal;
    int  _variableDelegateCallsDisabledCount;
    NSMapTable * _variableObservables;
    NSMutableArray * _variablesWithValueRestrictionViolations;
}

@property /* Warning: unhandled struct encoding: '{?={?=I}@}' */ struct { struct { unsigned int x_1_1_1; } x1; id x2; }*colTable;
@property (readonly, copy) NSString *debugDescription;
@property <NSISEngineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } engineScalingCoefficients;
@property struct { id x1; unsigned int x2 : 1; unsigned int x3 : 2; }*engineVarTable;
@property (readonly) unsigned long long hash;
@property bool revertsAfterUnsatisfiabilityHandler;
@property /* Warning: unhandled struct encoding: '{?={?=I}b1@}' */ struct { struct { unsigned int x_1_1_1; } x1; unsigned int x2 : 1; id x3; }*rowTable;
@property bool shouldIntegralize;
@property (readonly) Class superclass;
@property (readonly) unsigned long long variableChangeCount;
@property (retain) NSMutableArray *variablesWithValueRestrictionViolations;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)_dbg_anyEngineContainsVariable:(id)arg1;
+ (void)setLogOnInvalidUseFromBGThread:(bool)arg1;

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
- (void)addCol:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg1 coefficient:(double)arg2 toRow:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg3;
- (void)addCol:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg1 priority:(double)arg2 times:(double)arg3 toObjectiveRow:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg4;
- (void)addRowBody:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg1 priority:(double)arg2 times:(double)arg3 toObjectiveRow:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg4;
- (void)addRowBody:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg1 times:(double)arg2 toRow:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg3;
- (void)addVariableToBeOptimized:(id)arg1 priority:(double)arg2;
- (id)allRowHeads;
- (void)beginBookkeepingForVariableIfNeeded:(id)arg1;
- (void)beginRecording;
- (bool)bodyVarIsAmbiguous:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg1 withPivotOfOutgoingRowHead:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; }*)arg2 foundOutgoingRowHead:(bool*)arg3;
- (id)candidateRedundantConstraints;
- (void)changeVariableToBeOptimized:(id)arg1 fromPriority:(double)arg2 toPriority:(double)arg3;
- (bool)chooseHeadForRow:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg1 chosenCol:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; }*)arg2 outNewToEngine:(bool*)arg3;
- (/* Warning: unhandled struct encoding: '{?={?=I}@}' */ struct { struct { unsigned int x_1_1_1; } x1; id x2; }*)colTable;
- (void)constraintDidChangeSuchThatMarker:(id)arg1 shouldBeReplacedByMarkerPlusDelta:(double)arg2;
- (id)constraints;
- (id)constraintsAffectingValueOfVariable:(id)arg1;
- (bool)containsConstraintWithMarker:(id)arg1;
- (bool)containsVariable:(id)arg1;
- (id)createExpressionBySubstitutingForRowHeadVariablesInExpression:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endBookkeepingForVariableIfUnused:(id)arg1;
- (struct CGSize { double x1; double x2; })engineScalingCoefficients;
- (struct { unsigned int x1; })engineVarIndexForVariable:(id)arg1;
- (struct { id x1; unsigned int x2 : 1; unsigned int x3 : 2; }*)engineVarTable;
- (void)enumerateCols:(id /* block */)arg1;
- (void)enumerateEngineVars:(id /* block */)arg1;
- (void)enumerateOriginalConstraints:(id /* block */)arg1;
- (void)enumerateRows:(id /* block */)arg1;
- (id)errorVariableIntroducedByBreakingConstraintWithMarker:(id)arg1 errorIsPositive:(bool)arg2;
- (bool)exerciseAmbiguityInVariable:(id)arg1;
- (id)fallbackMarkerForConstraintToBreakInRowWithHead:(id)arg1 body:(id)arg2;
- (id)fixUpValueRestrictionViolationsWithInfeasibilityHandlingBehavior:(long long)arg1;
- (bool)handleUnsatisfiableRow:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg1 usingInfeasibilityHandlingBehavior:(long long)arg2 prospectiveRowHead:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; }*)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (id)handleUnsatisfiableRowWithHead:(id)arg1 body:(id)arg2 usingInfeasibilityHandlingBehavior:(long long)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (bool)hasObservableForVariable:(id)arg1;
- (bool)hasValue:(double*)arg1 forExpression:(id)arg2;
- (bool)hasValue:(double*)arg1 forVariable:(id)arg2;
- (bool)hasValueForPossiblyDeallocatedVariable:(id)arg1;
- (bool)incoming:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; }*)arg1 andOutgoing:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; }*)arg2 foundOutgoing:(bool*)arg3 rowHeadsThatMakeValueAmbiguousForVariable:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg4;
- (id)init;
- (double)integralizationAdjustmentForMarker:(id)arg1;
- (bool)isTrackingVariableChanges;
- (id)markerForBrokenConstraintWithNegativeErrorVar:(id)arg1;
- (id)markerForBrokenConstraintWithPositiveErrorVar:(id)arg1;
- (bool)negativeErrorVarForBrokenConstraintWithMarker:(id)arg1 errorVar:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; }*)arg2;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (id)observableForVariable:(id)arg1;
- (unsigned long long)optimize;
- (bool)outgoingRowHeadForRemovingConstraintWithMarker:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg1 outgoingRowHead:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; }*)arg2;
- (void)performModifications:(id /* block */)arg1 withUnsatisfiableConstraintsHandler:(id /* block */)arg2;
- (void)performPendingChangeNotifications;
- (void)performPendingChangeNotificationsForItem:(id)arg1;
- (unsigned long long)pivotCount;
- (bool)positiveErrorVarForBrokenConstraintWithMarker:(id)arg1 errorVar:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; }*)arg2;
- (void)rebuildFromConstraints;
- (id)recordedCommandsData;
- (void)removeColFromAllRows:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg1;
- (void)removeConstraintWithMarker:(id)arg1;
- (void)removeObservableForVariable:(id)arg1;
- (void)removeVariableToBeOptimized:(id)arg1 priority:(double)arg2;
- (void)replaceMarker:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg1 withMarkerPlusCoefficient:(double)arg2 timesCol:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg3;
- (unsigned long long)replayCommandsData:(id)arg1 verifyingIntegrity:(bool)arg2;
- (bool)revertsAfterUnsatisfiabilityHandler;
- (unsigned long long)rowCount;
- (/* Warning: unhandled struct encoding: '{?={?=I}b1@}' */ struct { struct { unsigned int x_1_1_1; } x1; unsigned int x2 : 1; id x3; }*)rowTable;
- (void)setColTable:(/* Warning: unhandled struct encoding: '{?={?=I}@}' */ struct { struct { unsigned int x_1_1_1; } x1; id x2; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEngineScalingCoefficients:(struct CGSize { double x1; double x2; })arg1;
- (void)setEngineVarTable:(struct { id x1; unsigned int x2 : 1; unsigned int x3 : 2; }*)arg1;
- (void)setNegativeErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2;
- (void)setPositiveErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2;
- (void)setRevertsAfterUnsatisfiabilityHandler:(bool)arg1;
- (void)setRowTable:(/* Warning: unhandled struct encoding: '{?={?=I}b1@}' */ struct { struct { unsigned int x_1_1_1; } x1; unsigned int x2 : 1; id x3; }*)arg1;
- (void)setShouldIntegralize:(bool)arg1;
- (void)setVariablesWithValueRestrictionViolations:(id)arg1;
- (bool)shouldIntegralize;
- (bool)tryAddingDirectly:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg1;
- (bool)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 integralizationAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (bool)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (bool)tryToAddConstraintWithMarkerEngineVar:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg1 row:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (bool)tryToChangeConstraintSuchThatMarker:(id)arg1 isReplacedByMarkerPlusDelta:(double)arg2 undoHandler:(id /* block */)arg3;
- (id)tryToOptimizeReturningMutuallyExclusiveConstraints;
- (bool)tryUsingArtificialVariableToAddConstraintWithMarker:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg1 row:(struct { id x1; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x2; void*x3; unsigned int x4; })arg2 usingInfeasibilityHandlingBehavior:(long long)arg3 mutuallyExclusiveConstraints:(id*)arg4;
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

@end
