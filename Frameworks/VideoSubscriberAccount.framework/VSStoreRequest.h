/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSStoreRequest : NSObject <NSCopying, NSSecureCoding> {
    VSAuditToken * _auditToken;
    NSString * _bagKey;
    NSString * _methodName;
    NSDictionary * _parameters;
}

@property (nonatomic, retain) VSAuditToken *auditToken;
@property (nonatomic, copy) NSString *bagKey;
@property (nonatomic, copy) NSString *methodName;
@property (nonatomic, copy) NSDictionary *parameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)auditToken;
- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)methodName;
- (id)parameters;
- (void)setAuditToken:(id)arg1;
- (void)setBagKey:(id)arg1;
- (void)setMethodName:(id)arg1;
- (void)setParameters:(id)arg1;

@end
