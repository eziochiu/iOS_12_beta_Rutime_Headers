/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIActivityApplicationExtensionDiscovery : NSObject {
    id  _extensionMatchingContext;
    NSArray * _extensionPointIdentifiers;
    bool  _performsInitialMatching;
    NSObject<OS_dispatch_group> * _primedExtensionsGroup;
    NSObject<OS_dispatch_queue> * _primedExtensionsQueue;
    _UIMatchingExtensionsResult * _primedExtensionsResult;
}

@property (retain) id extensionMatchingContext;
@property (nonatomic, copy) NSArray *extensionPointIdentifiers;
@property bool performsInitialMatching;
@property (retain) NSObject<OS_dispatch_group> *primedExtensionsGroup;
@property (retain) NSObject<OS_dispatch_queue> *primedExtensionsQueue;
@property (retain) _UIMatchingExtensionsResult *primedExtensionsResult;

+ (id)extensionBasedActivityForExtension:(id)arg1;
+ (id)extensionMatchingDictionariesForExtensionItems:(id)arg1;

- (void).cxx_destruct;
- (id)activitiesForMatchingContext:(id)arg1 error:(id*)arg2 updateBlock:(id /* block */)arg3;
- (void)cancelActivityMatchingUpdates;
- (void)dealloc;
- (id)extensionMatchingContext;
- (id)extensionPointIdentifiers;
- (id)init;
- (id)initWithExtensionPointIdentifiers:(id)arg1;
- (bool)performsInitialMatching;
- (void)primeWithDiscoveryContext:(id)arg1;
- (id)primedExtensionsGroup;
- (id)primedExtensionsQueue;
- (id)primedExtensionsResult;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setExtensionPointIdentifiers:(id)arg1;
- (void)setPerformsInitialMatching:(bool)arg1;
- (void)setPrimedExtensionsGroup:(id)arg1;
- (void)setPrimedExtensionsQueue:(id)arg1;
- (void)setPrimedExtensionsResult:(id)arg1;

@end
