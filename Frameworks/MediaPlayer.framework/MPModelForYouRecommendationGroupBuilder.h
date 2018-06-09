/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelForYouRecommendationGroupBuilder : NSObject {
    MPMutableSectionedCollection * _flatSectionedItems;
    MPModelForYouRecommendationItemBuilder * _itemBuilder;
    NSDateFormatter * _lastUpdatedDateFormatter;
    struct { 
        unsigned int initialized : 1; 
        unsigned int groupType : 1; 
        unsigned int lastUpdatedDate : 1; 
        unsigned int title : 1; 
        unsigned int subgroups : 1; 
        unsigned int loadAdditionalContentURL : 1; 
        unsigned int refreshURL : 1; 
    }  _requestedGroupProperties;
    MPPropertySet * _requestedGroupPropertySet;
    MPPropertySet * _requestedItemPropertySet;
    NSDictionary * _storeItemMetadataResults;
}

@property (nonatomic, readonly) MPMutableSectionedCollection *flatSectionedItems;
@property (nonatomic, readonly) MPPropertySet *requestedGroupPropertySet;
@property (nonatomic, readonly) MPPropertySet *requestedItemPropertySet;
@property (nonatomic, readonly) NSDictionary *storeItemMetadataResults;

+ (id)allSupportedGroupProperties;
+ (id)allSupportedItemProperties;

- (void).cxx_destruct;
- (id)flatSectionedItems;
- (id)initWithRequestedGroupPropertySet:(id)arg1 requestedItemPropertySet:(id)arg2 storeItemMetadataResults:(id)arg3 flatSectionedItems:(id)arg4;
- (id)modelObjectForRecommendationDictionary:(id)arg1;
- (id)requestedGroupPropertySet;
- (id)requestedItemPropertySet;
- (id)storeItemMetadataResults;

@end
