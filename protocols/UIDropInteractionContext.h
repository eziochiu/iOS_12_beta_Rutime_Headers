/* made by EzioChiu.
 */

@protocol UIDropInteractionContext <UIInteractionContext>

@required

- (NSArray *)items;
- (long long)state;

@end
