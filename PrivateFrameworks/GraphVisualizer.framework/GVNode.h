/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
 */

@interface GVNode : NSObject {
    double  h;
    NSMutableOrderedSet * inNodes;
    unsigned long long  inPriority;
    long long  index;
    GVNode * next;
    NSMutableOrderedSet * outNodes;
    unsigned long long  outPriority;
    GVNode * prev;
    long long  rank;
    double  w;
    double  x;
    double  y;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) double cx;
@property (nonatomic) double cy;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) double h;
@property (readonly) unsigned long long inDegree;
@property (nonatomic, retain) NSMutableOrderedSet *inNodes;
@property (nonatomic) unsigned long long inPriority;
@property (nonatomic) long long index;
@property (nonatomic) GVNode *next;
@property (nonatomic) struct CGPoint { double x1; double x2; } origin;
@property (readonly) unsigned long long outDegree;
@property (nonatomic, retain) NSMutableOrderedSet *outNodes;
@property (nonatomic) unsigned long long outPriority;
@property (nonatomic) GVNode *prev;
@property (nonatomic) long long rank;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) double w;
@property (nonatomic) double x;
@property (nonatomic) double y;

- (void)addEdgeFrom:(id)arg1;
- (void)addEdgeTo:(id)arg1;
- (struct CGPoint { double x1; double x2; })center;
- (void)computePriority;
- (double)cx;
- (double)cy;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (double)h;
- (bool)hasEdgeFrom:(id)arg1;
- (bool)hasEdgeTo:(id)arg1;
- (unsigned long long)inDegree;
- (id)inNodes;
- (unsigned long long)inPriority;
- (long long)index;
- (id)init;
- (id)next;
- (struct CGPoint { double x1; double x2; })origin;
- (unsigned long long)outDegree;
- (id)outNodes;
- (unsigned long long)outPriority;
- (id)prev;
- (long long)rank;
- (void)removeEdgeFrom:(id)arg1;
- (void)removeEdgeTo:(id)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCx:(double)arg1;
- (void)setCy:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setH:(double)arg1;
- (void)setInNodes:(id)arg1;
- (void)setInPriority:(unsigned long long)arg1;
- (void)setIndex:(long long)arg1;
- (void)setNext:(id)arg1;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOutNodes:(id)arg1;
- (void)setOutPriority:(unsigned long long)arg1;
- (void)setPrev:(id)arg1;
- (void)setRank:(long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setW:(double)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)traversePostorder:(int)arg1 withCallback:(id /* block */)arg2 stopper:(id /* block */)arg3 randomize:(bool)arg4;
- (void)traversePreorder:(int)arg1 withCallback:(id /* block */)arg2 randomize:(bool)arg3;
- (double)w;
- (double)x;
- (double)y;

@end
