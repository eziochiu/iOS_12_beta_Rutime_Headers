/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAppleConnectExtensionContext : NSExtensionContext <_SFAppleConnectExtensionVendorProtocol> {
    NSObject<OS_dispatch_source> * _completeRequestSource;
    bool  _presentingExtensionUI;
}

@property (nonatomic) bool presentingExtensionUI;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)_completeRequest;
- (void)_completeRequestAfterDelay;
- (void)messageReceivedWithName:(id)arg1 userInfo:(id)arg2;
- (bool)presentingExtensionUI;
- (void)setPresentingExtensionUI:(bool)arg1;

@end
