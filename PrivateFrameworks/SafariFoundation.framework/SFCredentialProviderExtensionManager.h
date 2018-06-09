/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFCredentialProviderExtensionManager : NSObject {
    bool  _errorEncounteredDuringLastExtensionDiscovery;
    id  _extensionMatchingToken;
    NSSet * _extensions;
    NSMutableOrderedSet * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSSet *extensions;
@property (nonatomic, readonly) NSExtension *primaryExtension;
@property (nonatomic, readonly) NSExtension *primaryExtensionSync;

// Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_beginExtensionDiscovery;
- (void)_endExtensionDiscovery;
- (id)_extensions;
- (void)_notifyObservers:(id)arg1;
- (void)_updateExtensions:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)displayNameForExtension:(id)arg1;
- (bool)extensionIsEnabled:(id)arg1;
- (id)extensions;
- (void)getPrimaryExtensionWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)primaryExtension;
- (id)primaryExtensionSync;
- (void)removeObserver:(id)arg1;
- (void)setExtension:(id)arg1 isEnabled:(bool)arg2;
- (bool)shouldShowConfigurationUIForEnablingExtension:(id)arg1;

// Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices

- (id)auxiliaryRemoteObjectForExtension:(id)arg1 withRequestID:(id)arg2;
- (void)instantiateViewControllerForExtension:(id)arg1 connectionHandler:(id /* block */)arg2;

@end
