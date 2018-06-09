/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _budgetItemIdentifier;
    NSArray * _childItems;
    UIColor * _color;
    NSString * _displayName;
    NSDictionary * _higherResolutionItemsByStartDate;
    unsigned long long  _higherResolutionUnit;
    NSString * _identifier;
    UIImage * _image;
    unsigned long long  _itemType;
    NSNumber * _maxUsage;
    NSNumber * _minUsage;
    unsigned long long  _numberOfHigherResolutionUnitsInPeriod;
    NSDate * _startDate;
    unsigned long long  _timePeriod;
    unsigned long long  _timePeriodUnit;
    NSNumber * _totalUsage;
}

@property (nonatomic, copy) NSString *budgetItemIdentifier;
@property (nonatomic, copy) NSArray *childItems;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSDictionary *higherResolutionItemsByStartDate;
@property (nonatomic) unsigned long long higherResolutionUnit;
@property (nonatomic, readonly, copy) NSArray *higherResolutionUsageItems;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic, copy) NSNumber *maxUsage;
@property (nonatomic, readonly) NSString *maxUsageDescription;
@property (nonatomic, copy) NSNumber *minUsage;
@property (nonatomic) unsigned long long numberOfHigherResolutionUnitsInPeriod;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) unsigned long long timePeriod;
@property (nonatomic) unsigned long long timePeriodUnit;
@property (nonatomic, copy) NSNumber *totalUsage;
@property (nonatomic, readonly) NSString *totalUsageDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)budgetItemIdentifier;
- (id)childItems;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)higherResolutionItemsByStartDate;
- (unsigned long long)higherResolutionUnit;
- (id)higherResolutionUsageItems;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimePeriod:(unsigned long long)arg1 startDate:(id)arg2 timePeriodUnit:(unsigned long long)arg3 higherResolutionUnit:(unsigned long long)arg4 numberOfHigherResolutionUnitsInPeriod:(unsigned long long)arg5 higherResolutionItemsByStartDate:(id)arg6;
- (id)initWithUsageItem:(id)arg1;
- (unsigned long long)itemType;
- (id)maxUsage;
- (id)maxUsageDescription;
- (id)minUsage;
- (unsigned long long)numberOfHigherResolutionUnitsInPeriod;
- (void)setBudgetItemIdentifier:(id)arg1;
- (void)setChildItems:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHigherResolutionItemsByStartDate:(id)arg1;
- (void)setHigherResolutionUnit:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setItemType:(unsigned long long)arg1;
- (void)setMaxUsage:(id)arg1;
- (void)setMinUsage:(id)arg1;
- (void)setNumberOfHigherResolutionUnitsInPeriod:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTimePeriod:(unsigned long long)arg1;
- (void)setTimePeriodUnit:(unsigned long long)arg1;
- (void)setTotalUsage:(id)arg1;
- (id)startDate;
- (unsigned long long)timePeriod;
- (unsigned long long)timePeriodUnit;
- (id)totalUsage;
- (id)totalUsageDescription;

@end
