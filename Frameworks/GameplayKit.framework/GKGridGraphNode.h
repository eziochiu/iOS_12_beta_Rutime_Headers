/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKGridGraphNode : GKGraphNode {
    struct GKCGridGraphNode { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; struct GKCPolygonObstacle {} *x3; struct GKCPolygonObstacle {} *x4; int x5; id x6; } * _cGridGraphNode;
}

@property (nonatomic, readonly) void gridPosition;

+ (id)nodeWithGridPosition;
+ (bool)supportsSecureCoding;

- (struct GKCGridGraphNode { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; struct GKCPolygonObstacle {} *x3; struct GKCPolygonObstacle {} *x4; int x5; id x6; }*)cGridGraphNode;
- (float)costToNode:(id)arg1;
- (void)deleteCGraphNode;
- (void)encodeWithCoder:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (void)gridPosition;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGridPosition;
- (/* Warning: unhandled struct encoding: '{GKCGraphNode=^^?{vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}^^{GKCGraphNode}{__compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}}}^{GKCPolygonObstacle}^{GKCPolygonObstacle}i@}' */ struct GKCGraphNode { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; struct GKCPolygonObstacle {} *x3; struct GKCPolygonObstacle {} *x4; int x5; id x6; }*)makeCGraphNode;

@end
