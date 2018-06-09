/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMMessagesPresentationContext : NSObject {
    unsigned long long  _activityType;
    NSURL * _bubbleURL;
    <PXCMMSuggestion> * _suggestion;
}

@property (setter=_setActivityType:, nonatomic) unsigned long long activityType;
@property (setter=_setBubbleURL:, nonatomic, copy) NSURL *bubbleURL;
@property (setter=_setSuggestion:, nonatomic, retain) <PXCMMSuggestion> *suggestion;

+ (id)currentContext;
+ (id)presentationContextWithBubbleURL:(id)arg1 activityType:(unsigned long long)arg2;
+ (id)presentationContextWithSuggestion:(id)arg1 activityType:(unsigned long long)arg2;
+ (void)setCurrentContext:(id)arg1;

- (void).cxx_destruct;
- (void)_setActivityType:(unsigned long long)arg1;
- (void)_setBubbleURL:(id)arg1;
- (void)_setSuggestion:(id)arg1;
- (unsigned long long)activityType;
- (id)bubbleURL;
- (id)description;
- (id)suggestion;

@end
