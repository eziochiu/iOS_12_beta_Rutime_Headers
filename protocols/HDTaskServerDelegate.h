/* made by EzioChiu.
 */

@protocol HDTaskServerDelegate <NSObject>

@required

- (void)addObserver:(id <HDTaskServerObserver>)arg1 forTaskServerUUID:(NSUUID *)arg2;
- (void)removeObserver:(id <HDTaskServerObserver>)arg1 forTaskServerUUID:(NSUUID *)arg2;
- (void)removeTaskServerObserver:(id <HDTaskServerObserver>)arg1;
- (void)taskServerDidFinishInitialization:(id <HDTaskServer>)arg1;
- (void)taskServerDidInvalidate:(id <HDTaskServer>)arg1;
- (<HDTaskServer> *)taskServerWithUUID:(NSUUID *)arg1;

@optional

- (<HDSampleSaving> *)sampleSavingDelegate;

@end
