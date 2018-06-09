/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INBookRestaurantReservationIntent : INIntent <INBookRestaurantReservationIntentExport, NSCopying> {
    NSDate * _bookingDate;
    NSDateComponents * _bookingDateComponents;
    NSString * _bookingIdentifier;
    INRestaurantGuest * _guest;
    NSString * _guestProvidedSpecialRequestText;
    unsigned long long  _partySize;
    INRestaurant * _restaurant;
    INRestaurantOffer * _selectedOffer;
}

@property (nonatomic, copy) NSDate *bookingDate;
@property (nonatomic, copy) NSDateComponents *bookingDateComponents;
@property (nonatomic, copy) NSString *bookingIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) INRestaurantGuest *guest;
@property (nonatomic, copy) NSString *guestProvidedSpecialRequestText;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long partySize;
@property (nonatomic, copy) INRestaurant *restaurant;
@property (nonatomic, copy) INRestaurantOffer *selectedOffer;
@property (readonly) Class superclass;

+ (id)intentDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)bookingDate;
- (id)bookingDateComponents;
- (id)bookingIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)guest;
- (id)guestProvidedSpecialRequestText;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestaurant:(id)arg1 bookingDateComponents:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4 guest:(id)arg5 selectedOffer:(id)arg6 guestProvidedSpecialRequestText:(id)arg7;
- (bool)isEqual:(id)arg1;
- (unsigned long long)partySize;
- (id)restaurant;
- (id)selectedOffer;
- (void)setBookingDate:(id)arg1;
- (void)setBookingDateComponents:(id)arg1;
- (void)setBookingIdentifier:(id)arg1;
- (void)setGuest:(id)arg1;
- (void)setGuestProvidedSpecialRequestText:(id)arg1;
- (void)setPartySize:(unsigned long long)arg1;
- (void)setRestaurant:(id)arg1;
- (void)setSelectedOffer:(id)arg1;

@end
