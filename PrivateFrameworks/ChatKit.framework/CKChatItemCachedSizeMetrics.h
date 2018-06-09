/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKChatItemCachedSizeMetrics : NSObject <NSSecureCoding> {
    NSString * _chatItemGUID;
    NSString * _key;
    NSDate * _lastAccess;
    IMDoubleLinkedListNode * _node;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textAlignmentInsets;
}

@property (nonatomic, retain) NSString *chatItemGUID;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSDate *lastAccess;
@property (nonatomic, retain) IMDoubleLinkedListNode *node;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textAlignmentInsets;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chatItemGUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)lastAccess;
- (id)node;
- (void)setChatItemGUID:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setLastAccess:(id)arg1;
- (void)setNode:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textAlignmentInsets;

@end
