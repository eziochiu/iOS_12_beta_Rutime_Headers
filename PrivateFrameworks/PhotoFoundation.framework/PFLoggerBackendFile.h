/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFLoggerBackendFile : PFLoggerBackendAdapter {
    NSDateFormatter * _dateFormatter;
    NSFileHandle * _fileHandle;
    bool  _isStandardErrorFileBackend;
    NSData * _lineTerminator;
    bool  _shouldCloseFileHandle;
}

@property (retain) NSFileHandle *fileHandle;
@property bool isStandardErrorFileBackend;
@property (retain) NSData *lineTerminator;
@property bool shouldCloseFileHandle;

+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;
+ (id)standardErrorFileBackend;

- (void).cxx_destruct;
- (void)dealloc;
- (id)fileHandle;
- (id)initWithFileHandle:(id)arg1;
- (id)initWithLogFileURL:(id)arg1;
- (bool)isStandardErrorFileBackend;
- (id)lineTerminator;
- (void)logFromCodeLocation:(struct { char *x1; char *x2; char *x3; char *x4; void *x5; })arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char *)arg7;
- (bool)outputsToDebuggerConsole;
- (void)setFileHandle:(id)arg1;
- (void)setIsStandardErrorFileBackend:(bool)arg1;
- (void)setLineTerminator:(id)arg1;
- (void)setShouldCloseFileHandle:(bool)arg1;
- (bool)shouldCloseFileHandle;
- (id)writeOpenFileAtURL:(id)arg1;

@end
