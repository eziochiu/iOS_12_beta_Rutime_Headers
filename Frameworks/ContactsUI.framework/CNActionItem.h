/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNActionItem : NSObject {
    bool  _disabled;
    <CNActionViewTemplateImage> * _templateImage;
    NSString * _title;
    NSString * _type;
}

@property (nonatomic) bool disabled;
@property (nonatomic, readonly) <CNActionViewTemplateImage> *templateImage;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) NSString *type;

+ (id)actionItemWithImage:(id)arg1 type:(id)arg2;
+ (id)actionItemWithTemplateImage:(id)arg1 type:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (bool)disabled;
- (id)initWithTemplateImage:(id)arg1 type:(id)arg2;
- (void)setDisabled:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)templateImage;
- (id)title;
- (id)type;

@end
