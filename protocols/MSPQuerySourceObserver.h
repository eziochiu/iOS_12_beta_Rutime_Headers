/* made by EzioChiu.
 */

@protocol MSPQuerySourceObserver <NSObject>

@required

- (void)_didChangeSourceWithNewState:(_MSPQueryState *)arg1 context:(id <NSObject><NSCopying>)arg2 inContainer:(MSPContainer *)arg3;

@end
