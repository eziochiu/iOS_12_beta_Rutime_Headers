/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleFormatter : NSObject <NSCopying> {
    bool  _anyUnread;
    id  _appToken;
    NSMutableArray * _chunkArray;
    NSMutableDictionary * _chunkDictionary;
    bool  _currentUnread;
    int  _displayMode;
    SCROBrailleChunk * _editingChunk;
    long long  _firstToken;
    unsigned long long  _generationID;
    int  _inputContractionMode;
    bool  _inputShowEightDot;
    long long  _lastToken;
    int  _lineFocus;
    long long  _lineOffset;
    int  _outputContractionMode;
    bool  _outputShowEightDot;
    bool  _showDotsSevenAndEight;
    NSAttributedString * _statusText;
    NSMapTable * _tokenMap;
}

@property (nonatomic) bool anyUnread;
@property (nonatomic, retain) id appToken;
@property (nonatomic, readonly) NSArray *chunkArray;
@property (nonatomic, readonly) NSDictionary *chunkDictionary;
@property (nonatomic) bool currentUnread;
@property (nonatomic) int displayMode;
@property (nonatomic, readonly) SCROBrailleChunk *editingChunk;
@property (nonatomic, readonly) long long firstToken;
@property (nonatomic, readonly) unsigned long long generationID;
@property (nonatomic, readonly) int inputContractionMode;
@property (nonatomic, readonly) bool inputShowEightDot;
@property (nonatomic, readonly) long long lastToken;
@property (nonatomic) int lineFocus;
@property (nonatomic) long long lineOffset;
@property (nonatomic, readonly) int outputContractionMode;
@property (nonatomic, readonly) bool outputShowEightDot;
@property (nonatomic, readonly) bool showDotsSevenAndEight;
@property (nonatomic, retain) NSAttributedString *statusText;

- (void).cxx_destruct;
- (void)addChunk:(id)arg1 forToken:(long long)arg2;
- (void)addText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 token:(long long)arg4 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5 isEditableText:(bool)arg6;
- (void)addText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 token:(long long)arg4 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5 technical:(bool)arg6 isEditableText:(bool)arg7;
- (void)addText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 token:(long long)arg5 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg6 technical:(bool)arg7 isEditableText:(bool)arg8;
- (void)addText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 token:(long long)arg5 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg6 technical:(bool)arg7 isEditableText:(bool)arg8 paddingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg9;
- (void)addText:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 token:(long long)arg3 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 isEditableText:(bool)arg5;
- (void)addText:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 token:(long long)arg3 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 technical:(bool)arg5 isEditableText:(bool)arg6;
- (bool)anyUnread;
- (id)appToken;
- (id)chunkArray;
- (id)chunkDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)currentUnread;
- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)displayMode;
- (id)editingChunk;
- (void)enumerateChunksOfText:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 focus:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 paddingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 usingBlock:(id /* block */)arg5;
- (long long)firstToken;
- (unsigned long long)generationID;
- (id)initWithOutputContractionMode:(int)arg1 inputContractionMode:(int)arg2 outputShowEightDot:(bool)arg3 inputShowEightDot:(bool)arg4 showDotsSevenAndEight:(bool)arg5;
- (int)inputContractionMode;
- (bool)inputShowEightDot;
- (long long)lastToken;
- (int)lineFocus;
- (long long)lineOffset;
- (int)outputContractionMode;
- (bool)outputShowEightDot;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfBrailleCellRepresentingCharacterAtIndex:(unsigned long long)arg1;
- (void)setAnyUnread:(bool)arg1;
- (void)setAppToken:(id)arg1;
- (void)setCurrentUnread:(bool)arg1;
- (void)setDisplayMode:(int)arg1;
- (void)setLineFocus:(int)arg1;
- (void)setLineOffset:(long long)arg1;
- (void)setStatusText:(id)arg1;
- (bool)showDotsSevenAndEight;
- (id)statusText;
- (void)translate;

@end
