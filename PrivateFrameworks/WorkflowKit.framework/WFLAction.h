/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLAction : NSObject <NSCopying> {
    NSString * _identifier;
    NSDictionary * _parameters;
}

@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) Class implementationClass;
@property (nonatomic, readonly, copy) NSDictionary *parameters;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (Class)implementationClass;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parameters;

@end
