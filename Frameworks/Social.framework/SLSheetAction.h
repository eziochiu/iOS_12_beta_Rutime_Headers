/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetAction : SLComposeSheetConfigurationItem

@property (nonatomic, copy) id /* block */ actionBlock;

- (id /* block */)actionBlock;
- (id)initWithTitle:(id)arg1 value:(id)arg2 actionBlock:(id /* block */)arg3;
- (void)setActionBlock:(id /* block */)arg1;

@end
