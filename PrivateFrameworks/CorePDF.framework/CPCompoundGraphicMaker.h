/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPCompoundGraphicMaker : NSObject <CPDisposable> {
    CPCluster * cluster;
    bool  disposed;
    struct { unsigned int x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; } * groupInfoArray;
    unsigned int  groupInfoCount;
    double  pageSpread;
    CPChunk * parentChunk;
    unsigned int  shapeCount;
    id * shapes;
    bool  shapesAreVectorGraphics;
}

+ (bool)makeCompoundGraphicsInZonesOf:(id)arg1;

- (void)addGroupInfoWithIndex:(unsigned int)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)coalesceShapeGroups;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (bool)findClusterLevel;
- (bool)groupOverlappingGraphics;
- (id)initWithGraphicsIn:(id)arg1 ofClass:(Class)arg2;
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (bool)makeCompoundGraphics;
- (bool)makeCompoundGraphicsFromShapeGroups;

@end
