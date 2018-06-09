/* made by EzioChiu.
 */

@protocol GEOXPCRequest <NSObject, NSSecureCoding>

@required

+ (Class)replyClass;

- (bool)expectsReply;
- (bool)isValid;

@end
