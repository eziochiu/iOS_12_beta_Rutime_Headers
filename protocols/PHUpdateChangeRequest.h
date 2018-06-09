/* made by EzioChiu.
 */

@protocol PHUpdateChangeRequest <PHChangeRequest>

@required

- (bool)allowMutationToManagedObject:(NSManagedObject *)arg1 propertyKey:(NSString *)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(NSManagedObject *)arg1 error:(id*)arg2;
- (PHChangeRequestHelper *)helper;
- (bool)isMutated;
- (bool)validateMutationsToManagedObject:(NSManagedObject *)arg1 error:(id*)arg2;

@end
