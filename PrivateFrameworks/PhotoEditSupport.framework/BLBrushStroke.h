/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLBrushStroke : AutoEncodeDecodeObject <NSSecureCoding> {
    int  _destinationWidth;
    bool  _erase;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastPoint;
    bool  _magicEdges;
    NSMutableData * _offsets;
    float  _opacity;
    float  _size;
    float  _softness;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    bool  _startPointSet;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _strokeRect;
    double  _timestamp;
    int  _type;
}

@property (nonatomic) int destinationWidth;
@property (nonatomic) bool erase;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastPoint;
@property (nonatomic) bool magicEdges;
@property (nonatomic, retain) NSMutableData *offsets;
@property (nonatomic) float opacity;
@property (nonatomic) float size;
@property (nonatomic) float softness;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPoint;
@property (nonatomic) bool startPointSet;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } strokeRect;
@property (nonatomic) double timestamp;
@property (nonatomic) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addPoint:(struct CGPoint { double x1; double x2; })arg1;
- (int)destinationWidth;
- (bool)erase;
- (id)init;
- (id)keysToEncode;
- (struct CGPoint { double x1; double x2; })lastPoint;
- (bool)magicEdges;
- (int)numberOfPoints;
- (id)offsets;
- (float)opacity;
- (void)replayPointsWithScale:(float)arg1 pointBlock:(id /* block */)arg2;
- (void)setDestinationWidth:(int)arg1;
- (void)setErase:(bool)arg1;
- (void)setLastPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMagicEdges:(bool)arg1;
- (void)setOffsets:(id)arg1;
- (void)setOpacity:(float)arg1;
- (void)setSize:(float)arg1;
- (void)setSoftness:(float)arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartPointSet:(bool)arg1;
- (void)setStrokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(int)arg1;
- (float)size;
- (float)softness;
- (struct CGPoint { double x1; double x2; })startPoint;
- (bool)startPointSet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })strokeRect;
- (double)timestamp;
- (int)type;

@end
