/* made by EzioChiu.
 */

@protocol UIDragInteractionEffect <UIInteractionEffect>

@required

- (void)interaction:(UIDragInteraction *)arg1 didChangeWithContext:(id <UIDragInteractionContext>)arg2;

@end
