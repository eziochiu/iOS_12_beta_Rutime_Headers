/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlatformContext : NSObject <NSCopying> {
    NSString * _lookupURLString;
    <SSVSAPContext> * _sapContext;
    NSArray * _signedHeaders;
    NSArray * _signedQueryParameters;
    NSString * _unpersonalizedLookupURLString;
}

@property (nonatomic, retain) <SSVSAPContext> *SAPContext;
@property (nonatomic, readonly) NSDictionary *bagDictionary;
@property (nonatomic, readonly) NSString *lookupURLString;
@property (nonatomic, readonly) NSArray *signedHeaders;
@property (nonatomic, readonly) NSArray *signedQueryParameters;
@property (nonatomic, readonly) NSString *unpersonalizedLookupURLString;

- (void).cxx_destruct;
- (id)SAPContext;
- (id)bagDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBagDictionary:(id)arg1;
- (id)initWithLookupURL:(id)arg1 unpersonalizedLookupURL:(id)arg2 signedHeaders:(id)arg3 signedQueryParameters:(id)arg4;
- (id)lookupURLString;
- (void)setSAPContext:(id)arg1;
- (id)signedHeaders;
- (id)signedQueryParameters;
- (id)unpersonalizedLookupURLString;

@end
