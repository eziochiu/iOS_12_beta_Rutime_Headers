/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKGraphNode : NSObject <NSSecureCoding> {
    /* Warning: unhandled struct encoding: '{GKCGraphNode=^^?{vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}^^{GKCGraphNode}{__compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}}}^{GKCPolygonObstacle}^{GKCPolygonObstacle}i@}' */ struct GKCGraphNode { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; struct GKCPolygonObstacle {} *x3; struct GKCPolygonObstacle {} *x4; int x5; id x6; } * _cGraphNode;
    NSMutableArray * _connectedNodes;
}

@property (nonatomic, readonly) NSArray *connectedNodes;

+ (id)node;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addConnection:(id)arg1 bidirectional:(bool)arg2;
- (void)addConnectionsToNodes:(id)arg1 bidirectional:(bool)arg2;
- (/* Warning: unhandled struct encoding: '{GKCGraphNode=^^?{vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}^^{GKCGraphNode}{__compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}}}^{GKCPolygonObstacle}^{GKCPolygonObstacle}i@}' */ struct GKCGraphNode { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; struct GKCPolygonObstacle {} *x3; struct GKCPolygonObstacle {} *x4; int x5; id x6; }*)cGraphNode;
- (id)connectedNodes;
- (float)costToNode:(id)arg1;
- (void)dealloc;
- (void)deleteCGraphNode;
- (void)encodeWithCoder:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (id)findPathFromNode:(id)arg1;
- (id)findPathToNode:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (/* Warning: unhandled struct encoding: '{GKCGraphNode=^^?{vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}^^{GKCGraphNode}{__compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}}}^{GKCPolygonObstacle}^{GKCPolygonObstacle}i@}' */ struct GKCGraphNode { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; struct GKCPolygonObstacle {} *x3; struct GKCPolygonObstacle {} *x4; int x5; id x6; }*)makeCGraphNode;
- (id)mutConnectedNodes;
- (void)removeConnection:(id)arg1;
- (void)removeConnectionsToNodes:(id)arg1 bidirectional:(bool)arg2;

@end
