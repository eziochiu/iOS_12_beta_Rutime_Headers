/* made by EzioChiu.
 */

@protocol DNDSStateProvider <NSObject>

@required

- (void)addUpdateListener:(id <DNDSStateProviderUpdateListener>)arg1;
- (DNDSState *)currentStateWithError:(id*)arg1;
- (void)removeUpdateListener:(id <DNDSStateProviderUpdateListener>)arg1;

@end
