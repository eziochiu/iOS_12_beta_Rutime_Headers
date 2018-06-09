/* made by EzioChiu.
 */

@protocol AceObject <NSObject, NSCopying, NSMutableCopying, NSSecureCoding>

@required

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSMutableDictionary *)dictionary;
- (NSString *)encodedClassName;
- (NSString *)groupIdentifier;
- (id)init;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithDictionary:(NSDictionary *)arg1 context:(id <AceContext>)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (NSMutableDictionary *)properties;

@end
