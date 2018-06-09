/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRideOption : NSObject <INCacheableContainer, INRideOptionExport, NSCopying, NSSecureCoding> {
    NSArray * _availablePartySizeOptions;
    NSString * _availablePartySizeOptionsSelectionPrompt;
    NSString * _disclaimerMessage;
    NSDate * _estimatedPickupDate;
    NSArray * _fareLineItems;
    NSString * _identifier;
    NSString * _name;
    INPriceRange * _priceRange;
    NSString * _specialPricing;
    INImage * _specialPricingBadgeImage;
    NSUserActivity * _userActivityForBookingInApplication;
    NSNumber * _usesMeteredFare;
}

@property (nonatomic, copy) NSArray *availablePartySizeOptions;
@property (nonatomic, copy) NSString *availablePartySizeOptionsSelectionPrompt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *disclaimerMessage;
@property (nonatomic, copy) NSDate *estimatedPickupDate;
@property (nonatomic, copy) NSArray *fareLineItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) INPriceRange *priceRange;
@property (nonatomic, copy) NSString *specialPricing;
@property (nonatomic, copy) INImage *specialPricingBadgeImage;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUserActivity *userActivityForBookingInApplication;
@property (nonatomic, copy) NSNumber *usesMeteredFare;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)availablePartySizeOptions;
- (id)availablePartySizeOptionsSelectionPrompt;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)disclaimerMessage;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedPickupDate;
- (id)fareLineItems;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 estimatedPickupDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)priceRange;
- (void)setAvailablePartySizeOptions:(id)arg1;
- (void)setAvailablePartySizeOptionsSelectionPrompt:(id)arg1;
- (void)setDisclaimerMessage:(id)arg1;
- (void)setEstimatedPickupDate:(id)arg1;
- (void)setFareLineItems:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPriceRange:(id)arg1;
- (void)setSpecialPricing:(id)arg1;
- (void)setSpecialPricingBadgeImage:(id)arg1;
- (void)setUserActivityForBookingInApplication:(id)arg1;
- (void)setUsesMeteredFare:(id)arg1;
- (id)specialPricing;
- (id)specialPricingBadgeImage;
- (id)userActivityForBookingInApplication;
- (id)usesMeteredFare;

@end
