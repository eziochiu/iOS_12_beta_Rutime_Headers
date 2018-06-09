/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUWelcomeToNewsViewStyle : NSObject {
    UIImage * _appIconImage;
    NSAttributedString * _descriptionAttributedString;
    NSAttributedString * _titleAttributedString;
}

@property (nonatomic, readonly) UIImage *appIconImage;
@property (nonatomic, readonly, copy) NSAttributedString *descriptionAttributedString;
@property (nonatomic, readonly, copy) NSAttributedString *titleAttributedString;

- (void).cxx_destruct;
- (id)appIconImage;
- (id)createDescriptionAttributedString;
- (id)createTitleAttributedString;
- (id)descriptionAttributedString;
- (id)init;
- (id)titleAttributedString;

@end
