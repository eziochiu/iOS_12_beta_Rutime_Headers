/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKGraphNode2D : GKGraphNode {
    struct GKCGraphNode2D { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; struct GKCPolygonObstacle {} *x3; struct GKCPolygonObstacle {} *x4; int x5; id x6; } * _cGraphNode2D;
}

@property (nonatomic) void position;

+ (id)nodeWithPoint;
+ (bool)supportsSecureCoding;

- (struct GKCGraphNode2D { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; struct GKCPolygonObstacle {} *x3; struct GKCPolygonObstacle {} *x4; int x5; id x6; }*)cGraphNode2D;
- (float)costToNode:(id)arg1;
- (void)deleteCGraphNode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoint;
- (/* Warning: unhandled struct encoding: '{GKCGraphNode=^^?{vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}^^{GKCGraphNode}{__compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}}}^{GKCPolygonObstacle}^{GKCPolygonObstacle}i@}' */ struct GKCGraphNode { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; struct GKCPolygonObstacle {} *x3; struct GKCPolygonObstacle {} *x4; int x5; id x6; }*)makeCGraphNode;
- (void)position;
- (void)setPosition;

@end
