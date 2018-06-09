/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaProductTracklistTableViewDescriptor : MusicEntityViewDescriptor {
    MusicEntityValueContext * _entityValueContext;
    NSString * _groupingProperty;
    long long  _prominentTrackStoreID;
    MusicEntityViewTracklistItemContentDescriptor * _prominentTracklistItemContentDescriptor;
    NSSet * _propertiesToQueryForContentDescriptorResolution;
    NSString * _wantsGroupingProperty;
}

@property (nonatomic, retain) MusicEntityViewTracklistItemContentDescriptor *defaultContentDescriptor;
@property (nonatomic, copy) NSString *groupingProperty;
@property (nonatomic) long long prominentTrackStoreID;
@property (nonatomic, retain) MusicEntityViewTracklistItemContentDescriptor *prominentTracklistItemContentDescriptor;
@property (nonatomic, copy) NSString *wantsGroupingProperty;

- (void).cxx_destruct;
- (bool)allowsSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)contentDescriptorForIndexPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateContentDescriptorsUsingBlock:(id /* block */)arg1;
- (id)groupingProperty;
- (long long)prominentTrackStoreID;
- (id)prominentTracklistItemContentDescriptor;
- (void)setGroupingProperty:(id)arg1;
- (void)setProminentTrackStoreID:(long long)arg1;
- (void)setProminentTracklistItemContentDescriptor:(id)arg1;
- (void)setWantsGroupingProperty:(id)arg1;
- (id)wantsGroupingProperty;

@end
