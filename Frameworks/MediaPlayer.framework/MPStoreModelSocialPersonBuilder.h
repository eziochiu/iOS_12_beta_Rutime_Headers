/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreModelSocialPersonBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int name : 1; 
        unsigned int uncensoredName : 1; 
        unsigned int handle : 1; 
        unsigned int biography : 1; 
        unsigned int artwork : 1; 
        unsigned int isVerified : 1; 
        unsigned int isPrivate : 1; 
    }  _requestedSocialPersonProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;

@end
