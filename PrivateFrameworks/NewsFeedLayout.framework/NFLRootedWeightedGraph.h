/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLRootedWeightedGraph : NSObject <NSCopying> {
    FCSetValueMapTable * _childToParents;
    NSMutableSet * _childlessNodes;
    FCSetValueMapTable * _parentToChildren;
    NSMutableSet * _parentlessNodes;
    id  _rootNode;
    NSMutableDictionary * _weightsByEdge;
}

@property (nonatomic, retain) FCSetValueMapTable *childToParents;
@property (nonatomic, retain) NSMutableSet *childlessNodes;
@property (nonatomic, retain) FCSetValueMapTable *parentToChildren;
@property (nonatomic, retain) NSMutableSet *parentlessNodes;
@property (nonatomic, retain) id rootNode;
@property (nonatomic, retain) NSMutableDictionary *weightsByEdge;

- (void).cxx_destruct;
- (id)_edgeRepresentationFromNode:(id)arg1 toNode:(id)arg2;
- (void)_setWeight:(double)arg1 forEdgeFromNode:(id)arg2 toNode:(id)arg3;
- (void)_submitMaxPath:(id)arg1 withWeight:(double)arg2 toNode:(id)arg3 maxPathStore:(id)arg4;
- (void)addDirectedEdgeWithWeight:(double)arg1 fromNode:(id)arg2 toNode:(id)arg3;
- (id)childToParents;
- (id)childlessNodes;
- (id)childrenOfNode:(id)arg1;
- (bool)containsNode:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)debug_assertDataStructuresInSync;
- (id)description;
- (id)highestAverageWeightedPathsFromRootToNode:(id)arg1 pathWeight:(double*)arg2;
- (id)init;
- (id)initWithRootNode:(id)arg1;
- (id)parentToChildren;
- (id)parentlessNodes;
- (id)parentsOfNode:(id)arg1;
- (void)removeChildlessNodesExhaustivelyButNode:(id)arg1;
- (void)removeEdgeFromNode:(id)arg1 toNode:(id)arg2;
- (void)removeNode:(id)arg1;
- (void)removeParentlessNodesExhaustivelyButRootNode;
- (id)rootNode;
- (void)setChildToParents:(id)arg1;
- (void)setChildlessNodes:(id)arg1;
- (void)setParentToChildren:(id)arg1;
- (void)setParentlessNodes:(id)arg1;
- (void)setRootNode:(id)arg1;
- (void)setWeightsByEdge:(id)arg1;
- (double)weightForEdgeFromNode:(id)arg1 toNode:(id)arg2;
- (id)weightsByEdge;

@end
