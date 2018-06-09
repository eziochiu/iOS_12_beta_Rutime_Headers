/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAssociatedMessageChatItem : CKChatItem {
    NSString * _timestampString;
}

@property (nonatomic, readonly) NSString *associatedChatItemGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } associatedMessageRange;
@property (nonatomic, readonly) bool failed;
@property (nonatomic, readonly) struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; float x3; float x4; float x5; float x6; float x7; } geometryDescriptor;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) bool parentMessageIsFromMe;
@property (nonatomic, readonly) IMHandle *sender;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, copy) NSString *timestampString;

- (void).cxx_destruct;
- (id)IMAssociatedMessageChatItem;
- (id)associatedChatItemGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (bool)failed;
- (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; float x3; float x4; float x5; float x6; float x7; })geometryDescriptor;
- (id)guid;
- (bool)isFromMe;
- (id)loadTimestampString;
- (id)loadTranscriptDrawerText;
- (bool)parentMessageIsFromMe;
- (id)sender;
- (void)setTimestampString:(id)arg1;
- (id)time;
- (id)timestampString;
- (BOOL)transcriptOrientation;
- (bool)wantsDrawerLayout;

@end
