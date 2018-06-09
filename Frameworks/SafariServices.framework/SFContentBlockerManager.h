/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFContentBlockerManager : NSObject {
    id  _extensionMatchingContext;
    NSSet * _extensions;
    NSMutableDictionary * _extensionsRecompiledAfterBackup;
    bool  _lastExtensionDiscoveryHadError;
    NSMutableSet * _observers;
    NSObject<OS_dispatch_queue> * _recompilationInformationAccessQueue;
    WKUserContentController * _userContentController;
}

@property (nonatomic, readonly) NSSet *extensions;
@property (nonatomic, readonly) WKUserContentController *userContentController;

+ (id)_contentBlockerLoaderConnection;
+ (void)_createContentExtensionsDirectoryWithURL:(id)arg1;
+ (id)contentBlockerStore;
+ (void)getStateOfContentBlockerWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)reloadContentBlockerWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_beginContentBlockerDiscovery;
- (id)_findNewExtensionsAdded:(id)arg1 toExistingExtensions:(id)arg2;
- (bool)_hasRecompilationBeenAttemptedForExtension:(id)arg1;
- (void)_loadContentBlockerRecompilationInformationIfNeeded;
- (void)_loadContentBlockerWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_noteRecompilationWasAttemptedForExtension:(id)arg1;
- (void)_recompileEnabledContentBlockersIfNeeded:(id)arg1;
- (void)_saveContentBlockerRecompilationInformation;
- (void)addObserver:(id)arg1;
- (id)displayNameForExtension:(id)arg1;
- (bool)extensionIsEnabled:(id)arg1;
- (id)extensions;
- (id)init;
- (void)reloadUserContentController;
- (void)removeObserver:(id)arg1;
- (void)setExtension:(id)arg1 isEnabled:(bool)arg2;
- (id)userContentController;

@end
