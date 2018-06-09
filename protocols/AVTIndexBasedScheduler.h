/* made by EzioChiu.
 */

@protocol AVTIndexBasedScheduler <NSObject>

@required

- (void)cancelAllTasks;
- (void)cancelTask:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)scheduleTask:(void *)arg1 forIndex:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*, unsigned long long
- (void)taskReadyForIndex:(unsigned long long)arg1;

@end
