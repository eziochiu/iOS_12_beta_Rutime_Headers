/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface IDSWebTunnelRequestMessage : FTIDSMessage {
    bool  _disableIDSTranslation;
    NSNumber * _maximumResponseSize;
    NSMutableDictionary * _messageHeaders;
    NSData * _messageRequestBodyData;
    NSDictionary * _messageRequestBodyDictionary;
    NSString * _messageRequestUUID;
    NSString * _messageURL;
    NSData * _responseBodyData;
    NSDictionary * _responseBodyDictionary;
    NSNumber * _responseCode;
    NSDictionary * _responseHeaders;
    NSNumber * _responseStatus;
    NSString * _userAgentOverride;
}

@property (nonatomic) bool disableIDSTranslation;
@property (nonatomic, copy) NSNumber *maximumResponseSize;
@property (nonatomic, copy) NSMutableDictionary *messageHeaders;
@property (nonatomic, copy) NSData *messageRequestBodyData;
@property (nonatomic, copy) NSDictionary *messageRequestBodyDictionary;
@property (nonatomic, copy) NSString *messageRequestUUID;
@property (nonatomic, copy) NSString *messageURL;
@property (nonatomic, copy) NSData *responseBodyData;
@property (nonatomic, copy) NSDictionary *responseBodyDictionary;
@property (nonatomic, copy) NSNumber *responseCode;
@property (nonatomic, copy) NSDictionary *responseHeaders;
@property (nonatomic, copy) NSNumber *responseStatus;
@property (nonatomic, copy) NSString *userAgentOverride;

- (void).cxx_destruct;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disableIDSTranslation;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (bool)isIDSMessage;
- (bool)isWebTunnelMessage;
- (id)maximumResponseSize;
- (id)messageBody;
- (id)messageHeaders;
- (id)messageRequestBodyData;
- (id)messageRequestBodyDictionary;
- (id)messageRequestUUID;
- (id)messageURL;
- (id)responseBodyData;
- (id)responseBodyDictionary;
- (id)responseCode;
- (id)responseHeaders;
- (id)responseStatus;
- (void)setDisableIDSTranslation:(bool)arg1;
- (void)setMaximumResponseSize:(id)arg1;
- (void)setMessageHeaders:(id)arg1;
- (void)setMessageRequestBodyData:(id)arg1;
- (void)setMessageRequestBodyDictionary:(id)arg1;
- (void)setMessageRequestUUID:(id)arg1;
- (void)setMessageURL:(id)arg1;
- (void)setResponseBodyData:(id)arg1;
- (void)setResponseBodyDictionary:(id)arg1;
- (void)setResponseCode:(id)arg1;
- (void)setResponseHeaders:(id)arg1;
- (void)setResponseStatus:(id)arg1;
- (void)setUserAgentOverride:(id)arg1;
- (id)userAgentOverride;
- (bool)wantsBinaryPush;
- (bool)wantsCompressedBody;
- (bool)wantsIDSProtocolVersion;

@end
