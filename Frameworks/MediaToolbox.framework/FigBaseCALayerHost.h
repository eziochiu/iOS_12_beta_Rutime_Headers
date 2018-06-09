/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigBaseCALayerHost : CALayerHost {
    bool  _preventsChangesToSublayerHierarchy;
}

@property (nonatomic) bool preventsChangesToSublayerHierarchy;

+ (id)defaultActionForKey:(id)arg1;

- (id)actionForKey:(id)arg1;
- (void)addSublayer:(id)arg1;
- (id)init;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (bool)preventsChangesToSublayerHierarchy;
- (void)removeFromSuperlayer;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)setPreventsChangesToSublayerHierarchy:(bool)arg1;
- (void)setSublayers:(id)arg1;

@end
