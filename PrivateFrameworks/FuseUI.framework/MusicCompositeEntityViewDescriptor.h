/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicCompositeEntityViewDescriptor : MusicEntityViewDescriptor {
    NSArray * _entityViewDescriptors;
}

@property (nonatomic, copy) NSArray *entityViewDescriptors;

- (void).cxx_destruct;
- (id)_entityViewDescriptorForEntityProvider:(id)arg1;
- (void)_handleDisplayValuesDidChangeNotification:(id)arg1;
- (id)_providerListEntityProvider;
- (void)_registerForRelevantNotificationsFromViewDescriptors;
- (void)_setEntityProviderForEntityViewDescriptors:(id)arg1;
- (void)_unregisterForRelevantNotificationsFromViewDescriptors;
- (bool)allowsSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)contentDescriptorForIndexPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)entityViewDescriptors;
- (void)enumerateContentDescriptorsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionHeaderContentDescriptorsUsingBlock:(id /* block */)arg1;
- (bool)includesShuffleAction;
- (id)initWithEntityViewDescriptors:(id)arg1;
- (id)sectionHeaderContentDescriptorForSectionIndex:(unsigned long long)arg1;
- (void)setEntityProvider:(id)arg1;
- (void)setEntityViewDescriptors:(id)arg1;

@end
