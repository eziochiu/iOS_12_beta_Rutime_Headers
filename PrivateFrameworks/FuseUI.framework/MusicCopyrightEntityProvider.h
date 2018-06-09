/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicCopyrightEntityProvider : NSObject <MusicEntityProviding> {
    <MusicEntityValueProviding> * _copyrightEntityValueProvider;
    bool  _hasCopyright;
    bool  _isContainerCopyEntityValueProvider;
    <MusicEntityProviding> * _sourceEntityProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MusicEntityProviding> *sourceEntityProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reloadHasCopyrightAllowingInvalidation:(bool)arg1;
- (void)_sourceEntityProviderDidInvalidateNotification:(id)arg1;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (bool)hasEntities;
- (bool)hasEntitiesNotInLibrary;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)initWithSourceEntityProvider:(id)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (id)sourceEntityProvider;

@end
