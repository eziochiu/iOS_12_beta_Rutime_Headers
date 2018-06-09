/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextPasteItem : NSObject <UITextPasteItem> {
    UITextPasteCoordinator * _coordinator;
    NSDictionary * _defaultAttributes;
    NSItemProvider * _itemProvider;
    id  _localObject;
    NSArray * _supportedPasteConfigurationClasses;
}

@property (nonatomic, readonly) UITextPasteCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSDictionary *defaultAttributes;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSItemProvider *itemProvider;
@property (nonatomic, retain) id localObject;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedPasteConfigurationClasses;

- (void).cxx_destruct;
- (id)coordinator;
- (id)defaultAttributes;
- (id)initWithTextPasteCoordinator:(id)arg1;
- (id)itemProvider;
- (id)localObject;
- (void)setAttachmentResult:(id)arg1;
- (void)setAttributedStringResult:(id)arg1;
- (void)setDefaultAttributes:(id)arg1;
- (void)setDefaultResult;
- (void)setItemProvider:(id)arg1;
- (void)setLocalObject:(id)arg1;
- (void)setNoResult;
- (void)setStringResult:(id)arg1;
- (void)setSupportedPasteConfigurationClasses:(id)arg1;
- (id)supportedPasteConfigurationClasses;

@end
