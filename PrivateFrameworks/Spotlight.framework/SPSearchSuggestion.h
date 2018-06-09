/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

@interface SPSearchSuggestion : SFSearchSuggestion {
    double  _age;
    int  _completionType;
    double  _compositeScore;
    float  _fieldWeight;
    unsigned long long  _fragments;
    bool  _hasUsedDate;
    bool  _isShortcut;
    bool  _isSingleThread;
    unsigned long long  _len;
    unsigned long long  _maxscore;
    int  _parentWeight;
    double  _phraseScore;
    int  _prefixLen;
    int  _rootWeight;
    int  _weight;
}

@property double age;
@property int completionType;
@property double compositeScore;
@property float fieldWeight;
@property unsigned long long fragments;
@property bool hasUsedDate;
@property bool isShortcut;
@property bool isSingleThread;
@property unsigned long long len;
@property unsigned long long maxscore;
@property int parentWeight;
@property double phraseScore;
@property int prefixLen;
@property int rootWeight;
@property int weight;

- (double)age;
- (Class)classForKeyedArchiver;
- (long long)compare:(id)arg1;
- (int)completionType;
- (double)compositeScore;
- (id)description;
- (float)fieldWeight;
- (unsigned long long)fragments;
- (bool)hasUsedDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isShortcut;
- (bool)isSingleThread;
- (unsigned long long)len;
- (unsigned long long)maxscore;
- (int)parentWeight;
- (double)phraseScore;
- (int)prefixLen;
- (int)rootWeight;
- (id)searchEntities;
- (void)setAge:(double)arg1;
- (void)setCompletionType:(int)arg1;
- (void)setCompositeScore:(double)arg1;
- (void)setFieldWeight:(float)arg1;
- (void)setFragments:(unsigned long long)arg1;
- (void)setHasUsedDate:(bool)arg1;
- (void)setIsShortcut:(bool)arg1;
- (void)setIsSingleThread:(bool)arg1;
- (void)setLen:(unsigned long long)arg1;
- (void)setMaxscore:(unsigned long long)arg1;
- (void)setParentWeight:(int)arg1;
- (void)setPhraseScore:(double)arg1;
- (void)setPrefixLen:(int)arg1;
- (void)setRootWeight:(int)arg1;
- (void)setWeight:(int)arg1;
- (id)suggestionsFeedbackData;
- (int)weight;

@end
