/* made by EzioChiu.
 */

@protocol EKBidirectionallyIterable <NSObject>

@required

- (id)next;
- (id)previous;

@end
