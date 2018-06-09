/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUISportsOverlayLayout : NSObject <VUIOverlayLayoutProtocol> {
    VUITextBadgeLayout * _liveBadgeLayout;
    VUIImageLayout * _logoImageLayout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    VUIScoreboardLayout * _scoreboardLayout;
    VUITextBadgeLayout * _textBadgeLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUITextBadgeLayout *liveBadgeLayout;
@property (nonatomic, retain) VUIImageLayout *logoImageLayout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, retain) VUIScoreboardLayout *scoreboardLayout;
@property (readonly) Class superclass;
@property (nonatomic, retain) VUITextBadgeLayout *textBadgeLayout;
@property (nonatomic, readonly) long long type;

+ (id)_sportsOverlayALayout:(long long)arg1;
+ (id)_sportsOverlayBLayout:(long long)arg1;
+ (id)_sportsOverlayCLayout;
+ (id)overlayLayoutForScoreboardType:(long long)arg1 interfaceIdiom:(long long)arg2;

- (void).cxx_destruct;
- (id)liveBadgeLayout;
- (id)logoImageLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)scoreboardLayout;
- (void)setLiveBadgeLayout:(id)arg1;
- (void)setLogoImageLayout:(id)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScoreboardLayout:(id)arg1;
- (void)setTextBadgeLayout:(id)arg1;
- (id)textBadgeLayout;
- (long long)type;

@end
