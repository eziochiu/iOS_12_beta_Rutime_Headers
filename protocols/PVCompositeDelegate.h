/* made by EzioChiu.
 */

@protocol PVCompositeDelegate

@required

- (PVImageBuffer *)renderWithInputs:(NSDictionary *)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 metadata:(NSObject *)arg3;

@end
