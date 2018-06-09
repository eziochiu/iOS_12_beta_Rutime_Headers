/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPZoneBorder : NSObject <CPCopying, NSCopying> {
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
    NSMutableArray * graphicObjects;
    bool  hasBackwardVector;
    bool  hasForwardVector;
    NSMutableArray * intersections;
    bool  isHorizontal;
    NSMutableArray * neighbors;
    double  overhangMax;
    double  overhangMin;
    NSMutableArray * ownerArray;
    CPPage * page;
}

+ (void)addIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 atRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extendRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (void)outerVertices:(struct CGPoint { double x1; double x2; }*)arg1 fromBorders:(id)arg2 swollenBy:(double)arg3;
+ (void)removeIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2;

- (void)addGraphicObject:(id)arg1;
- (void)addNeighbor:(id)arg1;
- (void)addToArray:(id)arg1;
- (void)addToArray:(id)arg1 atIndex:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)combine:(id)arg1;
- (long long)compareXBounds:(id)arg1;
- (long long)compareYBounds:(id)arg1;
- (bool)continues:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithoutIntersections;
- (bool)crosses:(id)arg1;
- (void)dealloc;
- (bool)extractCycleTo:(id)arg1 goingForward:(bool)arg2 startingAtIndex:(unsigned int)arg3;
- (bool)extractCycleTo:(id)arg1 goingForward:(bool)arg2 throughIntersectionIndex:(unsigned int)arg3 returningTo:(id)arg4 atRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (id)getNextBorder:(unsigned int)arg1;
- (id)graphicObjectAtIndex:(unsigned int)arg1;
- (unsigned int)graphicObjectCount;
- (id)graphicObjects;
- (bool)hasBackwardVector;
- (bool)hasClockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(bool)arg2;
- (bool)hasCounterclockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(bool)arg2;
- (bool)hasForwardVector;
- (bool)hasNeighborShape:(id)arg1;
- (bool)hasNeighborShape:(id)arg1 atSide:(int)arg2;
- (bool)hasVectorGoingForward:(bool)arg1 startingAtIndex:(unsigned int*)arg2;
- (unsigned int)indexOfIntersectionWith:(id)arg1;
- (id)init;
- (id)initSuper;
- (id)initWithGraphicObject:(id)arg1;
- (void)instantiateVectors;
- (unsigned int)intersectionCount;
- (bool)intersectsWith:(id)arg1 atRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (bool)isHorizontal;
- (bool)isVertical;
- (id)neighborAtIndex:(unsigned int)arg1;
- (unsigned int)neighborCount;
- (id)ownerArray;
- (id)page;
- (void)removeFromArray;
- (void)removeFromArrayAtIndex:(unsigned int)arg1;
- (void)removeGraphicObjectAtIndex:(unsigned int)arg1;
- (void)removeLooseThreadsStartingFrom:(id)arg1;
- (void)removeNeighborAtIndex:(unsigned int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasBackwardVector:(bool)arg1;
- (void)setHasForwardVector:(bool)arg1;
- (void)setSide:(int)arg1 ofPage:(id)arg2;
- (void)trimToLastIntersections;
- (bool)windsClockwiseOnto:(id)arg1;
- (long long)zOrder;

@end
