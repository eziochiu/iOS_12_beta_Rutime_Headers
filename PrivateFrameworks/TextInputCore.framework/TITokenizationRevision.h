/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TITokenizationRevision : NSObject {
    NSMutableArray * _branchTokens;
    unsigned long long  _branchedTokenIndex;
    unsigned long long  _mergedTokenIndex;
    struct _TIRevisionHistoryTokenIterator { 
        unsigned long long tokenIndex; 
        unsigned long long documentLocation; 
    }  _originalIterator;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _originalSelectedTokenRange;
    unsigned long long  _revisedDocumentLocation;
}

@property (nonatomic, readonly) NSMutableArray *branchTokens;
@property (nonatomic) unsigned long long branchedTokenIndex;
@property (nonatomic) unsigned long long mergedTokenIndex;
@property (nonatomic) struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; } originalIterator;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } originalSelectedTokenRange;
@property (nonatomic) unsigned long long revisedDocumentLocation;

- (void).cxx_destruct;
- (id)branchTokens;
- (unsigned long long)branchedTokenIndex;
- (id)init;
- (id)initWithTokenIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)mergedTokenIndex;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })originalIterator;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })originalSelectedTokenRange;
- (unsigned long long)revisedDocumentLocation;
- (void)setBranchedTokenIndex:(unsigned long long)arg1;
- (void)setMergedTokenIndex:(unsigned long long)arg1;
- (void)setOriginalIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setOriginalSelectedTokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRevisedDocumentLocation:(unsigned long long)arg1;

@end
