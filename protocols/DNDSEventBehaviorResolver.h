/* made by EzioChiu.
 */

@protocol DNDSEventBehaviorResolver <NSObject>

@required

- (DNDClientEventBehavior *)resolveBehaviorForEventDetails:(DNDClientEventDetails *)arg1 error:(id*)arg2;

@end
