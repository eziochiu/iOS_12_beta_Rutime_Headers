/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBundleResourceRequest : NSObject <NSProgressReporting> {
    NSBundle * _bundle;
    long long  _fetchState;
    double  _priority;
    NSProgress * _progress;
    NSSet * _tags;
}

@property (readonly) NSBundle *bundle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double loadingPriority;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (readonly, copy) NSSet *tags;

+ (void)_addExtensionEndpoint:(id)arg1;
+ (id)_assetPackBundleForBundle:(id)arg1 withAssetPackID:(id)arg2;
+ (id)_connection;
+ (id)_extensionEndpoint;
+ (id)_extensionEndpointForMainBundleOfHostApplication:(id)arg1;
+ (id)_manifestWithBundle:(id)arg1 error:(id*)arg2;
+ (void)_setConnection:(id)arg1;

- (void)beginAccessingResourcesWithCompletionHandler:(id /* block */)arg1;
- (id)bundle;
- (void)conditionallyBeginAccessingResourcesWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)endAccessingResources;
- (id)init;
- (id)initWithTag:(id)arg1;
- (id)initWithTags:(id)arg1;
- (id)initWithTags:(id)arg1 bundle:(id)arg2;
- (double)loadingPriority;
- (id)progress;
- (void)setLoadingPriority:(double)arg1;
- (id)tags;

@end
