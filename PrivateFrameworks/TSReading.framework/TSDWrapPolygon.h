/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDWrapPolygon : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBounds;
    bool  mComputedBounds;
    bool  mComputedSelfIntersection;
    bool  mIntersectsSelf;
    void * mPolygon;
}

- (id)bezierPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })intersectionPointBetween:(struct CGPoint { double x1; double x2; })arg1 and:(struct CGPoint { double x1; double x2; })arg2;
- (bool)intersectsSelf;
- (void)p_computeIntersectionState;
- (int)p_countSegments;
- (void)p_freePolygon;
- (void)p_setPolygon:(struct { int x1; int *x2; struct { /* ? */ } *x3; }*)arg1;
- (void*)polygon;
- (void)setIntersectsSelf:(bool)arg1;
- (void)setPath:(id)arg1;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
