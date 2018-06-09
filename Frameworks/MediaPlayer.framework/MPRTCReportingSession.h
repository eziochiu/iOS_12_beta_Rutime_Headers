/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRTCReportingSession : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDictionary * _additionalUserInfo;
    NSString * _clientName;
    int  _clientType;
    long long  _clientVersion;
    bool  _hasCompleteSessionSetup;
    bool  _hasInitializedSession;
    id  _hierarchyToken;
    RTCReporting * _internalSession;
    NSOperationQueue * _operationQueue;
    NSMutableArray * _pendingReportingEvents;
    NSString * _serviceIdentifier;
    unsigned int  _sessionID;
    NSDictionary * _sessionUserInfo;
}

@property (nonatomic, copy) NSDictionary *additionalUserInfo;
@property (nonatomic, copy) NSString *clientName;
@property (nonatomic) int clientType;
@property (nonatomic) long long clientVersion;
@property (nonatomic, readonly) bool hasCompleteSessionSetup;
@property (nonatomic, readonly) bool hasInitializedSession;
@property (nonatomic, retain) id hierarchyToken;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic) unsigned int sessionID;

+ (bool)_isRTCReportingSupported;
+ (void)_recordEvent:(id)arg1 withInternalSession:(id)arg2;
+ (id)newHierarchyTokenFromParentToken:(id)arg1;

- (void).cxx_destruct;
- (id)additionalUserInfo;
- (id)clientName;
- (int)clientType;
- (long long)clientVersion;
- (void)completeSessionSetup;
- (void)finalizeSession;
- (bool)hasCompleteSessionSetup;
- (bool)hasInitializedSession;
- (id)hierarchyToken;
- (id)init;
- (void)initializeSession;
- (void)recordEvent:(id)arg1;
- (id)serviceIdentifier;
- (unsigned int)sessionID;
- (void)setAdditionalUserInfo:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setClientType:(int)arg1;
- (void)setClientVersion:(long long)arg1;
- (void)setHierarchyToken:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setSessionID:(unsigned int)arg1;

@end
