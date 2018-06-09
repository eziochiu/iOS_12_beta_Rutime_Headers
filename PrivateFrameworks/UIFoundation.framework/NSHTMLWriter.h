/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSHTMLWriter : NSObject {
    NSAttributedString * _attrStr;
    NSMutableArray * _blockStyleStrings;
    NSMutableString * _bodyStr;
    NSMutableArray * _charStyleArrays;
    NSMutableOrderedSet * _charStyleStrings;
    unsigned long long  _characterEncoding;
    NSDictionary * _documentAttrs;
    unsigned int  _excludedElements1;
    unsigned int  _excludedElements2;
    NSFileWrapper * _fileWrapper;
    struct { 
        unsigned int interchangeNewline : 1; 
        unsigned int noDefaultFonts : 1; 
        unsigned int tabsToSpaces : 1; 
        unsigned int coalesceTabSpans : 1; 
        unsigned int usedTabSpan : 1; 
        unsigned int encodingIsUnicode : 1; 
        unsigned int pad : 26; 
    }  _flags;
    NSMutableDictionary * _fontDescriptions;
    NSMutableDictionary * _fontNames;
    NSMutableArray * _fontStrings;
    NSData * _htmlData;
    long long  _level;
    NSMutableIndexSet * _listItemStyleIndexes;
    NSMutableArray * _olistStyleStrings;
    NSURL * _outputBaseURL;
    NSMutableArray * _paraStyleArrays;
    NSMutableIndexSet * _paraStyleIndexes;
    NSMutableArray * _paraStyleStrings;
    long long  _prefixSpaces;
    id  _resourceHandler;
    NSMutableDictionary * _subresources;
    NSMutableArray * _tableCellStyleStrings;
    NSMutableArray * _tableStyleStrings;
    NSString * _textEncodingName;
    NSMutableArray * _ulistStyleStrings;
    NSData * _webArchiveData;
}

+ (id)fontNameForFont:(id)arg1;

- (id)HTMLData;
- (id)HTMLFileWrapper;
- (void)_appendAttachment:(id)arg1 atIndex:(unsigned long long)arg2 toString:(id)arg3;
- (unsigned long long)_blockClassForBlock:(id)arg1;
- (bool)_closeBlocksForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3;
- (void)_closeFlags:(unsigned long long)arg1 openFlags:(unsigned long long)arg2 inString:(id)arg3;
- (bool)_closeListsForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3;
- (void)_createWebArchiveData;
- (id)_defaultValueForAttribute:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_generateHTML;
- (bool)_isStrictByParsingExcludedElements;
- (unsigned long long)_listClassForList:(id)arg1;
- (void)_openBlocksForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3;
- (void)_openListsForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3 isStrict:(bool)arg4;
- (unsigned long long)_paragraphClassforParagraphStyle:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isEmpty:(bool)arg3 isCompletelyEmpty:(bool)arg4 headerString:(id*)arg5 alignmentString:(id*)arg6 directionString:(id*)arg7;
- (id)_prefix;
- (id)_prefixDown;
- (id)_prefixUp;
- (void)_prepareString:(id)arg1 forConversionToEncoding:(unsigned long long)arg2;
- (unsigned long long)_spanClassForAttributes:(id)arg1 inParagraphClass:(unsigned long long)arg2 spanClass:(unsigned long long)arg3 flags:(unsigned long long*)arg4;
- (Class)_webArchiveClass;
- (void)_writeDocumentPropertiesToString:(id)arg1;
- (void)_writeDocumentProperty:(id)arg1 value:(id)arg2 toString:(id)arg3;
- (void)dealloc;
- (id)documentFragmentForDocument:(id)arg1;
- (id)documentFragmentString;
- (id)initWithAttributedString:(id)arg1;
- (void)readDocumentFragment:(id)arg1;
- (void)setDocumentAttributes:(id)arg1;
- (id)subresources;
- (id)webArchive;
- (id)webArchiveData;

@end
