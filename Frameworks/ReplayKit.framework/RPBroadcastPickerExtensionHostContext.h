/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastPickerExtensionHostContext : NSExtensionContext <RPBroadcastPickerExtensionHostProtocol> {
    RPBroadcastPickerHostViewController * _hostViewController;
}

@property (nonatomic) RPBroadcastPickerHostViewController *hostViewController;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)extensionObjectProxy;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (oneway void)viewControllerDidFinish;

@end
