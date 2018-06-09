/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface _RCCompositionUndoItem : NSObject {
    RCComposition * _composition;
    NSString * _reasonAccessTokenName;
}

@property (nonatomic, copy) RCComposition *composition;
@property (nonatomic) NSString *reasonAccessTokenName;

- (void).cxx_destruct;
- (id)composition;
- (id)reasonAccessTokenName;
- (void)setComposition:(id)arg1;
- (void)setReasonAccessTokenName:(id)arg1;

@end
