/* made by EzioChiu.
 */

@protocol CADPredicateValidator <NSObject>

@required

+ (bool)evaluatePredicate:(NSPredicate *)arg1 withObject:(id)arg2;

@end
