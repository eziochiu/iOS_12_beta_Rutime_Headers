/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITouchForwardingRecipient : NSObject {
    long long  autocompletedPhase;
    UIResponder * fromResponder;
    long long  recordedPhase;
    UIResponder * responder;
}

@property (nonatomic) long long autocompletedPhase;
@property (nonatomic) UIResponder *fromResponder;
@property (nonatomic) long long recordedPhase;
@property (nonatomic) UIResponder *responder;

- (void).cxx_destruct;
- (long long)autocompletedPhase;
- (id)description;
- (id)fromResponder;
- (id)initWithResponder:(id)arg1 fromResponder:(id)arg2;
- (long long)recordedPhase;
- (id)responder;
- (void)setAutocompletedPhase:(long long)arg1;
- (void)setFromResponder:(id)arg1;
- (void)setRecordedPhase:(long long)arg1;
- (void)setResponder:(id)arg1;

@end
