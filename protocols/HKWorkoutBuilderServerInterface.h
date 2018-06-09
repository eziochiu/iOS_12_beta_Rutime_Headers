/* made by EzioChiu.
 */

@protocol HKWorkoutBuilderServerInterface <NSObject>

@required

- (void)remote_addDataSourcesWithIdentifiers:(NSArray *)arg1;
- (void)remote_addMetadata:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_addSamples:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_addWorkoutEvents:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_beginCollectionWithStartDate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_discardWorkout;
- (void)remote_endCollectionWithEndDate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_finishWorkoutWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKWorkout *, NSError *, void*
- (void)remote_recoverWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_removeDataSourcesWithIdentifiers:(NSArray *)arg1;
- (void)remote_updateDevice:(HKDevice *)arg1;

@end
