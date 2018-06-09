/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUpdateLogger : NSObject {
    NSString * _clientDescription;
    bool  _didReachSoftTimeout;
    NSObject<OS_os_activity> * _loggerActivity;
    double  _softTimeoutInterval;
    NSTimer * _softTimeoutTimer;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSString *clientDescription;
@property (nonatomic) bool didReachSoftTimeout;
@property (nonatomic, retain) NSObject<OS_os_activity> *loggerActivity;
@property (nonatomic) double softTimeoutInterval;
@property (nonatomic, retain) NSTimer *softTimeoutTimer;
@property (nonatomic, retain) NSDate *startDate;

+ (id)history;
+ (id)runningLoggers;

- (void).cxx_destruct;
- (void)_handleTimeout:(id)arg1;
- (id)clientDescription;
- (id)description;
- (bool)didReachSoftTimeout;
- (void)finish;
- (id)initWithTimeout:(double)arg1 description:(id)arg2;
- (id)loggerActivity;
- (void)setClientDescription:(id)arg1;
- (void)setDidReachSoftTimeout:(bool)arg1;
- (void)setLoggerActivity:(id)arg1;
- (void)setSoftTimeoutInterval:(double)arg1;
- (void)setSoftTimeoutTimer:(id)arg1;
- (void)setStartDate:(id)arg1;
- (double)softTimeoutInterval;
- (id)softTimeoutTimer;
- (id)startDate;

@end
