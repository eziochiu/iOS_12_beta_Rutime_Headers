/* made by EzioChiu.
 */

@protocol SOSServerProtocol <NSObject>

@required

- (void)isSendingLocationUpdate:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)mostRecentLocationSentWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLLocation *, void*
- (void)startSendingLocationUpdateForReason:(void *)arg1 WithCompletion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, id*
- (void)startSendingLocationUpdateWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, id*
- (void)stopSendingLocationUpdate;
- (void)willStartSendingLocationUpdate;

@end
