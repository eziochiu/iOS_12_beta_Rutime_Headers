/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtensionServiceCenter : NSObject {
    NSDictionary * _containingAppProxies;
    _MXExtensionProvider * _extensionProvider;
    NSDictionary * _extensions;
    NSObject<OS_dispatch_queue> * _extlock;
    NSDictionary * _mapsExtensions;
}

@property (nonatomic, copy) NSDictionary *containingAppProxies;
@property (nonatomic, readonly) _MXExtensionProvider *extensionProvider;
@property (nonatomic, copy) NSDictionary *extensions;
@property (nonatomic, copy) NSDictionary *mapsExtensions;

- (void).cxx_destruct;
- (void)_clearExtensions;
- (id)_extensionWithIdentifier:(id)arg1;
- (id)_siblingExtensionsWithContainingAppIdentifer:(id)arg1;
- (id)allExtensions;
- (id)containingAppProxies;
- (id)extensionProvider;
- (id)extensions;
- (id)initWithExtensionProvider:(id)arg1;
- (id)mapsExtensions;
- (void)receivedExtensions:(id)arg1 error:(id)arg2;
- (void)setContainingAppProxies:(id)arg1;
- (void)setExtensions:(id)arg1;
- (void)setMapsExtensions:(id)arg1;

@end
