/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMutablePostalAddress : CNPostalAddress

@property (nonatomic, copy) NSString *ISOCountryCode;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *formattedAddress;
@property (nonatomic, copy) NSString *postalCode;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *street;
@property (nonatomic, copy) NSString *subAdministrativeArea;
@property (nonatomic, copy) NSString *subLocality;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)freeze;

@end
