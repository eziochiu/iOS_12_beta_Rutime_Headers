/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDOneTimeCodeManager : NSObject {
    <IMDaemonListenerProtocol> * _broadcaster;
    <IMDaemonListenerProtocol> * _broadcasterOverride;
    NSTimer * _codeInvalidationTimer;
    IMOneTimeCodeUtilities * _otcUtilities;
    NSArray * _validCodes;
}

@property (nonatomic, retain) <IMDaemonListenerProtocol> *broadcaster;
@property (nonatomic, retain) <IMDaemonListenerProtocol> *broadcasterOverride;
@property (nonatomic, retain) NSTimer *codeInvalidationTimer;
@property (nonatomic, retain) IMOneTimeCodeUtilities *otcUtilities;
@property (nonatomic, retain) NSArray *validCodes;

+ (id)sharedInstance;

- (void)_setNewCodeAndPrepareInvalidationTimer:(id)arg1;
- (void)broadcastCodeStatusToClients;
- (id)broadcaster;
- (id)broadcasterOverride;
- (id)codeInvalidationTimer;
- (void)consumeCodeWithGuid:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBroadcaster:(id)arg1 otcUtilities:(id)arg2;
- (id)otcUtilities;
- (void)setBroadcaster:(id)arg1;
- (void)setBroadcasterOverride:(id)arg1;
- (void)setCodeInvalidationTimer:(id)arg1;
- (void)setOtcUtilities:(id)arg1;
- (void)setValidCodes:(id)arg1;
- (void)startTrackingCode:(id)arg1;
- (id)validCodes;

@end
