/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUICardViewLayoutRecord : NSObject <NSCopying> {
    long long  _gridStyle;
    long long  _gridType;
    long long  _layoutType;
    long long  _overlayType;
}

@property (nonatomic) long long gridStyle;
@property (nonatomic) long long gridType;
@property (nonatomic) long long layoutType;
@property (nonatomic) long long overlayType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)gridStyle;
- (long long)gridType;
- (bool)isEqual:(id)arg1;
- (long long)layoutType;
- (long long)overlayType;
- (void)setGridStyle:(long long)arg1;
- (void)setGridType:(long long)arg1;
- (void)setLayoutType:(long long)arg1;
- (void)setOverlayType:(long long)arg1;

@end
