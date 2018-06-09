/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKValueAddedServiceTransaction : NSObject <NSSecureCoding> {
    bool  _didSucceed;
    long long  _error;
    NSString * _identifier;
    PKValueAddedMerchant * _merchant;
    NSString * _merchantURL;
    NSNumber * _terminalApplicationVersion;
    long long  _terminalMode;
    NSDate * _transactionDate;
}

@property (nonatomic) bool didSucceed;
@property (nonatomic) long long error;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) PKValueAddedMerchant *merchant;
@property (nonatomic, retain) NSString *merchantURL;
@property (nonatomic, retain) NSNumber *terminalApplicationVersion;
@property (nonatomic) long long terminalMode;
@property (nonatomic, retain) NSDate *transactionDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (bool)didSucceed;
- (void)encodeWithCoder:(id)arg1;
- (long long)error;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)merchant;
- (id)merchantURL;
- (void)setDidSucceed:(bool)arg1;
- (void)setError:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMerchant:(id)arg1;
- (void)setMerchantURL:(id)arg1;
- (void)setTerminalApplicationVersion:(id)arg1;
- (void)setTerminalMode:(long long)arg1;
- (void)setTransactionDate:(id)arg1;
- (id)terminalApplicationVersion;
- (long long)terminalMode;
- (id)transactionDate;

@end
