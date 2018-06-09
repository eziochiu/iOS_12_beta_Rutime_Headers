/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportException : NSObject {
    NSDate * _createDate;
    unsigned long long  _importance;
    unsigned long long  _lineNumber;
    NSString * _message;
    NSError * _nsError;
    NSString * _path;
    NSString * _sourceCodeFile;
}

@property (nonatomic, readonly) NSDate *createDate;
@property (nonatomic, readonly) unsigned long long importance;
@property (nonatomic, readonly) bool isTerminal;
@property (nonatomic, readonly) unsigned long long lineNumber;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSError *nsError;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *sourceCodeFile;

+ (id)exceptionWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char *)arg5 line:(unsigned long long)arg6;
+ (id)logForAllExceptions:(id)arg1;
+ (id)logForMostImportantException:(id)arg1;
+ (id)logForTerminalExceptionsForRecorder:(id)arg1;
+ (id)mostImportantException:(id)arg1;

- (void).cxx_destruct;
- (id)createDate;
- (id)description;
- (unsigned long long)importance;
- (id)initWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char *)arg5 line:(unsigned long long)arg6;
- (bool)isCritical;
- (bool)isTerminal;
- (unsigned long long)lineNumber;
- (id)logWithPrefix:(id)arg1;
- (id)message;
- (id)nsError;
- (id)path;
- (id)sourceCodeFile;

@end
