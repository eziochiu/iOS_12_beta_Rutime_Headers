/* made by EzioChiu.
 */

@protocol BWFaceDetector <NSObject>

@required

- (int)getFaceRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 maxCount:(int)arg2 forPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (float)secondsSinceLastFaceDetected;

@end
