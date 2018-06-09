/* made by EzioChiu.
 */

@protocol PVLivePlayerDelegate

@required

- (PVRenderRequest *)buildRenderRequest:(NSDictionary *)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)renderRequestComplete:(PVRenderRequest *)arg1 results:(NSArray *)arg2 completedOutOfOrder:(bool)arg3;

@end
