/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBLockScreenPluginAppearanceContext : NSObject <NSCopying, NSMutableCopying, SBLockScreenPluginAppearance, SBLockScreenPluginMutableAppearance> {
    long long  backgroundStyle;
    NSArray * elementOverrides;
    bool  hidden;
    SBLockScreenLegibilitySettings * legibilitySettings;
    long long  notificationBehavior;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  presentationRegion;
    long long  presentationStyle;
    unsigned long long  restrictedCapabilities;
}

@property (nonatomic, readonly) long long backgroundStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *elementOverrides;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly, retain) SBLockScreenLegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } presentationRegion;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)backgroundStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)elementOverrides;
- (id)initWithAppearance:(id)arg1;
- (bool)isHidden;
- (id)legibilitySettings;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)notificationBehavior;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRegion;
- (long long)presentationStyle;
- (unsigned long long)restrictedCapabilities;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setElementOverrides:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setNotificationBehavior:(long long)arg1;
- (void)setPresentationRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentationStyle:(long long)arg1;
- (void)setRestrictedCapabilities:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
