/* made by EzioChiu.
 */

@protocol MSPContainerEditReplacement <MSPContainerEdit>

@required

- (NSIndexSet *)indexesOfReplacedObjects;
- (NSArray *)originalImmutableObjects;
- (NSArray *)replacementImmutableObjects;

@end
