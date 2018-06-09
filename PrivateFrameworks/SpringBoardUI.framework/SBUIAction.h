/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIAction : NSObject {
    UIView * _badgeView;
    id /* block */  _handler;
    UIImage * _image;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) UIView *badgeView;
@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)badgeView;
- (id /* block */)handler;
- (id)image;
- (id)init;
- (id)initWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 handler:(id /* block */)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 badgeView:(id)arg4 handler:(id /* block */)arg5;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 handler:(id /* block */)arg4;
- (id)subtitle;
- (id)title;

@end
