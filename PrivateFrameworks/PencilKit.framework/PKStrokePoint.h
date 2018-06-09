/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKStrokePoint : NSObject {
    bool  _inflight;
    void * _point;
    bool  _pointOwned;
    PKStroke * _stroke;
}

@property double altitude;
@property double azimuth;
@property double force;
@property struct CGPoint { double x1; double x2; } location;
@property double timestamp;
@property (readonly) double velocity;

+ (struct PKCompressedStrokePoint { float x1; struct _PKPoint { float x_2_1_1; float x_2_1_2; } x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8; unsigned char x9; })compressStrokePoint:(struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1 withTimestamp:(double)arg2;
+ (struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })decompressStrokePoint:(struct PKCompressedStrokePoint { float x1; struct _PKPoint { float x_2_1_1; float x_2_1_2; } x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8; unsigned char x9; })arg1 withTimestamp:(double)arg2;

- (void).cxx_destruct;
- (double)_aspectRatio;
- (double)_edgeWidth;
- (long long)_estimationUpdateIndex;
- (bool)_hasEstimatedAzimuthAndAltitude;
- (bool)_hasEstimatedForce;
- (bool)_hasEstimatedLocation;
- (bool)_hasEstimatedVelocity;
- (double)_length;
- (double)_opacity;
- (double)_radius;
- (void)_setAspectRatio:(double)arg1;
- (void)_setEdgeWidth:(double)arg1;
- (void)_setEstimationUpdateIndex:(long long)arg1;
- (void)_setHasEstimatedAzimuthAndAltitude:(bool)arg1;
- (void)_setHasEstimatedForce:(bool)arg1;
- (void)_setHasEstimatedLocation:(bool)arg1;
- (void)_setHasEstimatedVelocity:(bool)arg1;
- (void)_setLength:(double)arg1;
- (void)_setOpacity:(double)arg1;
- (void)_setRadius:(double)arg1;
- (id)_stringFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void*)_strokePoint;
- (double)altitude;
- (double)azimuth;
- (void)dealloc;
- (id)description;
- (double)force;
- (id)init;
- (id)initWithStroke:(id)arg1 strokePoint:(void*)arg2 inflight:(bool)arg3;
- (struct CGPoint { double x1; double x2; })location;
- (void)setAltitude:(double)arg1;
- (void)setAzimuth:(double)arg1;
- (void)setForce:(double)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (double)velocity;

@end