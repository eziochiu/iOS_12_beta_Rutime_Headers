/* made by EzioChiu.
 */

@protocol CCUIGroupRendering <NSObject>

@required

- (bool)isGroupRenderingRequired;
- (CALayer *)punchOutRootLayer;

@end
