/* made by EzioChiu.
 */

@protocol DNDSModeAssertionProviderObserver <NSObject>

@optional

- (void)modeAssertionProvider:(id <DNDSModeAssertionProvider>)arg1 didPerformInvalidations:(NSArray *)arg2;
- (void)modeAssertionProvider:(id <DNDSModeAssertionProvider>)arg1 didTakeAssertions:(NSArray *)arg2;

@end
