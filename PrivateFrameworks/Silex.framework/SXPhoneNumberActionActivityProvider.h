/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPhoneNumberActionActivityProvider : NSObject <SXActionActivityProvider> {
    <SXContactsPresenter> * _contactsPresenter;
    <SXDeviceCapabilities> * _deviceCapabilities;
    <SXHost> * _host;
    <SXMessagePresenter> * _messagePresenter;
}

@property (nonatomic, readonly) <SXContactsPresenter> *contactsPresenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDeviceCapabilities> *deviceCapabilities;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXHost> *host;
@property (nonatomic, readonly) <SXMessagePresenter> *messagePresenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)arg1;
- (void)addToContacts:(id)arg1;
- (void)call:(id)arg1 showDialog:(bool)arg2;
- (id)contactsPresenter;
- (void)copy:(id)arg1;
- (id)deviceCapabilities;
- (void)faceTime:(id)arg1;
- (id)host;
- (id)initWithHost:(id)arg1 contactsPresenter:(id)arg2 messagePresenter:(id)arg3 deviceCapabilities:(id)arg4;
- (void)message:(id)arg1;
- (id)messagePresenter;

@end
