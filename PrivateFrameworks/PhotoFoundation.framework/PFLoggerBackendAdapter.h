/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFLoggerBackendAdapter : NSObject <PFLoggerBackend> {
    unsigned long long  _pendingTransactionCount;
    bool  _runningUnderDebugger;
}

@property (nonatomic, readonly) bool allowsConcurrentAccess;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool formatsMessage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool outputsToDebuggerConsole;
@property bool runningUnderDebugger;
@property (readonly) Class superclass;

+ (long long)allFileSizeMaxBytesFromString:(id)arg1;
+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;
+ (long long)fileSizeMaxBytesFromString:(id)arg1;
+ (long long)parseByteSizeValueForKey:(id)arg1 inString:(id)arg2;
+ (id)pathWithoutParametersFromString:(id)arg1;

- (bool)allowsConcurrentAccess;
- (void)beginTransaction;
- (void)endTransaction;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (bool)formatsMessage;
- (id)init;
- (void)logFromCodeLocation:(struct { char *x1; char *x2; char *x3; char *x4; void *x5; })arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char *)arg7;
- (bool)outputsToDebuggerConsole;
- (bool)runningUnderDebugger;
- (void)setRunningUnderDebugger:(bool)arg1;

@end
