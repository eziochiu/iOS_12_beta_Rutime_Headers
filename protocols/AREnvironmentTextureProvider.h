/* made by EzioChiu.
 */

@protocol AREnvironmentTextureProvider

@required

- (void)environmentTextureWithTransform:(void *)arg1 extent:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (bool)isReady;

@end
