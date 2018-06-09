/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFHostExtensionContext : NSExtensionContext <PDFHostProtocol> {
    PDFHostViewController * _hostViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PDFHostViewController *hostViewController;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (oneway void)extensionToHost:(id)arg1;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;

@end
