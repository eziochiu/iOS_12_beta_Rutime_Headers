/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INExtensionContextHost : NSExtensionContext {
    NSBundle * _extensionBundle;
}

@property (nonatomic, retain) NSBundle *extensionBundle;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)extensionBundle;
- (void)setExtensionBundle:(id)arg1;

@end
