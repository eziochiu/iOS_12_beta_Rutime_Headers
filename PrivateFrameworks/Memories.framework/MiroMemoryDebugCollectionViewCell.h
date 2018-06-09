/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryDebugCollectionViewCell : UICollectionViewCell {
    PHAsset * _asset;
    UILabel * _data1Label;
    UILabel * _data2Label;
    UILabel * _data3Label;
    UILabel * _date1Label;
    UILabel * _date2Label;
    UILabel * _date3Label;
    <MiroMemoryDebugCollectionViewControllerProtocol> * _delegate;
    NSString * _editStyleStr;
    UIImageView * _thumbnailView;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, retain) UILabel *data1Label;
@property (nonatomic, retain) UILabel *data2Label;
@property (nonatomic, retain) UILabel *data3Label;
@property (nonatomic, retain) UILabel *date1Label;
@property (nonatomic, retain) UILabel *date2Label;
@property (nonatomic, retain) UILabel *date3Label;
@property (nonatomic) <MiroMemoryDebugCollectionViewControllerProtocol> *delegate;
@property (nonatomic, retain) NSString *editStyleStr;
@property (nonatomic, retain) UIImageView *thumbnailView;

+ (bool)hasOneGBRAM;

- (void).cxx_destruct;
- (id)_printImageOrientationforAsset:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_stingerTime;
- (id)asset;
- (id)assetMediaType:(id)arg1 itemStart:(double)arg2 itemDuration:(double)arg3;
- (void)awakeFromNib;
- (void)configureHeader:(bool)arg1;
- (void)configureWithAsset:(id)arg1 pickInfo:(id)arg2 delegate:(id)arg3 indexPath:(id)arg4 isSaveMode:(bool)arg5 textOnly:(bool)arg6 curatedAssets:(id)arg7;
- (unsigned long long)countMediaClips:(bool)arg1;
- (id)data1Label;
- (id)data2Label;
- (id)data3Label;
- (id)date1Label;
- (id)date2Label;
- (id)date3Label;
- (id)delegate;
- (id)determineDerivativeUsedFromAsset:(id)arg1;
- (id)durationsForAsset:(id)arg1 itemDuration:(double)arg2;
- (id)editStyleStr;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAsset:(id)arg1;
- (void)setData1Label:(id)arg1;
- (void)setData2Label:(id)arg1;
- (void)setData3Label:(id)arg1;
- (void)setDate1Label:(id)arg1;
- (void)setDate2Label:(id)arg1;
- (void)setDate3Label:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditStyleStr:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (id)stringForAssetCollectionSubType:(long long)arg1;
- (id)stringForAssetCollectionTypeString:(long long)arg1;
- (id)stringForSize:(unsigned long long)arg1;
- (void)strokeToverMaxT:(float)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3;
- (id)tVsDurationGraph;
- (id)thumbnailView;

@end
