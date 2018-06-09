/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NetworkServiceProxyStats : NSObject <NSSecureCoding> {
    NSDictionary * _connectionStatsDict;
    NSDictionary * _controlStatsDicts;
    NSDate * _lastReportDate;
    double  _reportInterval;
    NSObject<OS_dispatch_source> * _reportTimer;
    NSDictionary * _requestStatsDicts;
    NSObject<OS_dispatch_queue> * _submitQueue;
    long long  _version;
}

@property (retain) NSDictionary *connectionStatsDict;
@property (retain) NSDictionary *controlStatsDicts;
@property (retain) NSDate *lastReportDate;
@property double reportInterval;
@property (retain) NSObject<OS_dispatch_source> *reportTimer;
@property (retain) NSDictionary *requestStatsDicts;
@property (retain) NSObject<OS_dispatch_queue> *submitQueue;
@property long long version;

+ (id)createStatistics;
+ (id)getInterfaceName:(long long)arg1;
+ (id)getProtocolName:(long long)arg1;
+ (id)getRequestName:(int)arg1;
+ (id)readFromKeyChain;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addConnectionStats:(id)arg1;
- (void)addControlStats:(id)arg1;
- (void)addRequestStats:(id)arg1;
- (void)clear;
- (id)connectionStatsDict;
- (id)controlStatsDicts;
- (id)copyDictionary:(long long)arg1 protocolType:(long long)arg2 summaryOnly:(bool)arg3;
- (id)copyDurationBucketsDictionary:(id)arg1;
- (id)copyResponseTimeBucketsDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getAWDServerConnection;
- (id)initEmpty;
- (id)initWithCoder:(id)arg1;
- (id)lastReportDate;
- (double)reportInterval;
- (void)reportNow:(bool)arg1;
- (void)reportStats;
- (id)reportTimer;
- (id)requestStatsDicts;
- (void)save;
- (void)scheduleReport;
- (void)setConnectionStatsDict:(id)arg1;
- (void)setControlStatsDicts:(id)arg1;
- (void)setLastReportDate:(id)arg1;
- (void)setReportInterval:(double)arg1;
- (void)setReportTimer:(id)arg1;
- (void)setRequestStatsDicts:(id)arg1;
- (void)setSubmitQueue:(id)arg1;
- (void)setVersion:(long long)arg1;
- (id)submitQueue;
- (long long)version;

@end
