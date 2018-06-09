/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIDropTarget : NSObject <UIDropInteractionDelegate> {
    NSMutableString * _dataString;
    long long  _dropItemCounter;
    UIView * _dropTargetView;
    NSTimer * _presentResultsTimer;
}

@property (retain) NSMutableString *dataString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long dropItemCounter;
@property (retain) UIView *dropTargetView;
@property (readonly) unsigned long long hash;
@property (retain) NSTimer *presentResultsTimer;
@property (readonly) Class superclass;

+ (id)dropTargetForView:(id)arg1;
+ (bool)supportsDropTesting;

- (void).cxx_destruct;
- (id)dataString;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (long long)dropItemCounter;
- (id)dropTargetView;
- (id)initWithView:(id)arg1;
- (void)presentResults;
- (void)presentResultsOnMainThread;
- (id)presentResultsTimer;
- (void)setDataString:(id)arg1;
- (void)setDropItemCounter:(long long)arg1;
- (void)setDropTargetView:(id)arg1;
- (void)setPresentResultsTimer:(id)arg1;

@end