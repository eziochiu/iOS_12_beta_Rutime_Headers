/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRestaurantOffer : NSObject <INRestaurantOfferExport, NSCopying, NSSecureCoding> {
    NSString * _offerDetailText;
    NSString * _offerIdentifier;
    NSString * _offerTitleText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *offerDetailText;
@property (nonatomic, copy) NSString *offerIdentifier;
@property (nonatomic, copy) NSString *offerTitleText;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)offerDetailText;
- (id)offerIdentifier;
- (id)offerTitleText;
- (void)setOfferDetailText:(id)arg1;
- (void)setOfferIdentifier:(id)arg1;
- (void)setOfferTitleText:(id)arg1;

@end
