/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUICardViewLayoutFactory : NSObject {
    long long  _cardLayoutType;
    long long  _gridStyle;
    long long  _gridType;
    long long  _overlayType;
    VUICardViewLayout * _padLayout;
    VUICardViewLayout * _phoneLayout;
    VUICardViewLayout * _tvLayout;
}

@property (nonatomic, readonly) long long cardLayoutType;
@property (nonatomic, readonly) long long gridStyle;
@property (nonatomic, readonly) long long gridType;
@property (nonatomic, readonly) long long overlayType;

+ (id)cardViewFactoryForType:(long long)arg1 gridStyle:(long long)arg2 gridType:(long long)arg3 overlayType:(long long)arg4;

- (void).cxx_destruct;
- (id)_layoutForCardLayoutType:(long long)arg1 interfaceIdiom:(long long)arg2;
- (id)activeLayout;
- (long long)cardLayoutType;
- (id)featuredCardViewLayoutForIdiom:(long long)arg1;
- (long long)gridStyle;
- (long long)gridType;
- (id)initWithCardLayoutType:(long long)arg1 gridStyle:(long long)arg2 gridType:(long long)arg3 overlayType:(long long)arg4;
- (long long)overlayType;
- (id)standardCardViewLayoutForIdiom:(long long)arg1;
- (id)upnextCardViewLayoutForIdiom:(long long)arg1;

@end
