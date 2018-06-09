/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFNavBarSpinnerManager : NSObject {
    NSMutableDictionary * _navigationItems;
    NSMutableDictionary * _savedLeftItems;
    NSMutableDictionary * _savedRightItems;
}

+ (id)sharedSpinnerManager;

- (void).cxx_destruct;
- (id)init;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2;
- (void)stopAnimatingForIdentifier:(id)arg1;

@end
