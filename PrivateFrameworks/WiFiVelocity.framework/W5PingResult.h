/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5PingResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _address;
    double  _avg;
    NSString * _command;
    long long  _count;
    long long  _dataLength;
    double  _endedAt;
    NSString * _interfaceName;
    double  _interval;
    double  _max;
    double  _min;
    NSString * _output;
    double  _packetLoss;
    double  _startedAt;
    double  _stddev;
    double  _timeout;
    long long  _trafficClass;
    double  _wait;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic) double avg;
@property (nonatomic, copy) NSString *command;
@property (nonatomic) long long count;
@property (nonatomic) long long dataLength;
@property (nonatomic) double endedAt;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic) double interval;
@property (nonatomic) double max;
@property (nonatomic) double min;
@property (nonatomic, copy) NSString *output;
@property (nonatomic) double packetLoss;
@property (nonatomic) double startedAt;
@property (nonatomic) double stddev;
@property (nonatomic) double timeout;
@property (nonatomic) double timestamp;
@property (nonatomic) long long trafficClass;
@property (nonatomic) double wait;

+ (bool)supportsSecureCoding;

- (id)address;
- (double)avg;
- (id)command;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (long long)dataLength;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)endedAt;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (double)interval;
- (double)max;
- (double)min;
- (id)output;
- (double)packetLoss;
- (void)setAddress:(id)arg1;
- (void)setAvg:(double)arg1;
- (void)setCommand:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setDataLength:(long long)arg1;
- (void)setEndedAt:(double)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)setMax:(double)arg1;
- (void)setMin:(double)arg1;
- (void)setOutput:(id)arg1;
- (void)setPacketLoss:(double)arg1;
- (void)setStartedAt:(double)arg1;
- (void)setStddev:(double)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTrafficClass:(long long)arg1;
- (void)setWait:(double)arg1;
- (double)startedAt;
- (double)stddev;
- (double)timeout;
- (double)timestamp;
- (long long)trafficClass;
- (double)wait;

@end
