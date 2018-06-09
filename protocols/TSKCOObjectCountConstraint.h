/* made by EzioChiu.
 */

@protocol TSKCOObjectCountConstraint <NSObject, TSKCOOperation>

@required

- (int)objectCount;
- (int)objectCounterSpace;
- (<TSKCOObjectCountConstraint> *)operationWithNewObjectCount:(int)arg1;

@end
