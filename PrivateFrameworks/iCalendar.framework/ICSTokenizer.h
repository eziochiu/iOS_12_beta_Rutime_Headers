/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTokenizer : NSObject {
    int  _cursor;
    NSData * _data;
    const char * _datastring;
    int  _expectedNextTokenType;
    int  _length;
    int  _logCount;
    bool  _printedICS;
    char * _token;
    int  _tokenType;
}

@property int logCount;
@property bool printedICS;

- (void).cxx_destruct;
- (bool)consumeEOL;
- (bool)consumeEscaped:(const char *)arg1;
- (bool)consumeFolding;
- (void)consumeParamName;
- (void)consumeParamValue;
- (void)consumePropName;
- (void)consumePropValue;
- (void)consumeWhiteSpace;
- (char *)currentToken;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithData:(id)arg1;
- (int)logCount;
- (char *)nextToken;
- (bool)printedICS;
- (void)setLogCount:(int)arg1;
- (void)setPrintedICS:(bool)arg1;
- (int)tokenType;

@end
