/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextReplacement : NSObject {
    NSString * _menuTitle;
    NSString * _originalText;
    UITextRange * _range;
    NSString * _replacementText;
    unsigned int  _usageTrackingMask;
}

@property (nonatomic, readonly) NSString *menuTitle;
@property (nonatomic, readonly) NSString *originalText;
@property (nonatomic, readonly) UITextRange *range;
@property (nonatomic, readonly) NSString *replacementText;
@property (nonatomic) unsigned int usageTrackingMask;

+ (id)replacementWithRange:(id)arg1 original:(id)arg2 replacement:(id)arg3 menuTitle:(id)arg4;

- (void).cxx_destruct;
- (id)menuTitle;
- (id)originalText;
- (id)range;
- (id)replacementText;
- (void)setUsageTrackingMask:(unsigned int)arg1;
- (unsigned int)usageTrackingMask;

@end
