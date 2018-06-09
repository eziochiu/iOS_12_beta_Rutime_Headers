/* made by EzioChiu.
 */

@protocol PHImportExceptionRecorder <NSObject>

@required

- (void)addException:(PHImportException *)arg1;
- (PHImportException *)addExceptionWithMessage:(NSString *)arg1 path:(NSString *)arg2 importance:(unsigned long long)arg3 nsError:(NSError *)arg4 file:(char *)arg5 line:(unsigned long long)arg6;
- (void)addExceptions:(NSArray *)arg1;
- (NSMutableArray *)criticalExceptions;
- (NSMutableArray *)exceptions;
- (NSArray *)exceptionsOfImportance:(unsigned long long)arg1;
- (NSArray *)exceptionsWithMinimumImportance:(unsigned long long)arg1;
- (bool)hasTerminalException;
- (NSString *)logForExceptionsOfImportance:(unsigned long long)arg1;
- (NSString *)logForExceptionsOfMinImportance:(unsigned long long)arg1;
- (void)setHasTerminalException:(bool)arg1;
- (NSMutableArray *)terminalExceptions;

@end
