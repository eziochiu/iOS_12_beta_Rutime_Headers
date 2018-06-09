/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreModelTVEpisodeBuilder : MPStoreModelObjectBuilder {
    MPStoreModelPlaybackPositionBuilder * _playbackPositionBuilder;
    struct { 
        unsigned int initialized : 1; 
        unsigned int title : 1; 
        unsigned int descriptionText : 1; 
        unsigned int duration : 1; 
        unsigned int artwork : 1; 
        unsigned int screenshotArtwork : 1; 
        unsigned int keepLocalEnableState : 1; 
        unsigned int keepLocalManagedStatus : 1; 
        unsigned int hasCloudSyncSource : 1; 
        unsigned int localFileAsset : 1; 
        unsigned int libraryAdded : 1; 
        unsigned int libraryAddEligible : 1; 
        unsigned int musicShow : 1; 
        unsigned int episodeNumber : 1; 
        unsigned int explicitRating : 1; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int number : 1; 
            unsigned int year : 1; 
            struct { 
                unsigned int identifiers : 1; 
                unsigned int title : 1; 
                struct { 
                    unsigned int identifiers : 1; 
                    unsigned int name : 1; 
                    unsigned int artwork : 1; 
                } showCreator; 
            } show; 
        } season; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int title : 1; 
            struct { 
                unsigned int identifiers : 1; 
                unsigned int name : 1; 
                unsigned int artwork : 1; 
            } showCreator; 
        } show; 
    }  _requestedEpisodeProperties;
    MPStoreModelStoreAssetBuilder * _storeAssetBuilder;
    MPPropertySet * _storeAssetProperties;
}

+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;

@end
