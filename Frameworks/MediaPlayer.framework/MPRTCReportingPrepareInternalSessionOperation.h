/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRTCReportingPrepareInternalSessionOperation : MPAsyncOperation {
    NSDictionary * _additionalUserInfo;
    NSString * _clientName;
    int  _clientType;
    long long  _clientVersion;
    id  _hierarchyToken;
    id /* block */  _responseHandler;
    NSString * _serviceIdentifier;
    long long  _sessionID;
}

@property (nonatomic, copy) NSDictionary *additionalUserInfo;
@property (nonatomic, copy) NSString *clientName;
@property (nonatomic) int clientType;
@property (nonatomic) long long clientVersion;
@property (nonatomic, retain) id hierarchyToken;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic) long long sessionID;

+ (id)RTCReportingFrameworkPath;
+ (bool)isRTCReportingSupported;
+ (id)newHierarchyTokenFromParentToken:(id)arg1;

- (void).cxx_destruct;
- (id)additionalUserInfo;
- (id)clientName;
- (int)clientType;
- (long long)clientVersion;
- (void)execute;
- (id)hierarchyToken;
- (id /* block */)responseHandler;
- (id)serviceIdentifier;
- (long long)sessionID;
- (void)setAdditionalUserInfo:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setClientType:(int)arg1;
- (void)setClientVersion:(long long)arg1;
- (void)setHierarchyToken:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setSessionID:(long long)arg1;

@end
