/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVSystemDialog : NSObject {
    struct __CFRunLoopSource { } * _activeRunLoopSource;
    MSVSystemDialogOptions * _options;
    id /* block */  _pendingCompletion;
    struct __CFUserNotification { } * _presentedUserNotification;
    NSMutableArray * _textFields;
}

@property (nonatomic) struct __CFRunLoopSource { }*activeRunLoopSource;
@property (nonatomic, readonly) MSVSystemDialogOptions *options;
@property (nonatomic, copy) id /* block */ pendingCompletion;
@property (nonatomic) struct __CFUserNotification { }*presentedUserNotification;
@property (nonatomic, readonly) NSArray *textFields;

+ (id)passwordAlertWithOptions:(id)arg1;
+ (id)systemDialogWithOptions:(id)arg1;

- (void).cxx_destruct;
- (struct __CFRunLoopSource { }*)activeRunLoopSource;
- (void)addTextField:(id)arg1;
- (void)addTextFieldWithTitle:(id)arg1 secure:(bool)arg2;
- (void)clearTextFields;
- (void)dealloc;
- (void)dismiss;
- (id)initWithOptions:(id)arg1;
- (id)options;
- (id /* block */)pendingCompletion;
- (void)presentWithCompletion:(id /* block */)arg1;
- (struct __CFUserNotification { }*)presentedUserNotification;
- (void)setActiveRunLoopSource:(struct __CFRunLoopSource { }*)arg1;
- (void)setPendingCompletion:(id /* block */)arg1;
- (void)setPresentedUserNotification:(struct __CFUserNotification { }*)arg1;
- (id)textFields;

@end
