/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBezierPathElement : NSObject {
    double  _length;
    unsigned long long  _pointCount;
    struct CGPoint { double x1; double x2; } * _points;
    int  _type;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic) double length;
@property (nonatomic) unsigned long long pointCount;
@property (nonatomic) struct CGPoint { double x1; double x2; }*points;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } startPoint;
@property (nonatomic) int type;

- (double)computeLength;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })endPoint;
- (id)initWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 pathElement:(const struct CGPathElement { int x1; struct CGPoint {} *x2; }*)arg2;
- (double)length;
- (unsigned long long)numberOfPointsForCGPathElementType:(int)arg1;
- (unsigned long long)pointCount;
- (struct CGPoint { double x1; double x2; })pointOnPathForX:(double)arg1;
- (struct CGPoint { double x1; double x2; }*)points;
- (void)setLength:(double)arg1;
- (void)setPointCount:(unsigned long long)arg1;
- (void)setPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setType:(int)arg1;
- (struct CGPoint { double x1; double x2; })startPoint;
- (int)type;

@end
