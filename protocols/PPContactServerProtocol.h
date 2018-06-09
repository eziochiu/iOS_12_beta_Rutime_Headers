/* made by EzioChiu.
 */

@protocol PPContactServerProtocol

@required

- (void)contactNameRecordChangesForClient:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PPContactNameRecordChangeResult *, NSError *, void*
- (void)contactNameRecordChangesForClient:(NSString *)arg1 queryId:(unsigned long long)arg2;
- (void)contactNameRecordsForClient:(NSString *)arg1 queryId:(unsigned long long)arg2;

@end
