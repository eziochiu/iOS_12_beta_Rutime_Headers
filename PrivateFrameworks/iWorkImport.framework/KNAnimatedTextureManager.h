/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimatedTextureManager : NSObject {
    KNSlideNode * _currentSlideNode;
    bool  _isPrecachingActive;
    NSOperationQueue * _preCacheBackgroundQueue;
    NSOperationQueue * _rasterizeTextureQueue;
    KNPlaybackSession * _session;
    bool  _shouldPreCache;
    NSMapTable * _slideNodeToASVMap;
    NSMutableSet * _slideNodesInMemorySet;
    NSLock * _slideNodesInMemorySetLock;
}

@property (nonatomic) KNSlideNode *currentSlideNode;
@property (nonatomic) bool shouldPreCache;

- (void).cxx_destruct;
- (id)ASVForSlideNode:(id)arg1;
- (void)addTextureToRasterizationQueue:(id)arg1 isOpenGL:(bool)arg2 asv:(id)arg3;
- (id)currentSlideNode;
- (void)dealloc;
- (id)description;
- (void)evictCacheForSlideNode:(id)arg1;
- (void)evictCaches;
- (void)evictInMemoryCache;
- (void)evictPersistentCache;
- (id)init;
- (id)initWithSession:(id)arg1;
- (void)p_addSlideNodeToMemorySet:(id)arg1;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (void)p_invalidateASV:(id)arg1;
- (void)p_processSlideNode:(id)arg1 isHighPriority:(bool)arg2;
- (void)p_rasterizeTexture:(id)arg1 isOpenGL:(bool)arg2;
- (void)p_serializeExtraSlideNodes;
- (void)p_serializeTexturesForSlideNode:(id)arg1;
- (void)p_setCurrentSlideNodeToProcess:(id)arg1;
- (id)p_setupPrepareAnimationOperationOnSlideNode:(id)arg1;
- (id)p_setupSlideRasterizationOperationOnSlideNode:(id)arg1;
- (id)p_setupTextureGenerationOperationOnSlideNode:(id)arg1;
- (bool)p_shouldProcessSlideNode:(id)arg1;
- (id)p_slideNodesToCacheAroundCurrentSlideNode:(id)arg1 shouldIncludeExtraSlideAtEnd:(bool)arg2;
- (void)setCurrentSlideNode:(id)arg1;
- (void)setShouldPreCache:(bool)arg1;
- (bool)shouldPreCache;
- (void)startPreCaching;
- (void)stopPreCaching;
- (void)tearDown;

@end
