/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKVerificationRequestRecord : NSObject <NSSecureCoding> {
    NSArray * _allChannels;
    PKVerificationChannel * _channel;
    NSString * _currentStepIdentifier;
    NSDate * _date;
    NSString * _passUniqueID;
    NSString * _previousStepIdentifier;
    NSDictionary * _requiredFieldData;
    long long  _verificationStatus;
}

@property (nonatomic, copy) NSArray *allChannels;
@property (nonatomic, copy) PKVerificationChannel *channel;
@property (nonatomic, copy) NSString *currentStepIdentifier;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *passUniqueID;
@property (nonatomic, copy) NSString *previousStepIdentifier;
@property (nonatomic, copy) NSDictionary *requiredFieldData;
@property (nonatomic) long long verificationStatus;

+ (bool)supportsSecureCoding;
+ (id)verificationRequestRecordForPass:(id)arg1;

- (void).cxx_destruct;
- (id)allChannels;
- (id)channel;
- (id)currentStepIdentifier;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)passUniqueID;
- (id)previousStepIdentifier;
- (id)requiredFieldData;
- (id)requiredVerificationFields;
- (void)setAllChannels:(id)arg1;
- (void)setChannel:(id)arg1;
- (void)setCurrentStepIdentifier:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setPassUniqueID:(id)arg1;
- (void)setPreviousStepIdentifier:(id)arg1;
- (void)setRequiredFieldData:(id)arg1;
- (void)setVerificationStatus:(long long)arg1;
- (long long)verificationStatus;

@end
