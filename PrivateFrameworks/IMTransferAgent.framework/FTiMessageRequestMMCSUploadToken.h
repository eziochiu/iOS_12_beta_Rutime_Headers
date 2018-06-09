/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
 */

@interface FTiMessageRequestMMCSUploadToken : IDSMessage <NSCopying> {
    NSString * _anonymousSenderID;
    NSData * _contentBody;
    NSString * _contentHeaders;
    long long  _contentVersion;
    NSString * _destinationID;
    NSNumber * _length;
    NSString * _responseAuthToken;
    NSData * _responseContentBody;
    NSString * _responseContentHeaders;
    long long  _responseContentVersion;
    NSString * _responseRequestURL;
    NSString * _responseRequestorID;
    NSString * _senderID;
    NSData * _sessionToken;
    NSData * _signature;
    NSData * pushToken;
}

@property (nonatomic, copy) NSString *anonymousSenderID;
@property (copy) NSData *contentBody;
@property (copy) NSString *contentHeaders;
@property long long contentVersion;
@property (nonatomic, copy) NSString *destinationID;
@property (copy) NSNumber *length;
@property (nonatomic, copy) NSData *pushToken;
@property (copy) NSString *responseAuthToken;
@property (copy) NSData *responseContentBody;
@property (copy) NSString *responseContentHeaders;
@property long long responseContentVersion;
@property (copy) NSString *responseRequestURL;
@property (copy) NSString *responseRequestorID;
@property (nonatomic, copy) NSString *senderID;
@property (nonatomic, copy) NSData *sessionToken;
@property (copy) NSData *signature;

- (id)anonymousSenderID;
- (long long)command;
- (id)contentBody;
- (id)contentHeaders;
- (long long)contentVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)destinationID;
- (void)handleResponseDictionary:(id)arg1;
- (id)init;
- (id)length;
- (id)messageBody;
- (id)pushToken;
- (id)requiredKeys;
- (id)responseAuthToken;
- (long long)responseCommand;
- (id)responseContentBody;
- (id)responseContentHeaders;
- (long long)responseContentVersion;
- (id)responseRequestURL;
- (id)responseRequestorID;
- (id)senderID;
- (id)sessionToken;
- (void)setAnonymousSenderID:(id)arg1;
- (void)setContentBody:(id)arg1;
- (void)setContentHeaders:(id)arg1;
- (void)setContentVersion:(long long)arg1;
- (void)setDestinationID:(id)arg1;
- (void)setLength:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setResponseAuthToken:(id)arg1;
- (void)setResponseContentBody:(id)arg1;
- (void)setResponseContentHeaders:(id)arg1;
- (void)setResponseContentVersion:(long long)arg1;
- (void)setResponseRequestURL:(id)arg1;
- (void)setResponseRequestorID:(id)arg1;
- (void)setSenderID:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end
