/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSystemWebContentFilterDeclaration_WhitelistedBookmarksItem : CEMPayloadBase {
    NSString * _payloadBookmarkPath;
    NSString * _payloadTitle;
    NSString * _payloadURL;
}

@property (nonatomic, copy) NSString *payloadBookmarkPath;
@property (nonatomic, copy) NSString *payloadTitle;
@property (nonatomic, copy) NSString *payloadURL;

+ (id)allowedPayloadKeys;
+ (id)buildWithURL:(id)arg1 withBookmarkPath:(id)arg2 withTitle:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadBookmarkPath;
- (id)payloadTitle;
- (id)payloadURL;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadBookmarkPath:(id)arg1;
- (void)setPayloadTitle:(id)arg1;
- (void)setPayloadURL:(id)arg1;

@end
