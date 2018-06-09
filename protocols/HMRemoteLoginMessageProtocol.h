/* made by EzioChiu.
 */

@protocol HMRemoteLoginMessageProtocol <NSObject, NSSecureCoding>

@required

+ (NSString *)messageName;
+ (id)objWithDict:(NSDictionary *)arg1;
+ (id)objWithMessage:(HMFMessage *)arg1;
+ (NSString *)xpcMessageName;

- (NSString *)messageName;
- (NSDictionary *)messagePayload;
- (NSString *)xpcMessageName;

@end
