/* made by EzioChiu.
 */

@protocol TSDCanvasZoomTrackerDelegate <NSObject>

@required

- (void)canvasZoomTracker:(TSDCanvasZoomTracker *)arg1 willBeginViewScaleFeedbackWithFastPinch:(bool)arg2;
- (void)canvasZoomTracker:(TSDCanvasZoomTracker *)arg1 willUpdateViewScaleFeedbackWithScale:(double)arg2;
- (void)canvasZoomTrackerDidEndFinalZoomAnimation:(TSDCanvasZoomTracker *)arg1;
- (void)canvasZoomTrackerDidEndViewScaleFeedback:(TSDCanvasZoomTracker *)arg1;
- (void)canvasZoomTrackerDidFinish:(TSDCanvasZoomTracker *)arg1;
- (void)canvasZoomTrackerWillBeginFinalZoomAnimation:(TSDCanvasZoomTracker *)arg1;

@end
