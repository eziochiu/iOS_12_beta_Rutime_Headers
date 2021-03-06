/* made by EzioChiu.
 */

@protocol PLFaceRebuildDescription <NSObject>

@required

- (double)centerX;
- (double)centerY;
- (int)cloudNameSource;
- (bool)isClusterRejected;
- (bool)isHidden;
- (bool)isManual;
- (bool)isRepresentative;
- (int)nameSource;
- (double)size;

@end
