/* made by EzioChiu.
 */

@protocol SVInteractionManager <NSObject>

@required

- (void)registerInteraction:(id <SVInteraction>)arg1 withInteractionHandler:(id <SVInteractionHandling>)arg2;
- (void)registerInteraction:(id <SVInteraction>)arg1 withInteractionHandlerFactory:(id <SVVideoInteractionHandlerFactory>)arg2;
- (void)registerInteraction:(id <SVInteraction>)arg1 withInteractionObserver:(id <SVInteractionObserving>)arg2;
- (void)registerInteraction:(id <SVInteraction>)arg1 withInteractionObserverFactory:(id <SVVideoInteractionObserverFactory>)arg2;

@end
