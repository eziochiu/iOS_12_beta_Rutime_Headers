/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFAggregateDictionary : NSObject {
    NSString * _domain;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _requestFailures;
    unsigned long long  _requestSuccesses;
}

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long requestFailures;
@property (nonatomic) unsigned long long requestSuccesses;

+ (id)defaultAggregateDictionary;

- (void).cxx_destruct;
- (void)_queue_addValueForScalarKey:(id)arg1 value:(long long)arg2;
- (void)_queue_pushValue:(double)arg1 forKey:(id)arg2;
- (id)domain;
- (id)init;
- (void)logLocationAccuracy:(double)arg1;
- (void)logRequestFailure;
- (void)logRequestSuccess;
- (id)queue;
- (unsigned long long)requestFailures;
- (unsigned long long)requestSuccesses;
- (void)setDomain:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequestFailures:(unsigned long long)arg1;
- (void)setRequestSuccesses:(unsigned long long)arg1;

@end