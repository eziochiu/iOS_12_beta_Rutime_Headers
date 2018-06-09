/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportExceptionRecorder : NSObject <PHImportExceptionRecorder> {
    NSMutableArray * _exceptions;
    bool  _hasTerminalException;
}

@property (nonatomic, readonly) NSMutableArray *criticalExceptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableArray *exceptions;
@property (nonatomic) bool hasTerminalException;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *terminalExceptions;

- (void).cxx_destruct;
- (void)addException:(id)arg1;
- (id)addExceptionWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char *)arg5 line:(unsigned long long)arg6;
- (void)addExceptions:(id)arg1;
- (id)criticalExceptions;
- (id)exceptions;
- (id)exceptionsOfImportance:(unsigned long long)arg1;
- (id)exceptionsWithMinimumImportance:(unsigned long long)arg1;
- (bool)hasTerminalException;
- (id)init;
- (void)logErrors:(unsigned long long)arg1;
- (id)logForExceptionsOfImportance:(unsigned long long)arg1;
- (id)logForExceptionsOfMinImportance:(unsigned long long)arg1;
- (void)setHasTerminalException:(bool)arg1;
- (id)terminalExceptions;

@end
