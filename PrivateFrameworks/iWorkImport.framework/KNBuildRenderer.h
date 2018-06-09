/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildRenderer : KNAnimationRenderer <CAAnimationDelegate> {
    TSDFPSCounter * _FPSCounter;
    KNAnimatedBuild * _animatedBuild;
    NSMutableArray * _animatedBuildsToStartAtEnd;
    NSMapTable * _animatedLayers;
    KNAnimationInfo * _animationInfo;
    bool  _animationWillBeginPerformed;
    bool  _areAnimationsPrepared;
    SEL  _buildEndCallbackSelector;
    id  _buildEndCallbackTarget;
    KNBuildChunk * _buildStage;
    TSDTextureSet * _endOfBuildTextureSet;
    TSDTextureSet * _finalAttributesTextureSet;
    TSDDrawableInfo * _info;
    bool  _interrupted;
    bool  _isAnimationForPlayback;
    bool  _isNonCachedTextureValid;
    bool  _isPreview;
    bool  _isTextureCachedAtEndOfBuild;
    long long  _numberOfAnimationsStarted;
    CALayer * _parentLayer;
    bool  _shouldUseMagicMoveTextures;
    TSDTextureDescription * _textureDescription;
    TSDTextureSet * _textureSet;
    NSMutableSet * _texturesToTeardown;
    bool  _usingFinalTexture;
}

@property (nonatomic, readonly) KNAnimatedBuild *animatedBuild;
@property (nonatomic, readonly) NSArray *animatedBuildsToStartAtEnd;
@property (nonatomic, readonly) KNBuildChunk *buildStage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSDDrawableInfo *info;
@property (nonatomic, retain) CALayer *parentLayer;
@property (nonatomic, readonly) TSDRep *rep;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long textureDeliveryStyle;
@property (nonatomic, retain) TSDTextureDescription *textureDescription;
@property (nonatomic, readonly) TSDTextureSet *textureSet;
@property (nonatomic, readonly) long long textureStageIndex;

- (bool)addAnimationsAtLayerTime:(double)arg1;
- (void)addBuildToStartAtEnd:(id)arg1;
- (void)animateAfterDelay:(double)arg1;
- (id)animatedBuild;
- (id)animatedBuildsToStartAtEnd;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)buildStage;
- (void)dealloc;
- (id)description;
- (void)fadeOutPreviousStageOn:(id)arg1 atLayerTime:(double)arg2;
- (void)forceRemoveAnimations;
- (void)generateTextures;
- (id)info;
- (id)initWithAnimatedBuild:(id)arg1 info:(id)arg2 buildStage:(id)arg3 session:(id)arg4 animatedSlideView:(id)arg5;
- (id)initializeTextureSetForEndOfBuild:(bool)arg1 endOfSlide:(bool)arg2 description:(id)arg3 isRenderingToContext:(bool)arg4;
- (id)loadPluginIfNeeded;
- (id)p_filterForTextDelivery:(long long)arg1;
- (id)p_initializeTextureSetForEndOfBuild:(bool)arg1 endOfSlide:(bool)arg2 description:(id)arg3 isRenderingToContext:(bool)arg4;
- (bool)p_isDriftAnimation;
- (bool)p_isMovieInfo;
- (bool)p_isTextDrawable;
- (id)p_keyForAnimation;
- (void)p_removeAnimations;
- (void)p_resetAnimations;
- (id)p_textureSetForStage:(long long)arg1 description:(id)arg2 isAtEndOfBuild:(bool)arg3 shouldForceRebuild:(bool)arg4 shouldRender:(bool)arg5;
- (void)p_updateTextureDescription:(id)arg1 forStage:(long long)arg2 isAtEndOfBuild:(bool)arg3;
- (id)parentLayer;
- (void)pauseAnimationsAtTime:(double)arg1;
- (id)prepareAnimationsSynchronously;
- (void)registerForBuildEndCallback:(SEL)arg1 target:(id)arg2;
- (void)removeAnimationsAndFinish:(bool)arg1;
- (void)removeBuildToStartAtEnd:(id)arg1;
- (void)renderTextures;
- (id)rep;
- (void)resetHighlightsBeforeAnimationOnTextureSet:(id)arg1;
- (void)resetPreviousStageToUnhighlightOnTextureSet:(id)arg1;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)setEndOfBuildTextureSet:(id)arg1;
- (void)setGeometryAndActionAttributesOnTextureSet:(id)arg1 isAtEndOfBuild:(bool)arg2 isAtEndOfSlide:(bool)arg3 isRenderingToContext:(bool)arg4;
- (void)setLayerVisibility:(id)arg1 isAtEndOfBuild:(bool)arg2;
- (void)setParentLayer:(id)arg1;
- (void)setTextureDescription:(id)arg1;
- (id)setupFinalTextureGivenCurrentTextureSet:(id)arg1 isRenderingToContext:(bool)arg2;
- (void)setupPluginContext;
- (bool)shouldPreGenerateTextures;
- (void)stopAnimations;
- (void)teardown;
- (unsigned long long)textureDeliveryStyle;
- (id)textureDescription;
- (id)textureDescriptionForStage:(long long)arg1 isAtEndOfBuild:(bool)arg2;
- (id)textureSet;
- (id)textureSetForStage:(long long)arg1 description:(id)arg2 isAtEndOfBuild:(bool)arg3 shouldForceRebuild:(bool)arg4 shouldRender:(bool)arg5;
- (id)textureSetWithoutRenderedContents;
- (long long)textureStageIndex;
- (void)updateAnimationTestingLog;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(bool)arg1;

@end
