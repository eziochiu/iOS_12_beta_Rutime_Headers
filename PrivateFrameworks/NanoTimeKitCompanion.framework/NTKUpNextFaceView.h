/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextFaceView : NTKDigitalFaceView <NTKSensitiveUIStateObserver, REElementActionDelegate, REUIElementIntentActionDelegate, REUIRelevanceEngineControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
    double  _accumulatedCrownDelta;
    REUpNextScheduler * _applicationIdentifierUpdateScheduler;
    NSTimer * _buttonPressTimer;
    bool  _cancelInflightScroll;
    UIImage * _cellContentBackground;
    NSArray * _complicationDisplays;
    NTKUpNextCollectionView * _contentView;
    bool  _crownInverted;
    NSOrderedSet * _currentApplicationIdentifiers;
    REUIRelevanceEngineController * _engineController;
    unsigned long long  _faceColor;
    bool  _inBatchUpdate;
    long long  _interactiveState;
    bool  _isAnimating;
    bool  _isBacklightOn;
    bool  _isInflightScroll;
    bool  _isMonitoringElements;
    bool  _isProgramaticScrollEvent;
    double  _lastCrownVelocity;
    NTKUpNextCollectionViewFlowLayout * _layout;
    id /* block */  _modeTransitionApplier;
    id /* block */  _modeTransitionCompletion;
    bool  _needsUpdatesWhileSuppressed;
    long long  _previousDataMode;
    long long  _previousViewMode;
    UIView * _scalableView;
    bool  _scrollingStoppedTransition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _secondaryOffsetForModeTransition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startOffsetForModeTransition;
    bool  _suppressCrownEvents;
    bool  _suppressUpdates;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetOffsetForModeTransition;
    NTKDigitalTimeLabel * _timeLabel;
    NTKDigitalTimeLabelStyle * _timeLabelDefaultStyle;
    UIView * _timeLabelPlatter;
    NTKDigitalTimeLabelStyle * _timeLabelSmallInUpperRightCornerStyle;
    NTKUtilityComplicationFactory * _utilityComplicationFactory;
    UITapGestureRecognizer * _viewModeTapGesture;
    NSTimer * _viewResetTimer;
    NSTimer * _wakeWheelTimer;
    NSTimer * _wheelDelayTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_allowContentViewInteractive:(bool)arg1;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyDataMode;
- (void)_applyFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 onCell:(id)arg4;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (bool)_applyShouldUseCanonicalContent;
- (void)_applyShowContentForUnadornedSnapshot;
- (bool)_applyShowIdealizedContent;
- (void)_applyShowsCanonicalContent;
- (void)_applyShowsLockedUI;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_availableDataSourcesDidChange;
- (void)_becameActiveFace;
- (void)_becameInactiveFace;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterSettingViewMode:(long long)arg1 scroll:(bool)arg2 targetOffset:(struct CGPoint { double x1; double x2; })arg3 needsLayout:(bool)arg4;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (struct CGPoint { double x1; double x2; })_defaultPointForDefaultMode;
- (id)_detachedComplicationDisplays;
- (void)_deviceOrientationInvertedDidChangeNotification:(id)arg1;
- (bool)_dismissPresentedViewControllerIfNecessary:(bool)arg1;
- (unsigned long long)_distanceForIndexPathFromNow:(id)arg1;
- (void)_finalizeForSnapshotting:(id /* block */)arg1;
- (void)_handleEngineChangeNotification;
- (void)_handleOrdinaryScreenWake;
- (void)_handleViewModeTapGesture:(id)arg1;
- (void)_handleWristRaiseScreenWake;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutTimeLabelForViewMode:(long long)arg1;
- (void)_layoutTimeLabelPlatterViewMode:(long long)arg1;
- (void)_loadEngineController;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (void)_reloadContentIfNeeded;
- (void)_setSiriBlurColor;
- (void)_setViewMode:(long long)arg1 scroll:(bool)arg2 scrollToPoint:(struct CGPoint { double x1; double x2; })arg3 secondaryPoint:(struct CGPoint { double x1; double x2; })arg4 force:(bool)arg5 velocity:(double)arg6 animated:(bool)arg7;
- (bool)_shouldUseCanonicalContent;
- (void)_startViewResetTimer;
- (void)_stopViewResetTimer;
- (bool)_supportsTimeScrubbing;
- (void)_switchViewModeForCurrentMode:(long long)arg1 animated:(bool)arg2;
- (void)_switchViewModeToDefault;
- (id)_timeLabelStyleForViewMode:(long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateApplicationIdentifiersAndLocationAuthorization;
- (void)_updateCrownInvertedSetting;
- (void)_updateDisabledDataSources;
- (void)_updateVisibilityForAllCells;
- (bool)_usesCustomZoom;
- (double)_verticalPaddingForStatusBar;
- (bool)_wantsStatusBarHidden;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dealloc;
- (void)elementAction:(id)arg1 didFinishTask:(bool)arg2;
- (void)elementAction:(id)arg1 wantsToPerformTapActionForComplicationSlot:(id)arg2;
- (void)elementAction:(id)arg1 wantsViewControllerDisplayed:(id)arg2;
- (void)engineController:(id)arg1 didInsertContent:(id)arg2 atIndexPath:(id)arg3;
- (void)engineController:(id)arg1 didMoveContent:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)engineController:(id)arg1 didReloadContent:(id)arg2 atIndexPath:(id)arg3;
- (void)engineController:(id)arg1 didRemoveContent:(id)arg2 atIndexPath:(id)arg3;
- (bool)engineController:(id)arg1 isElementAtIndexPathVisible:(id)arg2;
- (void)engineController:(id)arg1 performBatchUpdateBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (id)intentActionWantsBackgroundImageForAlert:(id)arg1;
- (id)intentActionWantsViewToBlurForAlert:(id)arg1;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (bool)presentedViewControllerShouldBecomeFirstResponder:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)sensitiveUIStateChanged;
- (void)setViewMode:(long long)arg1;
- (void)updateTimeLabelBackground;

@end
