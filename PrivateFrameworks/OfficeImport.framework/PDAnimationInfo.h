/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimationInfo : NSObject {
    PDAnimationInfoData * mEntrance;
    PDAnimationInfoData * mExit;
    PDAnimationInfoData * mMedia;
    PDMediaNode * mediaNode;
}

@property (nonatomic, retain) PDAnimationInfoData *mediaData;
@property (nonatomic, retain) PDMediaNode *mediaNode;

- (void)dealloc;
- (id)description;
- (id)entranceData;
- (id)exitData;
- (id)mediaData;
- (id)mediaNode;
- (void)setEntranceData:(id)arg1;
- (void)setExitData:(id)arg1;
- (void)setMediaData:(id)arg1;
- (void)setMediaNode:(id)arg1;

@end
