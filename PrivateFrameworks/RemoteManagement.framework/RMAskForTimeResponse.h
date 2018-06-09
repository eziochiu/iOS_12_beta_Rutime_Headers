/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMAskForTimeResponse : NSObject <NSSecureCoding> {
    NSNumber * _amountGranted;
    long long  _answer;
    NSUUID * _associatedRequestIdentifier;
    NSDate * _timeStamp;
}

@property (nonatomic, retain) NSNumber *amountGranted;
@property (nonatomic) long long answer;
@property (nonatomic, retain) NSUUID *associatedRequestIdentifier;
@property (nonatomic, retain) NSDate *timeStamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amountGranted;
- (long long)answer;
- (id)associatedRequestIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAmountGranted:(id)arg1;
- (void)setAnswer:(long long)arg1;
- (void)setAssociatedRequestIdentifier:(id)arg1;
- (void)setTimeStamp:(id)arg1;
- (id)timeStamp;

@end
