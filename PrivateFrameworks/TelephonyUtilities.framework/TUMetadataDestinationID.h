/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMetadataDestinationID : NSObject <NSCopying> {
    NSString * _cacheKey;
    NSString * _countryCode;
    NSString * _destinationID;
    struct __CFPhoneNumber { } * _phoneNumber;
}

@property (nonatomic, readonly, copy) NSString *cacheKey;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly, copy) NSString *destinationID;
@property (nonatomic, readonly) struct __CFPhoneNumber { }*phoneNumber;

+ (id)destinationIDWithCall:(id)arg1;
+ (id)destinationIDWithDestinationID:(id)arg1 countryCode:(id)arg2;
+ (id)destinationIDWithRecentCall:(id)arg1;

- (void).cxx_destruct;
- (id)cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)destinationID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCall:(id)arg1;
- (id)initWithDestinationID:(id)arg1 countryCode:(id)arg2;
- (id)initWithRecentCall:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct __CFPhoneNumber { }*)phoneNumber;

@end
