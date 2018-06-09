/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseResult : NSObject {
    NSDictionary * _columnNameIndexMap;
    unsigned long long  _limitIndex;
    NSString * _limitProperty;
    long long  _limitValue;
    ML3DatabaseStatement * _statement;
}

@property (nonatomic, copy) NSString *limitProperty;
@property (nonatomic) long long limitValue;

- (void).cxx_destruct;
- (id)_statement;
- (id)columnNameIndexMap;
- (void)enumerateRowsWithBlock:(id /* block */)arg1;
- (bool)hasAtLeastOneRow;
- (unsigned long long)indexForColumnName:(id)arg1;
- (id)init;
- (id)initWithStatement:(id)arg1;
- (long long)int64ValueForFirstRowAndColumn;
- (id)limitProperty;
- (long long)limitValue;
- (id)objectForFirstRowAndColumn;
- (id)objectsInColumn:(unsigned long long)arg1;
- (id)rows;
- (void)setLimitProperty:(id)arg1;
- (void)setLimitProperty:(id)arg1 limitValue:(long long)arg2;
- (void)setLimitValue:(long long)arg1;
- (id)stringValueForFirstRowAndColumn;

@end
