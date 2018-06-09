/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPFollowUpContext : NSObject <NSSecureCoding> {
    NSString * _followUpType;
    bool  _force;
    unsigned long long  _repairType;
    bool  _shouldNotify;
}

@property (nonatomic, copy) NSString *followUpType;
@property (nonatomic) bool force;
@property (nonatomic) unsigned long long repairType;
@property (nonatomic) bool shouldNotify;

+ (id)contextForOfflinePasscodeChange;
+ (id)contextForRecoveryKeyRepair;
+ (id)contextForStateRepair;
+ (id)contextWithType:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)followUpType;
- (bool)force;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)repairType;
- (void)setFollowUpType:(id)arg1;
- (void)setForce:(bool)arg1;
- (void)setRepairType:(unsigned long long)arg1;
- (void)setShouldNotify:(bool)arg1;
- (bool)shouldNotify;

@end
