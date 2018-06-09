/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLQueryItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
    NSString * _value;
}

@property (readonly) NSString *name;
@property (readonly) NSString *value;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)queryItemWithName:(id)arg1 value:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)value;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id)_geo_unescapedValue;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)queryItemForHandleType:(long long)arg1;
+ (id)queryItemValueForHandleType:(long long)arg1;

@end
