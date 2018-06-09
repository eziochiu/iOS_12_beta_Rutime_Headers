/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIGestureGraphNode : UIGestureGraphElement {
    NSMapTable * _edgesByLabel;
    NSMutableSet * _inEdges;
    NSMutableSet * _inOutEdges;
    NSMutableSet * _outEdges;
}

@property (nonatomic, readonly) NSSet *allEdges;
@property (nonatomic, readonly) unsigned long long edgeCount;
@property (nonatomic, readonly) NSSet *inEdges;
@property (nonatomic, readonly) NSSet *inOutEdges;
@property (nonatomic, readonly) NSSet *outEdges;

- (void).cxx_destruct;
- (void)_addEdge:(id)arg1;
- (id)_edgesForType:(unsigned long long)arg1 createIfNeeded:(bool)arg2;
- (void)_removeEdge:(id)arg1;
- (id)allEdges;
- (id)description;
- (unsigned long long)edgeCount;
- (unsigned long long)edgeCountForLabel:(id)arg1;
- (id)edgesForLabel:(id)arg1;
- (void)enumerateEdgesBetweenNode:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateEdgesFromNode:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateEdgesTowardNode:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateNeighborNodesUsingBlock:(id /* block */)arg1;
- (bool)hasEdgeBetweenNode:(id)arg1;
- (bool)hasEdgeFromNode:(id)arg1;
- (bool)hasEdgeTowardNode:(id)arg1;
- (id)inEdges;
- (id)inOutEdges;
- (bool)isInEdge:(id)arg1;
- (bool)isInOutEdge:(id)arg1;
- (bool)isOutEdge:(id)arg1;
- (id)outEdges;
- (unsigned long long)typeOfEdge:(id)arg1;

@end
