/* made by EzioChiu.
 */

@protocol SVInteractionObserving <NSObject>

@required

- (void)didHandleInteractionWithContext:(id <SVInteractionContext>)arg1;
- (void)willHandleInteractionWithContext:(id <SVInteractionContext>)arg1;

@end
