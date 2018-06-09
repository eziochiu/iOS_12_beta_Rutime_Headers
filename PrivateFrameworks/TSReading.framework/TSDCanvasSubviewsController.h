/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDCanvasSubviewsController : NSObject {
    NSArray * _alternateLayersForViews;
    bool  _hasBeenTornDown;
    <TSDLayerAndSubviewHosting> * _host;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    bool  _needsLayout;
    NSSet * _repChildViews;
    TSURetainedPointerKeyDictionary * _repViewControllersByChildView;
    NSDictionary * _repsByChildView;
    NSMutableArray * _subviewLayers;
}

@property (nonatomic, readonly) NSSet *repChildViews;

- (void)addSubviews:(id)arg1;
- (void)dealloc;
- (id)initWithLayerAndSubviewHost:(id)arg1;
- (void)p_recursivelyFindAlternateLayersForRep:(id)arg1 accumulatingLayers:(id)arg2 repsByChildLayer:(id)arg3;
- (void)p_recursivelyFindChildViewsForRep:(id)arg1 accumulatingViews:(id)arg2 accumulatingRepsByChildView:(id)arg3;
- (void)p_recursivelyFindHostingRepsForRep:(id)arg1 accumulatingHostingReps:(id)arg2;
- (void)p_sortLayers:(id)arg1;
- (void)p_sortSubviews:(id)arg1;
- (id)p_topLevelReps;
- (void)removeSubviews:(id)arg1;
- (id)repChildViews;
- (void)setNeedsLayout;
- (void)syncPerformBlock:(id /* block */)arg1;
- (void)teardown;
- (id)updateAlternateLayersForViews;
- (void)updateTopLevelLayersForTiling:(id)arg1;
- (void)updateViewsFromReps;

@end
