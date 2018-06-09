/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {
    int  _dataNetworkType;
    bool  _enableRSSI;
    bool  _showRSSI;
    bool  _wifiLinkWarning;
    int  _wifiStrengthBars;
    int  _wifiStrengthRaw;
}

- (id)_dataNetworkImage;
- (id)_dataNetworkImageName;
- (id)_stringForRSSI;
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (double)maximumOverlap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end
