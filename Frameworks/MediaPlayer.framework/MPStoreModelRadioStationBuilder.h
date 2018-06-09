/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreModelRadioStationBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int beats1 : 1; 
        unsigned int name : 1; 
        unsigned int editorNotes : 1; 
        unsigned int shortEditorNotes : 1; 
        unsigned int explicit : 1; 
        unsigned int type : 1; 
        unsigned int artwork : 1; 
    }  _requestedRadioStationProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;

@end
