/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STTimeAllowancesViewModel : NSObject {
    NSDictionary * _allowancesByIdentifier;
    STAlwaysAllowList * _alwaysAllowList;
    STDeviceBedtime * _bedtime;
}

@property (nonatomic, copy) NSDictionary *allowancesByIdentifier;
@property (nonatomic, copy) STAlwaysAllowList *alwaysAllowList;
@property (nonatomic, copy) STDeviceBedtime *bedtime;

- (void).cxx_destruct;
- (id)allowancesByIdentifier;
- (id)alwaysAllowList;
- (id)bedtime;
- (id)init;
- (void)setAllowancesByIdentifier:(id)arg1;
- (void)setAlwaysAllowList:(id)arg1;
- (void)setBedtime:(id)arg1;

@end
