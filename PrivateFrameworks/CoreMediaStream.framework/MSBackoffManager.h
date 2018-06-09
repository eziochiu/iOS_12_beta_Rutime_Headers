/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSBackoffManager : NSObject <NSSecureCoding> {
    double  _backoffFactor;
    double  _currentInterval;
    <MSBackoffManagerDelegate> * _delegate;
    double  _initialInterval;
    double  _maxBackoffInterval;
    NSDate * _nextExpiryDate;
    double  _randomizeFactor;
    NSDate * _retryAfterDate;
}

@property (nonatomic) double backoffFactor;
@property (nonatomic) double currentInterval;
@property (nonatomic) <MSBackoffManagerDelegate> *delegate;
@property (nonatomic) double initialInterval;
@property (nonatomic) double maxBackoffInterval;
@property (retain) NSDate *nextExpiryDate;
@property (nonatomic) double randomizeFactor;
@property (retain) NSDate *retryAfterDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_complainAboutMissingKeyInArchive:(id)arg1;
- (void)backoff;
- (double)backoffFactor;
- (id)copyParameters;
- (double)currentInterval;
- (id)delegate;
- (void)didReceiveRetryAfterDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitialInterval:(double)arg1 backoffFactor:(double)arg2 randomizeFactor:(double)arg3 maxBackoffInterval:(double)arg4 retryAfterDate:(id)arg5;
- (double)initialInterval;
- (bool)isEqual:(id)arg1;
- (double)maxBackoffInterval;
- (id)nextExpiryDate;
- (double)randomizeFactor;
- (void)reset;
- (id)retryAfterDate;
- (void)setBackoffFactor:(double)arg1;
- (void)setCurrentInterval:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialInterval:(double)arg1;
- (void)setMaxBackoffInterval:(double)arg1;
- (void)setNextExpiryDate:(id)arg1;
- (void)setRandomizeFactor:(double)arg1;
- (void)setRetryAfterDate:(id)arg1;

@end
