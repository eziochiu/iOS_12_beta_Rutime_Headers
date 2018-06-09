/* made by EzioChiu.
 */

@protocol HDSyncSessionDelegate <NSObject>

@required

- (void)syncSession:(HDSyncSession *)arg1 didFinishSuccessfully:(bool)arg2 error:(NSError *)arg3;
- (void)syncSession:(void *)arg1 sendChanges:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HDSyncSession *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)syncSessionWillBegin:(HDSyncSession *)arg1;

@optional

- (bool)syncSession:(HDSyncSession *)arg1 didEndTransactionWithError:(id*)arg2;

@end
