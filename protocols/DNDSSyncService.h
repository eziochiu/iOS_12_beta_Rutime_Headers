/* made by EzioChiu.
 */

@protocol DNDSSyncService <NSObject>

@required

- (void)addUpdateListener:(id <DNDSSyncServiceUpdateListener>)arg1;
- (id)initWithRecordClass:(Class)arg1 versionNumber:(unsigned long long)arg2;
- (void)removeUpdateListener:(id <DNDSSyncServiceUpdateListener>)arg1;
- (void)resume;
- (void)sendRecordToRemotes:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: <DNDSSyncRecord> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
