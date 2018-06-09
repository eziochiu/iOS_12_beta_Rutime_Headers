/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsChatOptionsCell : CKDetailsCell <CKDetailsCell> {
    UISwitch * _controlSwitch;
}

@property (nonatomic, retain) UISwitch *controlSwitch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)estimatedHeight;
+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

- (void).cxx_destruct;
- (id)controlSwitch;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setControlSwitch:(id)arg1;

@end
