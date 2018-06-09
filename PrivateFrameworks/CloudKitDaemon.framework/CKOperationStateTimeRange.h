/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange> {
    double  _duration;
    unsigned long long  _operationState;
    NSDate * _startDate;
}

@property (readonly) double absoluteStart;
@property (readonly) double absoluteStop;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double duration;
@property (readonly) double executing;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long operationState;
@property (readonly) double queueing;
@property (readonly) double relativeStart;
@property (retain) NSDate *startDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (double)absoluteStart;
- (double)absoluteStop;
- (long long)compareStartTime:(id)arg1;
- (long long)compareStopTime:(id)arg1;
- (id)description;
- (double)duration;
- (double)executing;
- (id)initWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
- (unsigned long long)operationState;
- (double)queueing;
- (double)relativeStart;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
