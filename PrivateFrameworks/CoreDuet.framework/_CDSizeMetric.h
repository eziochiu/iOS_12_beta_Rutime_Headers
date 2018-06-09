/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSizeMetric : NSObject {
    NSDictionary * _dictionary;
    _CDSizeMetricFamily * _family;
    NSString * _name;
    NSString * _string;
}

@property (readonly) double averageSize;
@property (readonly) unsigned long long count;
@property (readonly) _CDSizeMetricFamily *family;
@property (readonly) unsigned long long firstSize;
@property (readonly) NSDate *firstUpdate;
@property (readonly) unsigned long long lastSize;
@property (readonly) NSDate *lastUpdate;
@property (readonly) unsigned long long maximumSize;
@property (readonly) unsigned long long minimumSize;
@property (readonly) NSString *name;
@property (readonly) NSString *string;

- (void).cxx_destruct;
- (id)_dateFromCounter:(unsigned long long)arg1;
- (id)_histogramWithIndex:(unsigned long long)arg1;
- (id)_stringWithIndex:(unsigned long long)arg1;
- (unsigned long long)_uint64CounterWithIndex:(unsigned long long)arg1;
- (double)averageSize;
- (unsigned long long)count;
- (id)family;
- (unsigned long long)firstSize;
- (id)firstUpdate;
- (id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3 dictionary:(id)arg4;
- (unsigned long long)lastSize;
- (id)lastUpdate;
- (unsigned long long)maximumSize;
- (unsigned long long)minimumSize;
- (id)name;
- (id)sizeHistogram;
- (id)string;

@end
