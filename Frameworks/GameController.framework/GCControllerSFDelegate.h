/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerSFDelegate : NSObject <NSUserActivityDelegate> {
    NSUserActivity * _activity;
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)fireCompletionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)startScan;
- (void)userActivityWasContinued:(id)arg1;

@end
