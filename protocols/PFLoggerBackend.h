/* made by EzioChiu.
 */

@protocol PFLoggerBackend <NSObject>

@required

- (bool)allowsConcurrentAccess;
- (void)flushWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)formatsMessage;
- (void)logFromCodeLocation:(struct { char *x1; char *x2; char *x3; char *x4; void *x5; })arg1 facility:(NSString *)arg2 subsystem:(NSString *)arg3 level:(int)arg4 message:(NSString *)arg5 format:(NSString *)arg6 args:(char *)arg7;
- (bool)outputsToDebuggerConsole;

@end
