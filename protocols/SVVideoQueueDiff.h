/* made by EzioChiu.
 */

@protocol SVVideoQueueDiff <NSObject>

@required

- (NSOrderedSet *)videosToInsert;
- (NSOrderedSet *)videosToRemove;

@end
