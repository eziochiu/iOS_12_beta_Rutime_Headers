/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneLayerManager : NSObject <BSDescriptionProviding> {
    NSString * _identifier;
    NSHashTable * _observers;
    NSMutableOrderedSet * _orderedLayers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSOrderedSet *layers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateObserversWithBlock:(id /* block */)arg1;
- (void)_observer_didRepositionLayer:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)_observer_didStopTrackingLayers;
- (void)_observer_willStartTrackingLayers;
- (void)addLayer:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)initWithScene:(id)arg1;
- (id)layerWithContextID:(unsigned int)arg1;
- (id)layers;
- (void)removeLayer:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
