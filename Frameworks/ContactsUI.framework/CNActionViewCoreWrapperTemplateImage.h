/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNActionViewCoreWrapperTemplateImage : NSObject <CNActionViewTemplateImage> {
    <CNUIUserActionTemplateImage> * _coreTemplateImage;
}

@property (nonatomic, readonly) <CNUIUserActionTemplateImage> *coreTemplateImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coreTemplateImage;
- (id)imageWithColor:(id)arg1;
- (id)initWithCoreTemplateImage:(id)arg1;

@end
