/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICJSSignConfiguration : NSObject <NSCopying> {
    NSMutableArray * _componentNames;
    NSMutableArray * _components;
    NSString * _signatureDataCookieName;
    NSString * _signatureDataHeaderName;
}

@property (nonatomic, copy) NSString *signatureDataCookieName;
@property (nonatomic, copy) NSString *signatureDataHeaderName;

+ (id)storePlatformConfiguration;

- (void).cxx_destruct;
- (void)_addRequestComponent:(long long)arg1 withName:(id)arg2;
- (void)_enumerateComponentsUsingBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)includeCookieWithName:(id)arg1;
- (void)includeHeaderWithName:(id)arg1;
- (void)includeQueryItemWithName:(id)arg1;
- (void)setSignatureDataCookieName:(id)arg1;
- (void)setSignatureDataHeaderName:(id)arg1;
- (id)signatureDataCookieName;
- (id)signatureDataHeaderName;

@end
