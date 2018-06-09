/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAlbumEmptyView : UIView {
    UILabel * _bodyLabel;
    NSString * _bodyLabelText;
    CLKDevice * _device;
    UILabel * _headerLabel;
    UIImageView * _iconImageView;
}

@property (nonatomic, retain) NSString *bodyLabelText;

- (void).cxx_destruct;
- (id)bodyLabelText;
- (id)initForDevice:(id)arg1;
- (void)layoutSubviews;
- (void)setBodyLabelText:(id)arg1;

@end