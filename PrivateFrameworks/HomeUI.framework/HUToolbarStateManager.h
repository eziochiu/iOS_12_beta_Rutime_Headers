/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUToolbarStateManager : NSObject {
    <HUToolbarStateManagerDelegate> * _delegate;
}

@property (nonatomic) <HUToolbarStateManagerDelegate> *delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)resetStandardToolbar;
- (void)setDelegate:(id)arg1;
- (void)showBackButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)showSettingsButtonWithTarget:(id)arg1 action:(SEL)arg2;

@end
