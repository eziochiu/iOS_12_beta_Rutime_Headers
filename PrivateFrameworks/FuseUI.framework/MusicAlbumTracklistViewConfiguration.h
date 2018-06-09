/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicAlbumTracklistViewConfiguration : MusicProductTracklistTableViewConfiguration <ISURLBagObserver> {
    <MusicEntityProviding> * _entityProvider;
    NSString * _groupingProperty;
    <MusicEntityProviding> * _originalEntityProvider;
    unsigned long long  _originalMinimumNumberOfEntitiesForSection;
    NSString * _wantsGroupingProperty;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *groupingProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *wantsGroupingProperty;

- (void).cxx_destruct;
- (void)_configureContentDescriptorsForSectioning:(bool)arg1;
- (void)_configureTracklistTableViewDescriptorWithTintInformation:(id)arg1;
- (void)_entityProviderDidInvalidate;
- (void)_groupIfNecessary;
- (id)_loadTracklistTableViewDescriptor;
- (void)_updateTracklistPopularityIndicatorVisibility;
- (void)bagDidChange:(id)arg1;
- (void)dealloc;
- (id)entityProvider;
- (id)groupingProperty;
- (id)initWithEntityProvider:(id)arg1;
- (id)newSectionEntityValueContext;
- (void)setGroupingProperty:(id)arg1;
- (void)setWantsGroupingProperty:(id)arg1;
- (id)wantsGroupingProperty;

@end
