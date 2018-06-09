/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUDelayedQuitController : NSObject {
    long long  _delayTerminateCount;
    NSMutableArray * _longLivedViewControllers;
}

+ (void)beginDelayingTerminate;
+ (void)checkInLongLivedViewController:(id)arg1;
+ (void)checkOutLongLivedViewController:(id)arg1;
+ (id)checkedInViewControllerOfClass:(Class)arg1;
+ (void)endDelayingTerminate;
+ (bool)isDelayingTerminate;
+ (id)sharedInstance;
+ (bool)viewControllerIsLongLived:(id)arg1;

- (void)_beginDelayingTerminate;
- (void)_checkInLongLivedViewController:(id)arg1;
- (void)_checkOutLongLivedViewController:(id)arg1;
- (id)_checkedInViewControllerOfClass:(Class)arg1;
- (void)_endDelayingTerminate;
- (bool)_isDelayingTerminate;
- (bool)_viewControllerIsLongLived:(id)arg1;
- (void)dealloc;

@end
