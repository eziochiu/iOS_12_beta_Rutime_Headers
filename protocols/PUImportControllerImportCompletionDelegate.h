/* made by EzioChiu.
 */

@protocol PUImportControllerImportCompletionDelegate <NSObject>

@required

- (void)importController:(void *)arg1 didCompleteImportWithImportSession:(void *)arg2 results:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: PUImportController *, PUImportSessionInfo *, PHImportResults *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
