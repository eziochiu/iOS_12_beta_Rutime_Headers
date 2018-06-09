/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {
    bool  _hasStackingShadow;
    double  _overlayAlpha;
}

@property (nonatomic) bool hasStackingShadow;
@property (nonatomic) double overlayAlpha;

- (bool)hasStackingShadow;
- (id)init;
- (double)overlayAlpha;
- (void)setHasStackingShadow:(bool)arg1;
- (void)setOverlayAlpha:(double)arg1;

@end
