/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIFieldSettingDescriptionView : SKUISettingDescriptionView {
    bool  _enabled;
}

@property (nonatomic) bool enabled;

- (void)beginEdits;
- (void)commitEdits;
- (bool)enabled;
- (void)setEnabled:(bool)arg1;

@end
