/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStoreBrowseSectionBuilder : NSObject {
    struct { 
        unsigned int initialized : 1; 
        unsigned int title : 1; 
        unsigned int type : 1; 
        unsigned int loadAdditionalContentURL : 1; 
        unsigned int previouslyRetrievedNestedResponse : 1; 
        unsigned int uniformContentItemType : 1; 
        unsigned int memberOfChartSet : 1; 
        unsigned int brick : 1; 
    }  _requestedBrowseSectionProperties;
    MPPropertySet * _requestedPropertySet;
}

@property (nonatomic, readonly) MPPropertySet *requestedPropertySet;
@property (nonatomic, readonly) MPPropertySet *requestedPropertySetExcludingInternalOnlyProperties;

+ (id)allSupportedInternalOnlyProperties;
+ (id)allSupportedPropertiesIncludingInternalOnlyProperties:(bool)arg1;

- (void).cxx_destruct;
- (id)initWithRequestedPropertySet:(id)arg1;
- (id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(bool)arg4 isBrick:(bool)arg5 previouslyRetrievedNestedResponse:(id)arg6;
- (id)requestedPropertySet;
- (id)requestedPropertySetExcludingInternalOnlyProperties;

@end
