/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAActivityLog : NSObject {
    double  _absoluteEndTime;
    double  _absoluteStartTime;
    double  _duration;
    NSDate * _startDate;
    unsigned long long  _status;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) unsigned long long status;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (id)init;
- (void)markProcessingStopped:(unsigned long long)arg1;
- (id)startDate;
- (unsigned long long)status;

@end
