/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreModelTVShowBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int title : 1; 
        unsigned int shortTitle : 1; 
        unsigned int editorNotes : 1; 
        unsigned int shortEditorNotes : 1; 
        unsigned int editorialArtwork : 1; 
        unsigned int artwork : 1; 
        unsigned int episodeCount : 1; 
        unsigned int tagline : 1; 
    }  _requestedTVShowProperties;
    MPStoreModelStoreAssetBuilder * _storeAssetBuilder;
    MPPropertySet * _storeAssetProperties;
}

+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;

@end
