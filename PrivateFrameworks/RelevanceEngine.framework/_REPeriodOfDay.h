/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REPeriodOfDay : NSObject {
    NSDateInterval * _interval;
    unsigned long long  _periodOfDay;
}

@property (nonatomic, readonly) NSDateInterval *interval;
@property (nonatomic, readonly) unsigned long long periodOfDay;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithInterval:(id)arg1 periodOfDay:(unsigned long long)arg2;
- (id)interval;
- (bool)isEqual:(id)arg1;
- (unsigned long long)periodOfDay;

@end
