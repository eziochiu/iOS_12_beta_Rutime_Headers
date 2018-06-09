/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIMecabraIMLogger : NSObject {
    NSMutableString * _loggedMessage;
}

@property (nonatomic, retain) NSMutableString *loggedMessage;

+ (bool)isLoggingEnabled;

- (void).cxx_destruct;
- (void)beginLogging;
- (void)endLoggingForInput:(id)arg1 atFinalTimeMark:(unsigned long long)arg2;
- (id)logFilePath;
- (id)loggedMessage;
- (void)markTime:(unsigned long long)arg1;
- (void)setLoggedMessage:(id)arg1;
- (void)writeLogToFile;

@end
