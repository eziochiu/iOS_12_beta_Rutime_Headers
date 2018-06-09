/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailExpandableDescriptionCell : NTKCFaceDetailDescriptionCell {
    bool  _canExpand;
    <NTKCFaceDetailExpandableDescriptionCellDelegate> * _delegate;
    bool  _expanded;
    NSString * _laidOutContentSizeCategory;
    double  _laidOutWidth;
    UIButton * _moreButton;
}

@property (nonatomic) bool canExpand;
@property (nonatomic) <NTKCFaceDetailExpandableDescriptionCellDelegate> *delegate;
@property (nonatomic) bool expanded;
@property (nonatomic, retain) NSString *laidOutContentSizeCategory;
@property (nonatomic) double laidOutWidth;
@property (nonatomic, retain) UIButton *moreButton;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_fontSizeDidChange;
- (id)_moreButton;
- (void)_moreTapped;
- (bool)canExpand;
- (id)delegate;
- (bool)expanded;
- (id)init;
- (id)laidOutContentSizeCategory;
- (double)laidOutWidth;
- (void)layoutSubviews;
- (id)moreButton;
- (void)setCanExpand:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setLaidOutContentSizeCategory:(id)arg1;
- (void)setLaidOutWidth:(double)arg1;
- (void)setMoreButton:(id)arg1;

@end
