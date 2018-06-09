/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailEditOptionHorizontalSectionController : NTKCFaceDetailEditOptionSectionController <NTKCFaceDetailEditOptionCellDelegate>

@property (nonatomic, retain) NTKCFaceDetailEditOptionCell *cell;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *rows;
@property (readonly) Class superclass;

- (bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (void)didSelectRow:(long long)arg1;
- (Class)editCellClass;
- (void)editOptionCell:(id)arg1 didSelectOptionAtIndex:(long long)arg2;
- (id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (void)reloadActionRow;
- (void)setSelectedOptions:(id)arg1;

@end
