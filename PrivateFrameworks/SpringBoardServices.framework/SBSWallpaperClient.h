/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSWallpaperClient : FBSServiceFacilityClient

- (void)fetchThumbnailForVariant:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithCalloutQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;

@end
