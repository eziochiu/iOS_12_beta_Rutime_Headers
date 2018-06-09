/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXGalleryItemImageViewFactory : NSObject <SXGalleryItemImageViewFactory> {
    <SXReachabilityProvider> * _reachabilityProvider;
    <SXResourceDataSourceProvider> * _resourceDataSourceProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXReachabilityProvider> *reachabilityProvider;
@property (nonatomic, readonly) <SXResourceDataSourceProvider> *resourceDataSourceProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)imageViewForGalleryItem:(id)arg1 imageResource:(id)arg2;
- (id)initWithResourceDataSourceProvider:(id)arg1 reachabilityProvider:(id)arg2;
- (id)reachabilityProvider;
- (id)resourceDataSourceProvider;

@end
