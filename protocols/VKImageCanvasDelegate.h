/* made by EzioChiu.
 */

@protocol VKImageCanvasDelegate

@required

- (void)imageCanvasDidBecomeFullyDrawn:(VKImageCanvas *)arg1 hasFailedTiles:(bool)arg2;
- (void)imageCanvasWillBecomeFullyDrawn:(VKImageCanvas *)arg1;

@end
