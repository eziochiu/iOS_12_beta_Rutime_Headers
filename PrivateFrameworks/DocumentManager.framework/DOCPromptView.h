/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCPromptView : UIView <DOCAppearanceProtocol> {
    UILabel * _label;
    NSString * _promptText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *promptText;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)promptText;
- (void)setPromptText:(id)arg1;
- (void)updateAppearance:(id)arg1;

@end
