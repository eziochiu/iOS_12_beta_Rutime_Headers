/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCTermDumper : BRCDumper {
    int  _curAttrs;
    int  _curBg;
    int  _curFg;
    int  _fd;
    bool  _isatty;
    bool  _supportsEscapeSequences;
    unsigned long long  _termWidth;
    bool  _useColor;
    unsigned long long  _usedTermWidth;
}

@property (nonatomic, readonly) bool isatty;
@property (nonatomic, readonly) bool supportsEscapeSequences;
@property (nonatomic, readonly) bool useColor;

+ (void)execPagerOnFileFd:(int)arg1;
+ (void)setupPagerForFd:(int)arg1;

- (void)_putsAndCrop:(const char *)arg1 len:(unsigned long long)arg2;
- (unsigned long long)_startInCString:(BOOL)arg1 fgColor:(int)arg2 bgColor:(int)arg3 attr:(int)arg4;
- (void)cursorDown:(unsigned int)arg1;
- (void)cursorGotoLineStart;
- (void)cursorLeft:(unsigned int)arg1;
- (void)cursorRestore;
- (void)cursorRight:(unsigned int)arg1;
- (void)cursorSave;
- (void)cursorUp:(unsigned int)arg1;
- (void)endLine;
- (void)eraseEndOfLine;
- (void)eraseLine;
- (void)eraseScreenDown;
- (void)eraseScreenUp;
- (void)eraseStartOfLine;
- (void)forgetRemainingSpace;
- (id)initWithFd:(int)arg1 forceColor:(bool)arg2;
- (bool)isatty;
- (void)put:(id)arg1;
- (void)puts:(const char *)arg1;
- (void)puts:(const char *)arg1 len:(unsigned long long)arg2;
- (unsigned long long)remainingSpace;
- (void)reset;
- (void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (void)startNewLine;
- (void)startPager;
- (id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (id)stringForReset;
- (bool)supportsEscapeSequences;
- (bool)useColor;
- (void)write:(const char *)arg1;

@end
