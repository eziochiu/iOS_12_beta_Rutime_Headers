/* made by EzioChiu.
 */

@protocol RMReconcilableObject

@required

+ (bool)reconcileWithManagedObjectContext:(NSManagedObjectContext *)arg1 andUpdateLosers:(NSMutableArray *)arg2 error:(id*)arg3;

@end
