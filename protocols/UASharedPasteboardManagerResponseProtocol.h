/* made by EzioChiu.
 */

@protocol UASharedPasteboardManagerResponseProtocol <NSObject>

@required

- (void)tellClientDebuggingEnabled:(bool)arg1 logFileHandle:(NSFileHandle *)arg2;
- (void)writeLocalPasteboardToFile:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSFileHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UASharedPasteboardInfo *, NSError *, void*

@end
