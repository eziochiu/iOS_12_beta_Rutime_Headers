/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMMessageNotificationController : NSObject <IDSServiceDelegate> {
    IDSService * _messageNotificationControllerIDSService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSService *messageNotificationControllerIDSService;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)_copyIDForDevice:(id)arg1;
- (id)_copyIDSIdentifierOrDefault:(id)arg1;
- (bool)_deviceIsAudioAccessory:(id)arg1;
- (void)_executeCommandFromMessageRequest:(id)arg1;
- (bool)_isCurrentDeviceAudioAccessory;
- (void)_playTone;
- (void)_sendNotificationMessageRequest:(id)arg1 toTokenURI:(id)arg2;
- (bool)audioAccessoryDeviceWithTokenURIExists:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)messageNotificationControllerIDSService;
- (void)sendNotificationMessageToTokenURI:(id)arg1 withCommmand:(long long)arg2;
- (void)sendNotificationMessageToUniqueID:(id)arg1 withCommmand:(long long)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setMessageNotificationControllerIDSService:(id)arg1;

@end
