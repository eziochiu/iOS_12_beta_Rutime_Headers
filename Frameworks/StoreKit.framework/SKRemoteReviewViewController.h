/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRemoteReviewViewController : _UIRemoteViewController <SKUIClientReviewViewController> {
    <SKRemoteReviewViewControllerDelegate> * _delegate;
    SKStoreReviewViewController * _reviewViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKRemoteReviewViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SKStoreReviewViewController *reviewViewController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)delegate;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;
- (id)reviewViewController;
- (void)setDelegate:(id)arg1;
- (void)setReviewViewController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
