/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRestaurantReservationUserBooking : INRestaurantReservationBooking <INRestaurantReservationUserBookingExport, NSCopying> {
    NSString * _advisementText;
    NSDate * _dateStatusModified;
    INRestaurantGuest * _guest;
    NSString * _guestProvidedSpecialRequestText;
    INRestaurantOffer * _selectedOffer;
    unsigned long long  _status;
}

@property (nonatomic, copy) NSString *advisementText;
@property (nonatomic, copy) NSDate *dateStatusModified;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) INRestaurantGuest *guest;
@property (nonatomic, copy) NSString *guestProvidedSpecialRequestText;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) INRestaurantOffer *selectedOffer;
@property (nonatomic) unsigned long long status;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)advisementText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateStatusModified;
- (void)encodeWithCoder:(id)arg1;
- (id)guest;
- (id)guestProvidedSpecialRequestText;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestaurant:(id)arg1 bookingDate:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4 guest:(id)arg5 status:(unsigned long long)arg6 dateStatusModified:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)selectedOffer;
- (void)setAdvisementText:(id)arg1;
- (void)setDateStatusModified:(id)arg1;
- (void)setGuest:(id)arg1;
- (void)setGuestProvidedSpecialRequestText:(id)arg1;
- (void)setSelectedOffer:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end
