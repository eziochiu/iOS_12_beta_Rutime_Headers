/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSiriServerSessionInfo : NSObject {
    <HMDDataStreamBulkSendSession> * _bulkSendSession;
    bool  _didBulkSendSessionComplete;
    bool  _didBulkSendSessionFail;
    bool  _didSiriSessionStart;
    bool  _didSiriSessionStop;
    NSString * _identifier;
}

@property (nonatomic, retain) <HMDDataStreamBulkSendSession> *bulkSendSession;
@property (nonatomic) bool didBulkSendSessionComplete;
@property (nonatomic) bool didBulkSendSessionFail;
@property (nonatomic) bool didSiriSessionStart;
@property (nonatomic) bool didSiriSessionStop;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (id)bulkSendSession;
- (id)description;
- (bool)didBulkSendSessionComplete;
- (bool)didBulkSendSessionFail;
- (bool)didSiriSessionStart;
- (bool)didSiriSessionStop;
- (id)identifier;
- (bool)isBulkSendActive;
- (bool)isSiriSessionActive;
- (void)setBulkSendSession:(id)arg1;
- (void)setDidBulkSendSessionComplete:(bool)arg1;
- (void)setDidBulkSendSessionFail:(bool)arg1;
- (void)setDidSiriSessionStart:(bool)arg1;
- (void)setDidSiriSessionStop:(bool)arg1;
- (void)setIdentifier:(id)arg1;

@end
