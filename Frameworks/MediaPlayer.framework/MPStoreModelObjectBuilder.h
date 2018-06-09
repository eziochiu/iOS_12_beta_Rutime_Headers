/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreModelObjectBuilder : NSObject {
    MPPropertySet * _requestedPropertySet;
}

@property (nonatomic, readonly) MPPropertySet *requestedPropertySet;

+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (id)initWithRequestedPropertySet:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;
- (id)modelObjectWithStorePlatformDictionary:(id)arg1;
- (id)requestedPropertySet;

@end
