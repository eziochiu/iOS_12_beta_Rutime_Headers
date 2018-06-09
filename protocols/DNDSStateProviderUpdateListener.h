/* made by EzioChiu.
 */

@protocol DNDSStateProviderUpdateListener <NSObject>

@required

- (void)stateProvider:(id <DNDSStateProvider>)arg1 didUpdateDoNotDisturbState:(DNDStateUpdate *)arg2;

@end
