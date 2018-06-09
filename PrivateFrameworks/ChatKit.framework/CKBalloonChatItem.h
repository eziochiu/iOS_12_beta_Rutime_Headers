/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBalloonChatItem : CKChatItem

@property (nonatomic, readonly) unsigned long long balloonCorners;
@property (nonatomic, readonly) BOOL balloonOrientation;
@property (nonatomic, readonly) BOOL balloonShape;
@property (nonatomic, readonly) Class balloonViewClass;
@property (nonatomic, readonly) bool failed;
@property (getter=isFromMe, nonatomic, readonly) bool fromMe;
@property (nonatomic, readonly) Class impactBalloonViewClass;
@property (nonatomic, readonly) IMHandle *sender;
@property (nonatomic, readonly) bool shouldCacheSize;
@property (nonatomic, readonly) BOOL tailShape;
@property (nonatomic, readonly) NSDate *time;

- (unsigned long long)balloonCorners;
- (struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; bool x7; bool x8; bool x9; })balloonDescriptor;
- (BOOL)balloonOrientation;
- (BOOL)balloonShape;
- (Class)balloonViewClass;
- (Class)cellClass;
- (id)cellIdentifier;
- (void)configureBalloonView:(id)arg1;
- (id)contact;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)description;
- (bool)displayDuringSend;
- (bool)failed;
- (Class)impactBalloonViewClass;
- (bool)isEditable;
- (bool)isFromMe;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptDrawerText;
- (bool)needsAdjustedTextAlignmentInsets;
- (bool)needsPreservedAspectRatio;
- (id)sender;
- (bool)shouldCacheSize;
- (BOOL)tailShape;
- (id)time;
- (BOOL)transcriptOrientation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })transcriptTextAlignmentInsets;
- (bool)wantsDrawerLayout;

@end
