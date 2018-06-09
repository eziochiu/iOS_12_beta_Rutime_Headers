/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextDragRequest : NSObject <UITextDragRequest> {
    UITextRange * _dragRange;
    <UIDragSession> * _dragSession;
    NSArray * _existingItems;
    bool  _selected;
    NSArray * _suggestedItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UITextRange *dragRange;
@property (nonatomic, readonly) <UIDragSession> *dragSession;
@property (nonatomic, readonly) NSArray *existingItems;
@property (readonly) unsigned long long hash;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) NSArray *suggestedItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dragRange;
- (id)dragSession;
- (id)existingItems;
- (id)initWithRange:(id)arg1 inSession:(id)arg2;
- (bool)isSelected;
- (void)setSelected:(bool)arg1;
- (void)setSuggestedItems:(id)arg1;
- (id)suggestedItems;

@end
