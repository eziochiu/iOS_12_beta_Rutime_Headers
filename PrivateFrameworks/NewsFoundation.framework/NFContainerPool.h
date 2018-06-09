/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFContainerPool : NSObject {
    unsigned long long  _depth;
    unsigned long long  _drainDepth;
    struct NSMutableDictionary { Class x1; } * _graph;
    bool  _objectGraphDrainingEnabled;
    NSMutableArray * _onDrainBlocks;
    NSMutableArray * _onDrainCopyPoolObjectGraphBlocks;
    struct NSMutableDictionary { Class x1; } * _singletons;
}

@property (nonatomic) unsigned long long depth;
@property (nonatomic) unsigned long long drainDepth;
@property (nonatomic, retain) NSMutableDictionary *graph;
@property (getter=isObjectGraphDrainingEnabled, nonatomic) bool objectGraphDrainingEnabled;
@property (nonatomic, retain) NSMutableArray *onDrainBlocks;
@property (nonatomic, retain) NSMutableArray *onDrainCopyPoolObjectGraphBlocks;
@property (getter=isPoolPreparedForLockingGraph, nonatomic, readonly) bool poolPreparedForLockingGraph;
@property (nonatomic, retain) NSMutableDictionary *singletons;

- (void).cxx_destruct;
- (id)copyWithObjectGraphDrainingDisabled;
- (unsigned long long)depth;
- (void)drain;
- (unsigned long long)drainDepth;
- (id)enter:(id /* block */)arg1;
- (struct NSMutableDictionary { Class x1; }*)graph;
- (id)init;
- (bool)isObjectGraphDrainingEnabled;
- (bool)isPoolPreparedForLockingGraph;
- (void)linkDepth:(id /* block */)arg1;
- (void)onDrain:(id /* block */)arg1;
- (id)onDrainBlocks;
- (void)onDrainCopyPoolObjectGraph:(id /* block */)arg1;
- (id)onDrainCopyPoolObjectGraphBlocks;
- (void)setDepth:(unsigned long long)arg1;
- (void)setDrainDepth:(unsigned long long)arg1;
- (void)setGraph:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)setObjectGraphDrainingEnabled:(bool)arg1;
- (void)setOnDrainBlocks:(id)arg1;
- (void)setOnDrainCopyPoolObjectGraphBlocks:(id)arg1;
- (void)setSingletons:(struct NSMutableDictionary { Class x1; }*)arg1;
- (struct NSMutableDictionary { Class x1; }*)singletons;

@end
