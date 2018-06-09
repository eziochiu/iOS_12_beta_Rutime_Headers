/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5PerfUpdate : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _bandwidth;
    W5PerfConfiguration * _configuration;
    NSNumber * _jitter;
    NSNumber * _loss;
    NSData * _standardErr;
    NSData * _standardOut;
    double  _start;
    double  _update;
}

@property (nonatomic, copy) NSNumber *bandwidth;
@property (nonatomic, copy) W5PerfConfiguration *configuration;
@property (nonatomic, copy) NSNumber *jitter;
@property (nonatomic, copy) NSNumber *loss;
@property (nonatomic, copy) NSData *standardErr;
@property (nonatomic, copy) NSData *standardOut;
@property (nonatomic) double start;
@property (nonatomic) double update;

+ (id)parseUpdateOutput:(id)arg1 configuration:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)bandwidth;
- (id)configuration;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jitter;
- (id)loss;
- (void)setBandwidth:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setJitter:(id)arg1;
- (void)setLoss:(id)arg1;
- (void)setStandardErr:(id)arg1;
- (void)setStandardOut:(id)arg1;
- (void)setStart:(double)arg1;
- (void)setUpdate:(double)arg1;
- (id)standardErr;
- (id)standardOut;
- (double)start;
- (double)update;

@end
