/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTypesetterTextSource : NSObject <TSWPTextSource> {
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _bidiCharIndexes;
    struct vector<bool, std::__1::allocator<bool> > { 
        unsigned long long *__begin_; 
        unsigned long long __size_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { 
            unsigned long long __value_; 
        } __cap_alloc_; 
    }  _bidiDirectionMarkIsRTLVector;
    unsigned long long  _length;
    TSWPRangeMap * _rangeMap;
    <TSWPTextSource> * _source;
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _spaceCharIndexes;
    unsigned long long  _storageChangeCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)adjustRangesByDelta:(long long)arg1 startingAt:(unsigned long long)arg2;
- (id)attachmentAtCharIndex:(unsigned long long)arg1;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
- (void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(bool)arg2 attributesTable:(/* Warning: unhandled array encoding: '[21@]' */ id)arg3 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (unsigned long long)bidiCharIndexCount;
- (unsigned long long)changeCount;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })charRangeMappedFromStorage:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })charRangeMappedToStorage:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })charRangeRemappedFromStorage:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (unsigned int)composedCharacterAtCharIndex:(unsigned long long)arg1 isSurrogatePair:(bool*)arg2;
- (id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
- (bool)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 locale:(id)arg3 hyphenChar:(unsigned int*)arg4;
- (id)initWithSource:(id)arg1 subRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(int)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(int)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)smartFieldsWithAttributeKind:(int)arg1 intersectingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)spaceCharIndexCount;
- (unsigned long long)storageLength;
- (id)string;
- (void)updateStorageChangeCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(bool)arg2;

@end
