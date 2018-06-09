/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolNetworkRequest : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolNetworkHeaders *headers;
@property (nonatomic, copy) NSString *method;
@property (nonatomic, copy) NSString *postData;
@property (nonatomic, copy) NSString *url;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)headers;
- (id)initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3;
- (id)method;
- (id)postData;
- (void)setHeaders:(id)arg1;
- (void)setMethod:(id)arg1;
- (void)setPostData:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)ik_networkRequestFromURLRequest:(id)arg1;
+ (id)safe_initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3;

@end
