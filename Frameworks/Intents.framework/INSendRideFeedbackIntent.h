/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSendRideFeedbackIntent : INIntent {
    NSNumber * _rating;
    NSString * _rideIdentifier;
    INCurrencyAmount * _tip;
}

@property (nonatomic, copy) NSNumber *rating;
@property (nonatomic, readonly, copy) NSString *rideIdentifier;
@property (nonatomic, copy) INCurrencyAmount *tip;

+ (id)intentDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRideIdentifier:(id)arg1;
- (id)rating;
- (id)rideIdentifier;
- (void)setRating:(id)arg1;
- (void)setTip:(id)arg1;
- (id)tip;

@end
