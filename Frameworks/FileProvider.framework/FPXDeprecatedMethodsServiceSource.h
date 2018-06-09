/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXDeprecatedMethodsServiceSource : NSObject <NSFileProviderServiceSource> {
    FPXExtensionContext * _extensionContext;
    NSFileProviderExtension * _instance;
    NSString * _itemIdentifier;
    NSString * _serviceName;
}

@property (nonatomic, readonly, copy) NSString *serviceName;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)arg1 itemIdentifier:(id)arg2 instance:(id)arg3 extensionContext:(id)arg4;
- (id)makeListenerEndpointAndReturnError:(id*)arg1;
- (id)serviceName;

@end
