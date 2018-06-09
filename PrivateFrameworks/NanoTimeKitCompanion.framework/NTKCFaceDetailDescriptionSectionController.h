/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailDescriptionSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailExpandableDescriptionCellDelegate> {
    <NTKCFaceDetailDescriptionSectionDelegate> * _delegate;
    bool  _external;
}

@property (nonatomic, retain) NTKCFaceDetailExpandableDescriptionCell *cell;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailDescriptionSectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expanded;
@property (nonatomic) bool external;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_descriptionForFace:(id)arg1 inGallery:(bool)arg2 orExternal:(bool)arg3;
+ (bool)hasDescriptionSectionForFace:(id)arg1 inGallery:(bool)arg2 orExternal:(bool)arg3;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_faceDescription;
- (id)delegate;
- (void)descriptionCellDidExpand:(id)arg1;
- (bool)expanded;
- (bool)external;
- (void)faceDidChange;
- (id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(bool)arg3 external:(bool)arg4;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExternal:(bool)arg1;
- (id)titleForHeader;

@end
