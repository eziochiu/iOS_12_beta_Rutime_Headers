/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoViewControllerAdConfiguration : NSObject <NSCopying> {
    bool  _adsEnabled;
    bool  _allowLeadingAdSlot;
}

@property (getter=areAdsEnabled, nonatomic, readonly) bool adsEnabled;
@property (nonatomic, readonly) bool allowLeadingAdSlot;

- (bool)allowLeadingAdSlot;
- (bool)areAdsEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithAdsEnabled:(bool)arg1 allowLeadingAdSlot:(bool)arg2;

@end