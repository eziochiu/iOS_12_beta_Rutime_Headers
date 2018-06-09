/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NetworkServiceProxyDurationBuckets : NSObject <NSSecureCoding> {
    unsigned int  _connection_duration_10_mins;
    unsigned int  _connection_duration_12_hours;
    unsigned int  _connection_duration_1_hour;
    unsigned int  _connection_duration_1_min;
    unsigned int  _connection_duration_2_hours;
    unsigned int  _connection_duration_30_mins;
    unsigned int  _connection_duration_3_mins;
    unsigned int  _connection_duration_5_hours;
    unsigned int  _connection_duration_6_mins;
    unsigned int  _connection_duration_above_12_hours;
}

@property unsigned int connection_duration_10_mins;
@property unsigned int connection_duration_12_hours;
@property unsigned int connection_duration_1_hour;
@property unsigned int connection_duration_1_min;
@property unsigned int connection_duration_2_hours;
@property unsigned int connection_duration_30_mins;
@property unsigned int connection_duration_3_mins;
@property unsigned int connection_duration_5_hours;
@property unsigned int connection_duration_6_mins;
@property unsigned int connection_duration_above_12_hours;

+ (bool)supportsSecureCoding;

- (void)addBuckets:(id)arg1;
- (void)clear;
- (unsigned int)connection_duration_10_mins;
- (unsigned int)connection_duration_12_hours;
- (unsigned int)connection_duration_1_hour;
- (unsigned int)connection_duration_1_min;
- (unsigned int)connection_duration_2_hours;
- (unsigned int)connection_duration_30_mins;
- (unsigned int)connection_duration_3_mins;
- (unsigned int)connection_duration_5_hours;
- (unsigned int)connection_duration_6_mins;
- (unsigned int)connection_duration_above_12_hours;
- (unsigned int*)createBucketArray;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)getBucketCount;
- (void)incrBucketWithCurrentDate:(id)arg1 pastDate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setConnection_duration_10_mins:(unsigned int)arg1;
- (void)setConnection_duration_12_hours:(unsigned int)arg1;
- (void)setConnection_duration_1_hour:(unsigned int)arg1;
- (void)setConnection_duration_1_min:(unsigned int)arg1;
- (void)setConnection_duration_2_hours:(unsigned int)arg1;
- (void)setConnection_duration_30_mins:(unsigned int)arg1;
- (void)setConnection_duration_3_mins:(unsigned int)arg1;
- (void)setConnection_duration_5_hours:(unsigned int)arg1;
- (void)setConnection_duration_6_mins:(unsigned int)arg1;
- (void)setConnection_duration_above_12_hours:(unsigned int)arg1;

@end
