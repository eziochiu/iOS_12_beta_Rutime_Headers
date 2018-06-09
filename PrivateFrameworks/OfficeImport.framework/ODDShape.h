/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDShape : ODDLayoutObject {
    NSMutableArray * mAdjustments;
    int  mPresetType;
    int  mType;
}

- (void)addAdjustment:(id)arg1;
- (id)adjustments;
- (void)dealloc;
- (id)description;
- (id)init;
- (int)presetType;
- (void)setPresetType:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
