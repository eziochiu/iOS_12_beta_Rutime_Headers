/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPerfMetric : NSObject {
    NSDictionary * _dictionary;
    _CDPerfMetricFamily * _family;
    NSString * _name;
    NSString * _string;
}

@property (readonly) double averageElapsedTime;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long errorCount;
@property (readonly) _CDPerfMetricFamily *family;
@property (readonly) double lastElapsedTime;
@property (readonly) unsigned long long lastResultCount;
@property (readonly) NSDate *lastUpdate;
@property (readonly) double maximumElapsedTime;
@property (readonly) double minimumElapsedTime;
@property (readonly) NSString *name;
@property (readonly) NSString *string;

+ (id)perfMetricForFetchRequest:(id)arg1 type:(id)arg2;

- (void).cxx_destruct;
- (id)_histogramWithIndex:(unsigned long long)arg1;
- (id)_stringWithIndex:(unsigned long long)arg1;
- (unsigned long long)_unsignedIntegerCounterWithIndex:(unsigned long long)arg1;
- (double)averageElapsedTime;
- (unsigned long long)count;
- (id)elapsedTimeHistogram;
- (unsigned long long)errorCount;
- (id)family;
- (id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3 dictionary:(id)arg4;
- (double)lastElapsedTime;
- (unsigned long long)lastResultCount;
- (id)lastUpdate;
- (double)maximumElapsedTime;
- (double)minimumElapsedTime;
- (id)name;
- (id)string;

@end
