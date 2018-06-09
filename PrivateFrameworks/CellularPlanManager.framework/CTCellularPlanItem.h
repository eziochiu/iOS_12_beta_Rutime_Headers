/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _iccid;
    bool  _isActiveDataPlan;
    bool  _isDefaultVoice;
    bool  _isSelectable;
    NSNumber * _isSelectedOverride;
    bool  _isSimStateValid;
    NSString * _label;
    long long  _lockState;
    NSString * _name;
    NSString * _phoneNumber;
    CTCellularPlan * _plan;
    bool  _shouldAppearDisabled;
    bool  _shouldAutoSelectWhenInRange;
    bool  _shouldDisplay;
    bool  _shouldDisplayType;
    long long  _type;
}

@property (nonatomic, readonly) NSString *carrierName;
@property (nonatomic, readonly) NSString *iccid;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool isActiveDataPlan;
@property (nonatomic, readonly) bool isBackedByCellularPlan;
@property (nonatomic) bool isDefaultVoice;
@property (nonatomic, readonly) bool isInstalling;
@property (nonatomic) bool isSelectable;
@property (nonatomic, readonly) bool isSelected;
@property (nonatomic, retain) NSNumber *isSelectedOverride;
@property (nonatomic) bool isSimStateValid;
@property (nonatomic) NSString *label;
@property (nonatomic) long long lockState;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) NSString *phoneNumber;
@property (nonatomic, readonly) CTCellularPlan *plan;
@property (nonatomic) bool shouldAppearDisabled;
@property (nonatomic) bool shouldAutoSelectWhenInRange;
@property (nonatomic, readonly) bool shouldDisplay;
@property (nonatomic) bool shouldDisplayType;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (id)carrierName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iccid;
- (id)identifier;
- (id)initWithCellularPlan:(id)arg1;
- (id)initWithCellularPlan:(id)arg1 iccid:(id)arg2 name:(id)arg3 type:(long long)arg4 phoneNumber:(id)arg5 label:(id)arg6;
- (id)initWithCellularPlan:(id)arg1 type:(long long)arg2 phoneNumber:(id)arg3 label:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithIccid:(id)arg1 name:(id)arg2 phoneNumber:(id)arg3 label:(id)arg4;
- (bool)isActiveDataPlan;
- (bool)isBackedByCellularPlan;
- (bool)isDefaultVoice;
- (bool)isInstalling;
- (bool)isSelectable;
- (bool)isSelected;
- (id)isSelectedOverride;
- (bool)isSimStateValid;
- (id)label;
- (long long)lockState;
- (id)name;
- (id)phoneNumber;
- (id)plan;
- (void)setIsActiveDataPlan:(bool)arg1;
- (void)setIsDefaultVoice:(bool)arg1;
- (void)setIsSelectable:(bool)arg1;
- (void)setIsSelectedOverride:(id)arg1;
- (void)setIsSimStateValid:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLockState:(long long)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setShouldAppearDisabled:(bool)arg1;
- (void)setShouldAutoSelectWhenInRange:(bool)arg1;
- (void)setShouldDisplayType:(bool)arg1;
- (void)setType:(long long)arg1;
- (bool)shouldAppearDisabled;
- (bool)shouldAutoSelectWhenInRange;
- (bool)shouldDisplay;
- (bool)shouldDisplayType;
- (long long)type;

@end
