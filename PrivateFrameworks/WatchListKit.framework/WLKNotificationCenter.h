/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKNotificationCenter : NSObject {
    <WLKNotificationCenterDelegate> * _delegate;
    <WLKNotificationsImpl> * _impl;
}

@property (nonatomic) <WLKNotificationCenterDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4;
- (void)setDelegate:(id)arg1;

@end
