/* made by EzioChiu.
 */

@protocol DNDSObservableModeAssertionProvider <DNDSModeAssertionProvider>

@required

- (void)addObserver:(id <DNDSModeAssertionProviderObserver>)arg1;
- (void)removeObserver:(id <DNDSModeAssertionProviderObserver>)arg1;

@end
