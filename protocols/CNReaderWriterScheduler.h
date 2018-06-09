/* made by EzioChiu.
 */

@protocol CNReaderWriterScheduler <NSObject>

@required

- (<CNCancelable> *)performReaderBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CNCancelationToken *, void*
- (void)performSynchronousReaderBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performSynchronousWriterBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<CNCancelable> *)performWriterBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CNCancelationToken *, void*
- (void)resume;
- (void)suspend;

@end
