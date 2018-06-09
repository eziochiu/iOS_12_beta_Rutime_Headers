/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibrarySearchResultsEntityProviderConfiguration : MusicLibraryBrowseHeterogenousCollectionViewConfiguration {
    NSMutableDictionary * _contentDescriptorsForSectionAndTraitCollections;
    MusicLibrarySearchResultsEntityProvider * _entityValueProvider;
}

@property (nonatomic, readonly) MusicLibrarySearchResultsEntityProvider *entityProvider;

+ (id)_defaultLibraryViewConfigurations;
+ (id)_mediaPickerConfigurationsIncludingPlaylists:(bool)arg1 allowingMultipleSelection:(bool)arg2 pickingSingleCollection:(bool)arg3 omittingGeniusPlaylists:(bool)arg4;
+ (id)defaultConfiguration;
+ (id)mediaPickerConfigurationIncludingPlaylists:(bool)arg1 allowingMultipleSelection:(bool)arg2 pickingSingleCollection:(bool)arg3 omittingGeniusPlaylists:(bool)arg4;

- (void).cxx_destruct;
- (void)_applyTableViewMetricsToContentDescriptor:(id)arg1;
- (id)_collectionViewDescriptorForEntityViewDescriptor:(id)arg1;
- (id)collectionViewDescriptorForSection:(unsigned long long)arg1 traitCollection:(id)arg2;
- (id)entityProvider;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (id)initWithLibraryViewConfigurations:(id)arg1;
- (id)loadEntityViewDescriptor;

@end
