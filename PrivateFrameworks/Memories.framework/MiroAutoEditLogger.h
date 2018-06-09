/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoEditLogger : NSObject {
    long long  _disableLoggingCount;
    NSRegularExpression * _framesRegex;
    long long  _indentationLevel;
    NSMutableString * _log;
    long long  _loggingLevel;
    bool  _logsToConsole;
}

@property (nonatomic) long long disableLoggingCount;
@property (nonatomic, retain) NSRegularExpression *framesRegex;
@property (nonatomic) long long indentationLevel;
@property (nonatomic, retain) NSMutableString *log;
@property (nonatomic) long long loggingLevel;
@property (nonatomic) bool logsToConsole;

- (void).cxx_destruct;
- (void)commit;
- (void)decrementIndentationLevel;
- (void)disableLogging;
- (long long)disableLoggingCount;
- (void)enableLogging;
- (id)framesRegex;
- (void)incrementIndentationLevel;
- (long long)indentationLevel;
- (id)init;
- (id)log;
- (void)logAndDescribeFrameCounts:(bool)arg1 level:(long long)arg2 formatString:(id)arg3;
- (long long)loggingLevel;
- (bool)logsToConsole;
- (void)setDisableLoggingCount:(long long)arg1;
- (void)setFramesRegex:(id)arg1;
- (void)setIndentationLevel:(long long)arg1;
- (void)setLog:(id)arg1;
- (void)setLoggingLevel:(long long)arg1;
- (void)setLogsToConsole:(bool)arg1;

@end
