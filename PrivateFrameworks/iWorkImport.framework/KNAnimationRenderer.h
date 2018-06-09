/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationRenderer : NSObject {
    KNAnimatedSlideView * _ASV;
    bool  _areAnimationsPaused;
    unsigned long long  _direction;
    double  _duration;
    id  _plugin;
    Class  _pluginClass;
    <KNAnimationPluginContext> * _pluginContext;
    KNPlaybackSession * _session;
}

@property (nonatomic) unsigned long long direction;
@property (nonatomic) double duration;
@property (nonatomic, readonly) id plugin;
@property (nonatomic, readonly) Class pluginClass;
@property (nonatomic, readonly) <KNAnimationPluginContext> *pluginContext;

- (void)dealloc;
- (unsigned long long)direction;
- (double)duration;
- (void)generateTextures;
- (void)pauseAnimations;
- (void)pauseAnimationsAtTime:(double)arg1;
- (id)plugin;
- (Class)pluginClass;
- (id)pluginContext;
- (void)prepareAnimationsAsynchronously;
- (void)renderTextures;
- (void)resumeAnimationsIfPaused;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)setDirection:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setupPluginContext;
- (void)stopAnimations;
- (void)teardown;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(bool)arg1;

@end
