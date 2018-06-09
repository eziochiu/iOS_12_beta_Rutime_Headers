/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPinyinString : NSString {
    unsigned long long  _deletionCount;
    unsigned long long  _firstModificationIndex;
    unsigned long long  _insertionCount;
    bool  _lastSyllableIsPartial;
    unsigned long long  _rangeCount;
    struct _NSRange { unsigned long long x1; unsigned long long x2; } * _ranges;
    unsigned long long  _replacementCount;
    unsigned long long  _score;
    NSString * _string;
    unsigned long long  _syllableCount;
    unsigned long long  _transpositionCount;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)alternativesForInputString:(id)arg1;
+ (id)prefixesForInputString:(id)arg1;

- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexOfFirstModification;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(bool)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 indexOfFirstModification:(unsigned long long)arg9 rangeCount:(unsigned long long)arg10 ranges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg11;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(bool)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 rangeCount:(unsigned long long)arg9 ranges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg10;
- (bool)isEqual:(id)arg1;
- (bool)lastSyllableIsPartial;
- (unsigned long long)length;
- (id)nonPinyinIndexSet;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nonPinyinRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfDeletions;
- (unsigned long long)numberOfInsertions;
- (unsigned long long)numberOfNonPinyinRanges;
- (unsigned long long)numberOfReplacements;
- (unsigned long long)numberOfTranspositions;
- (unsigned long long)score;
- (id)string;
- (unsigned long long)syllableCount;

// Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader

+ (id)_alternativesForInputString:(id)arg1;
+ (id)_correctionsForInputString:(id)arg1;
+ (id)_prefixesForInputString:(id)arg1;

@end
