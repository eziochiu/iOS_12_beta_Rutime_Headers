/* made by EzioChiu.
 */

@protocol _CDUserContext <_CDLocalContext>

@required

- (<_CDLocalContext> *)localContext;
- (NSArray *)valuesForKeyPaths:(NSArray *)arg1 inContextsMatchingPredicate:(_CDContextualPredicate *)arg2;

@end
