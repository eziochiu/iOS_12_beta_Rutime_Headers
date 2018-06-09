/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIGestureGraph : NSObject {
    NSMapTable * _edgesByLabel;
    NSMapTable * _nodesByLabel;
}

@property (nonatomic, readonly) unsigned long long edgeCount;
@property (nonatomic, readonly) NSSet *edgeLabels;
@property (nonatomic, readonly) unsigned long long nodeCount;
@property (nonatomic, readonly) NSSet *nodeLabels;

- (void).cxx_destruct;
- (void)_addEdge:(id)arg1;
- (void)_addNode:(id)arg1;
- (id)_allEdges;
- (id)_allNodes;
- (id)_edgesForLabel:(id)arg1;
- (id)_nodesForLabel:(id)arg1;
- (id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(bool)arg4;
- (id)addNodeWithLabel:(id)arg1;
- (id)addNodeWithLabel:(id)arg1 properties:(id)arg2;
- (id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(bool)arg4 properties:(id)arg5;
- (id)addUniqueNodeWithLabel:(id)arg1 properties:(id)arg2;
- (id)description;
- (unsigned long long)edgeCount;
- (unsigned long long)edgeCountForLabel:(id)arg1;
- (id)edgeLabels;
- (id)edgesForLabel:(id)arg1;
- (id)edgesForLabel:(id)arg1 properties:(id)arg2;
- (void)enumerateEdgesWithBlock:(id /* block */)arg1;
- (void)enumerateEdgesWithLabel:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateNodesWithBlock:(id /* block */)arg1;
- (void)enumerateNodesWithLabel:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (unsigned long long)nodeCount;
- (unsigned long long)nodeCountForLabel:(id)arg1;
- (id)nodeLabels;
- (id)nodesForLabel:(id)arg1;
- (id)nodesForLabel:(id)arg1 properties:(id)arg2;
- (void)removeAllObjects;
- (void)removeEdge:(id)arg1;
- (void)removeEdges:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)removeNodeEdges:(id)arg1;
- (void)removeNodes:(id)arg1;
- (void)traverseGraphBreadthFirstFromNode:(id)arg1 directed:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)traverseGraphDepthFirstFromNode:(id)arg1 directed:(bool)arg2 usingBlock:(id /* block */)arg3;

@end
