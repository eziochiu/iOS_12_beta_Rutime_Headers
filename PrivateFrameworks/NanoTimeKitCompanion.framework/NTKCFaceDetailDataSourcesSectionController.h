/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailDataSourcesSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailToggleCellDelegate, NTKCUpNextDataSourcesManagerIdentifiersDelegate> {
    <NTKCFaceDetailDataSourcesSectionDelegate> * _delegate;
    NSString * _headerTitle;
    NTKCUpNextDataSourcesManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailDataSourcesSectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic, retain) NTKCUpNextDataSourcesManager *manager;
@property (nonatomic, retain) NSArray *rows;
@property (readonly) Class superclass;

+ (bool)hasDataSourcesSectionForFace:(id)arg1 inGallery:(bool)arg2;

- (void).cxx_destruct;
- (void)_buildRowsWithDataSourceIdentifiers:(id)arg1 donatedAppIdentifiers:(id)arg2;
- (id)_getDisabledDataSources;
- (id)delegate;
- (void)faceDidChange;
- (id)headerTitle;
- (id)manager;
- (void)manager:(id)arg1 didUpdateDataSourceIdentifiers:(id)arg2 donatedIdentifiers:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setManager:(id)arg1;
- (id)titleForHeader;
- (void)toggleCell:(id)arg1 didToggle:(bool)arg2;

@end
