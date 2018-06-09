/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimatedSlideModel : NSObject {
    KNAnimatedSlideView * _ASV;
    NSMutableSet * _ambientBuildRenderers;
    NSMapTable * _animatedBuildToRendererMap;
    NSMutableArray * _animatedBuilds;
    NSMutableArray * _buildEvents;
    NSMapTable * _infoToArrayOfAnimatedBuildsMap;
    NSArray * _infos;
    unsigned long long  _numberOfAddedEvents;
    KNPlaybackSession * _session;
    KNTransitionRenderer * _transitionRenderer;
}

@property (nonatomic, readonly) NSSet *ambientBuildRenderers;
@property (nonatomic, readonly) NSArray *animatedBuilds;
@property (getter=isFirstBuildEventAutomatic, nonatomic, readonly) bool firstBuildEventAutomatic;
@property (nonatomic) unsigned long long numberOfAddedEvents;
@property (nonatomic) KNPlaybackSession *session;
@property (nonatomic, readonly) KNTransitionRenderer *transitionRenderer;

- (void).cxx_destruct;
- (id)actionEffectForDrawable:(id)arg1 atBeginningOfEvent:(long long)arg2;
- (id)ambientBuildRenderers;
- (id)animatedBuildForInfo:(id)arg1 aroundEvent:(long long)arg2 isAtEndOfBuild:(bool*)arg3;
- (id)animatedBuildForInfo:(id)arg1 atEvent:(long long)arg2;
- (id)animatedBuilds;
- (id)buildChunksForEventRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)buildEventCount;
- (void)dealloc;
- (id)description;
- (double)durationForEventIndexes:(id)arg1;
- (void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned long long)arg1 ignoreInitialDelay:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (id)finalActionEffectForDrawable:(id)arg1;
- (id)firstAnimatedBuildForInfo:(id)arg1;
- (long long)inEventForInfo:(id)arg1;
- (bool)info:(id)arg1 isVisibleDuringEvent:(long long)arg2;
- (id)init;
- (id)initWithBuildChunks:(id)arg1 infos:(id)arg2 session:(id)arg3 animatedSlideView:(id)arg4;
- (double)initialDelayForEventIndex:(unsigned long long)arg1;
- (bool)isFirstBuildEventAutomatic;
- (id)lastAnimatedBuildForInfo:(id)arg1;
- (double)maxScaleFactorForDrawable:(id)arg1;
- (unsigned long long)numberOfAddedEvents;
- (long long)outEventForInfo:(id)arg1;
- (void)p_addAmbientBuildRenderer:(id)arg1;
- (id)p_animatedBuildForInfo:(id)arg1 event:(long long)arg2 buildIn:(bool)arg3;
- (id)p_animatedBuildsForInfo:(id)arg1 animationType:(long long)arg2 duringEvent:(long long)arg3 time:(double)arg4;
- (id)p_applyThemeCurvesToBuildAttributes:(id)arg1;
- (void)p_convertToBuildEvents:(id)arg1;
- (id)p_createBuildAnimationRecords:(id)arg1 info:(id)arg2 event:(long long)arg3 start:(double)arg4 eventStart:(double)arg5 animateAtEndOfPreviousBuild:(bool)arg6 previousAnimatedBuild:(id)arg7 parentBuild:(id)arg8;
- (bool)p_determineVisiblityOfInfo:(id)arg1 inOverloadedEvent:(long long)arg2 duringEvent:(long long)arg3;
- (long long)p_eventNumberForInfo:(id)arg1 animationType:(long long)arg2 defaultResult:(long long)arg3;
- (id)p_getCurrentDocumentRoot;
- (void)p_insertInitialAmbientAnimations;
- (bool)p_isInfoInvalidWithImplicitAmbientAnimations:(id)arg1;
- (id)p_newImplicitAmbientBuildRendererWithDrawable:(id)arg1 stageIndex:(long long)arg2 buildChunk:(id)arg3 startTime:(double)arg4 eventStartTime:(double)arg5 event:(long long)arg6 animateAtEndOfPreviousBuild:(bool)arg7;
- (id)p_newTransition;
- (id)p_previousAnimatedBuildOfType:(long long)arg1 forInfo:(id)arg2 priorToBuild:(id)arg3;
- (void)p_setRenderer:(id)arg1 forAnimatedBuild:(id)arg2;
- (void)p_sortAnimatedBuilds;
- (void)p_updatePreviousAndFinalAttributes;
- (void)p_updateVisibilityOnAnimatedBuild:(id)arg1;
- (id)previousAnimatedBuildForInfo:(id)arg1 priorToBuild:(id)arg2;
- (id)previousBuildInForInfo:(id)arg1 priorToBuild:(id)arg2;
- (id)previousContentBuildForInfo:(id)arg1 priorToBuild:(id)arg2;
- (id)rendererForAnimatedBuild:(id)arg1;
- (id)session;
- (void)setNumberOfAddedEvents:(unsigned long long)arg1;
- (void)setSession:(id)arg1;
- (id)transitionRenderer;

@end
