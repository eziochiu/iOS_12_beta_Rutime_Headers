/* made by EzioChiu.
 */

@protocol UIDragInteraction <UIInteraction>

@required

- (<UIDragInteractionEffect> *)interactionEffect;
- (void)setInteractionEffect:(id <UIDragInteractionEffect>)arg1;

@end
