/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIOverlayLayout : NSObject <VUIOverlayLayoutProtocol> {
    VUIImageLayout * _appImageLayout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    VUIProgressBarLayout * _progressBarLayout;
}

@property (nonatomic, retain) VUIImageLayout *appImageLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, retain) VUIProgressBarLayout *progressBarLayout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)overlayLayoutForInterfaceIdiom:(long long)arg1;

- (void).cxx_destruct;
- (id)appImageLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)progressBarLayout;
- (void)setAppImageLayout:(id)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setProgressBarLayout:(id)arg1;
- (long long)type;

@end
