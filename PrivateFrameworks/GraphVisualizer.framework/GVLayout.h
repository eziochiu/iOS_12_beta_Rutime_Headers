/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
 */

@interface GVLayout : NSObject {
    unsigned long long  currentCrossings;
    int  direction;
    GVGraph * graph;
    NSMutableArray * ranks;
    unsigned long long * savedOrder;
    NSMutableArray * selfEdges;
    struct CGSize { 
        double width; 
        double height; 
    }  separation;
}

@property (nonatomic) int direction;
@property (nonatomic) GVGraph *graph;
@property (nonatomic, retain) NSMutableArray *ranks;
@property (nonatomic, retain) NSMutableArray *selfEdges;
@property (nonatomic) struct CGSize { double x1; double x2; } separation;

+ (struct CGSize { double x1; double x2; })layoutGraph:(id)arg1 withDirection:(int)arg2 separation:(struct CGSize { double x1; double x2; })arg3;

- (void)_removeCycleDFS:(id)arg1 visistedNodes:(id)arg2 nodesInStack:(id)arg3;
- (void)assignCoordinates;
- (void)assignNodeCoordinates;
- (void)assignNodePriorities;
- (void)assignRankCoordinates;
- (void)assignRanks;
- (void)balanceRanks;
- (void)buildRankIterators;
- (void)commitOrder;
- (unsigned long long)crossings;
- (void)dealloc;
- (int)direction;
- (struct CGSize { double x1; double x2; })doLayout:(id)arg1 direction:(int)arg2 separation:(struct CGSize { double x1; double x2; })arg3;
- (id)graph;
- (void)initializeNodeCoordinates;
- (void)initializeOrder;
- (void)initializeRanks;
- (void)makeFeasibleTree;
- (void)medianPosition:(unsigned long long)arg1;
- (void)medianSort:(id)arg1 withRespectTo:(id)arg2;
- (unsigned long long)medianValueOf:(id)arg1 withRespectTo:(id)arg2;
- (void)minimizeCutValues;
- (void)normalizeRanks;
- (void)orderVertices;
- (void)packCutX:(unsigned long long)arg1;
- (void)packCutY:(unsigned long long)arg1;
- (id)ranks;
- (void)removeCycles;
- (void)removeSelfEdges;
- (void)restoreOrder;
- (void)saveOrder;
- (id)selfEdges;
- (struct CGSize { double x1; double x2; })separation;
- (void)setDirection:(int)arg1;
- (void)setGraph:(id)arg1;
- (void)setRanks:(id)arg1;
- (void)setSelfEdges:(id)arg1;
- (void)setSeparation:(struct CGSize { double x1; double x2; })arg1;
- (void)straightenX;
- (void)straightenY;
- (void)transpose;
- (void)undoRemoveCycles;
- (void)undoRemoveSelfEdges;
- (void)weightedMedian:(unsigned long long)arg1;

@end
