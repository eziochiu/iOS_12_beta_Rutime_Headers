/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKGraph : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * __info;
    /* Warning: unhandled struct encoding: '{GKCGraph=^^?{vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}^^{GKCGraphNode}{__compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}}}@}' */ struct GKCGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; } * _cGraph;
    NSMutableArray * _nodes;
}

@property (nonatomic, retain) NSMutableDictionary *_info;
@property (nonatomic, readonly) NSArray *nodes;

+ (id)graph;
+ (id)graphWithNodes:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_info;
- (void)addNodes:(id)arg1;
- (/* Warning: unhandled struct encoding: '{GKCGraph=^^?{vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}^^{GKCGraphNode}{__compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}}}@}' */ struct GKCGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; }*)cGraph;
- (void)connectNodeToLowestCostNode:(id)arg1 bidirectional:(bool)arg2;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)findPathFromNode:(id)arg1 toNode:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNodes:(id)arg1;
- (/* Warning: unhandled struct encoding: '{GKCGraph=^^?{vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}^^{GKCGraphNode}{__compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}}}@}' */ struct GKCGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; }*)makeCGraph;
- (id)nodes;
- (id)nodesMut;
- (void)removeNodes:(id)arg1;
- (void)set_info:(id)arg1;

@end
