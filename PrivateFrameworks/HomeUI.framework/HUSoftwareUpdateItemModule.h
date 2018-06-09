/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateItemModule : HFItemModule {
    NSSet * _accessories;
    HUSoftwareUpdateActionAndProgressItem * _actionAndProgressItem;
    HMHome * _home;
    NSSet * _itemProviders;
    HFStaticItem * _learnMoreItem;
    HUSoftwareUpdateInfoItemProvider * _softwareUpdateInfoItemProvider;
    HFItem<HFSoftwareUpdatableItemProtocol> * _sourceItem;
    bool  _unifyDownloadAndDescriptionSections;
}

@property (nonatomic, readonly) NSSet *accessories;
@property (nonatomic, retain) HUSoftwareUpdateActionAndProgressItem *actionAndProgressItem;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HFStaticItem *learnMoreItem;
@property (nonatomic, retain) HUSoftwareUpdateInfoItemProvider *softwareUpdateInfoItemProvider;
@property (nonatomic, readonly) HFItem<HFSoftwareUpdatableItemProtocol> *sourceItem;
@property (nonatomic) bool unifyDownloadAndDescriptionSections;

- (void).cxx_destruct;
- (id)accessories;
- (id)actionAndProgressItem;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3;
- (id)itemProviders;
- (id)learnMoreItem;
- (void)setActionAndProgressItem:(id)arg1;
- (void)setLearnMoreItem:(id)arg1;
- (void)setSoftwareUpdateInfoItemProvider:(id)arg1;
- (void)setUnifyDownloadAndDescriptionSections:(bool)arg1;
- (id)softwareUpdateInfoItemProvider;
- (id)sourceItem;
- (bool)unifyDownloadAndDescriptionSections;

@end
