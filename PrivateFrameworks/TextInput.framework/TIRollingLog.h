/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIRollingLog : NSObject <NSCopying> {
    unsigned long long  _count;
    NSMutableArray * _entries;
    unsigned long long  _maxCount;
    unsigned long long  _nextIndex;
}

@property (nonatomic, readonly) NSArray *currentEntries;

- (void).cxx_destruct;
- (void)addEntries:(id)arg1;
- (void)addEntry:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentEntries;
- (id)initWithMaxCount:(unsigned long long)arg1;

@end
