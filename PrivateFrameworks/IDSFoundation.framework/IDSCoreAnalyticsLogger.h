/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSCoreAnalyticsLogger : NSObject <CUTMetricLogger> {
    NSString * _domain;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultLogger;

- (void).cxx_destruct;
- (id)domain;
- (id)initWithDomain:(id)arg1;
- (void)logMetric:(id)arg1;

@end
