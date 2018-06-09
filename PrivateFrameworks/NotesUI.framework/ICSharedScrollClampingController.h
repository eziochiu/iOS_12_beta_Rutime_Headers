/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICSharedScrollClampingController : NSObject {
    long long  _scrollClampingStack;
    double  _scrollClampingTopOffsetFactor;
    double  _scrollClampingTopOffsetLineFragmentHeight;
    long long  _scrollClampingTopTextIndex;
    double  _scrollClampingTurnOffDelay;
    ICTextView * _textView;
}

@property (readonly) long long scrollClampingStack;
@property double scrollClampingTopOffsetFactor;
@property (nonatomic) double scrollClampingTopOffsetLineFragmentHeight;
@property long long scrollClampingTopTextIndex;
@property (nonatomic, readonly) double scrollClampingTurnOffDelay;
@property (nonatomic, readonly) ICTextView *textView;

- (void).cxx_destruct;
- (void)clamp;
- (id)clampedYValue;
- (void)dealloc;
- (id)initWithTextView:(id)arg1 listensToMergeNotifications:(bool)arg2;
- (id)initWithTextView:(id)arg1 listensToMergeNotifications:(bool)arg2 clampingTurnOffDelay:(double)arg3;
- (bool)isClamped;
- (void)mergeRelatedOperationsDidEnd:(id)arg1;
- (void)mergeRelatedOperationsWillBegin:(id)arg1;
- (long long)scrollClampingStack;
- (double)scrollClampingTopOffsetFactor;
- (double)scrollClampingTopOffsetLineFragmentHeight;
- (long long)scrollClampingTopTextIndex;
- (double)scrollClampingTurnOffDelay;
- (void)setScrollClampingStack:(long long)arg1;
- (void)setScrollClampingTopOffsetFactor:(double)arg1;
- (void)setScrollClampingTopOffsetLineFragmentHeight:(double)arg1;
- (void)setScrollClampingTopTextIndex:(long long)arg1;
- (void)textStorageWillEndEditingNotification:(id)arg1;
- (id)textView;
- (void)topTextIndex:(unsigned long long*)arg1 topTextOffset:(double*)arg2 topTextFragmentHeight:(double*)arg3;
- (void)unclamp;
- (void)unclampWithMergeUpdates:(bool)arg1;

@end
