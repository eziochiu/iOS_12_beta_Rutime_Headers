/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSRWIDependencyDomain : NSObject {
    NSString * _identifier;
    NSDictionary * _types;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *types;

+ (id)allDomains;
+ (id)allowedDomains;
+ (void)processDomains:(id)arg1;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithDomainDictionary:(id)arg1;
- (bool)isValidWithError:(id*)arg1;
- (id)types;

@end
