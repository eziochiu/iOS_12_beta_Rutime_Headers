/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

@interface SPZKWSearchQuery : SPQueryTask {
    NSArray * _mutableSections;
    unsigned long long  _queryID;
}

@property unsigned long long queryID;

+ (void)initialize;

- (void).cxx_destruct;
- (void)addApplicationResultsFromPredictionResponse:(id)arg1 toSection:(id)arg2 queryIdent:(unsigned long long)arg3;
- (unsigned long long)queryID;
- (void)setQueryID:(unsigned long long)arg1;
- (void)start;
- (id)unsafeSections;
- (id)unsafeSessionEntityString;

@end
