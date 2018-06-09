/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreModelArtistBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int name : 1; 
        unsigned int hasBiography : 1; 
        unsigned int hasSocialPosts : 1; 
        unsigned int artwork : 1; 
        unsigned int editorialArtwork : 1; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int name : 1; 
        } genre; 
    }  _requestedArtistProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;

@end
