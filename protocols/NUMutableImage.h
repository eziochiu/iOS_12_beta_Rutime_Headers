/* made by EzioChiu.
 */

@protocol NUMutableImage <NUImage>

@required

- (bool)copyBufferStorage:(id <NUImageStorage>)arg1 fromRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toPoint:(struct { long long x1; long long x2; })arg3;
- (bool)copySurfaceStorage:(id <NUSurfaceStorage>)arg1 fromRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toPoint:(struct { long long x1; long long x2; })arg3 device:(id <NUDevice>)arg4;

@end
