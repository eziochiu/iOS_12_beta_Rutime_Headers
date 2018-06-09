/* made by EzioChiu.
 */

@protocol PUVideoTrimQueueControllerDelegate <NSObject>

@optional

- (void)controller:(PUVideoTrimQueueController *)arg1 didCancelTrimmingVideoSources:(NSArray *)arg2;
- (void)controller:(PUVideoTrimQueueController *)arg1 didFinishTrimmingVideoSources:(NSArray *)arg2;
- (void)controller:(PUVideoTrimQueueController *)arg1 didTrimVideoFromSource:(id)arg2;
- (void)controller:(PUVideoTrimQueueController *)arg1 willTrimVideoFromSource:(id)arg2;

@end
