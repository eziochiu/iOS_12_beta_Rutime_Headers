/* made by EzioChiu.
 */

@protocol BLTSettingSyncing <NSObject>

@required

- (void)removeSectionWithSectionID:(NSString *)arg1;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(NSString *)arg2 mirror:(bool)arg3;
- (void)setSectionInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: BLTPBSectionInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setSectionSubtypeParametersIcon:(BLTPBSectionIcon *)arg1 forSectionID:(NSString *)arg2 forSubtypeID:(long long)arg3;

@end
