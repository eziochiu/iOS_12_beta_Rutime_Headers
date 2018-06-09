/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageSource : NSObject

@property (nonatomic, readonly) unsigned short sourceIdentifier;

- (id)newImageForAsset:(id)arg1 createMetadata:(id*)arg2;
- (unsigned short)sourceIdentifier;

@end
