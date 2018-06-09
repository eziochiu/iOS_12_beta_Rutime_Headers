/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRCarPlayAppPolicy : NSObject {
    bool  _badgesAppIcon;
    bool  _canDisplayOnCarScreen;
    bool  _carPlaySupported;
    bool  _handlesCarIntents;
    bool  _launchUsingMapsTemplateUI;
    bool  _launchUsingMusicUIService;
    bool  _launchUsingSiri;
    bool  _showsNotifications;
    NSDictionary * _siriActivationOptions;
}

@property (nonatomic) bool badgesAppIcon;
@property (nonatomic) bool canDisplayOnCarScreen;
@property (getter=isCarPlaySupported, nonatomic) bool carPlaySupported;
@property (nonatomic) bool handlesCarIntents;
@property (nonatomic) bool launchUsingMapsTemplateUI;
@property (nonatomic) bool launchUsingMusicUIService;
@property (nonatomic) bool launchUsingSiri;
@property (nonatomic) bool showsNotifications;
@property (nonatomic, copy) NSDictionary *siriActivationOptions;

- (void).cxx_destruct;
- (bool)badgesAppIcon;
- (bool)canDisplayOnCarScreen;
- (bool)handlesCarIntents;
- (id)init;
- (bool)isCarPlaySupported;
- (bool)launchUsingMapsTemplateUI;
- (bool)launchUsingMusicUIService;
- (bool)launchUsingSiri;
- (void)setBadgesAppIcon:(bool)arg1;
- (void)setCanDisplayOnCarScreen:(bool)arg1;
- (void)setCarPlaySupported:(bool)arg1;
- (void)setHandlesCarIntents:(bool)arg1;
- (void)setLaunchUsingMapsTemplateUI:(bool)arg1;
- (void)setLaunchUsingMusicUIService:(bool)arg1;
- (void)setLaunchUsingSiri:(bool)arg1;
- (void)setShowsNotifications:(bool)arg1;
- (void)setSiriActivationOptions:(id)arg1;
- (bool)showsNotifications;
- (id)siriActivationOptions;

@end
