/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPChunk : CPObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  bounds;
    bool  dirtyBounds;
    long long  insertionOrder;
    unsigned int  position;
    bool  shrinksWithChildren;
}

+ (float)chooseReferenceFontSizeFrom:(float)arg1 and:(float)arg2;

- (float)absoluteGapTo:(id)arg1;
- (void)accept:(id)arg1;
- (void)add:(id)arg1;
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addChildrenOf:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustToPointBoundary:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })advance;
- (float)advanceDeltaAfterSpace;
- (struct CGPoint { double x1; double x2; })anchor;
- (double)bottom;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)boundsEqualsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 accuracy:(double)arg2;
- (double)center;
- (unsigned int)chunkPosition;
- (float)clusterGapTo:(id)arg1;
- (int)clusterLevelHint;
- (long long)compareAnchorX:(id)arg1;
- (long long)compareAnchorY:(id)arg1;
- (long long)compareAnchorYDescending:(id)arg1;
- (long long)compareChunkPosition:(id)arg1;
- (long long)compareCommonAnchorX:(id)arg1;
- (long long)compareInsertionOrder:(id)arg1;
- (long long)compareLinearBounds:(id)arg1;
- (long long)compareTopDescending:(id)arg1;
- (long long)compareX:(id)arg1;
- (long long)compareXBounds:(id)arg1;
- (long long)compareY:(id)arg1;
- (long long)compareYBounds:(id)arg1;
- (long long)compareYDescending:(id)arg1;
- (long long)compareYDescendingX:(id)arg1;
- (long long)compareZ:(id)arg1;
- (long long)compareZDescending:(id)arg1;
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)describeBounds;
- (void)fitBoundsToChildren;
- (float)fontSize;
- (bool)geometricallyContains:(id)arg1;
- (id)init;
- (long long)insertionOrder;
- (bool)intersectsChild:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)left;
- (id)newTakeChildren;
- (id)newTakeChildrenAmong:(id)arg1;
- (float)opticalLeading;
- (void)orderedInsert:(id)arg1 usingSelector:(SEL)arg2;
- (bool)overlapsHorizontallyWith:(id)arg1;
- (bool)overlapsVerticallyWith:(id)arg1;
- (float)referenceAdvanceWidth;
- (void)remove:(id)arg1;
- (void)removeAll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderedBounds;
- (void)resizeWith:(id)arg1;
- (double)right;
- (double)rotationAngle;
- (void)setAnchor:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChildren:(id)arg1;
- (void)setChunkPosition:(unsigned int)arg1;
- (void)setInsertionOrder:(long long)arg1;
- (void)setShrinksWithChildren:(bool)arg1;
- (bool)shrinksWithChildren;
- (void)sortUsingSelector:(SEL)arg1;
- (double)top;
- (void)translateObjectYBy:(double)arg1;

@end
