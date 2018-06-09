/* made by EzioChiu.
 */

@protocol CAMStillImageCapturingVideoDelegate <NSObject>

@optional

- (void)didCompleteCapturingVideoForStillImageRequests;
- (void)startShowingLivePhotoIndicator;
- (void)stopShowingLivePhotoIndicator;
- (void)willStartCapturingVideoForStillImageRequests;

@end
